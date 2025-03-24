#include <stdio.h>
#include <string.h>

void inputData(char *state, char *cardCode, char *cityName, int *populationCity, float *kilometersAreaCity, double *PIBCity, int *turistsPointCity) {
    printf("Digite a letra do estado (A-H): \n");
    scanf(" %c", state);
    getchar();

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %4s", cardCode);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cityName, sizeof(cityName), stdin);
    cityName[strcspn(cityName, "\n")] = '\0'; // Remove o '\n'

    printf("Digite a população da cidade: \n");
    scanf("%d", populationCity);

    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", kilometersAreaCity);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", PIBCity);

    printf("Digite número de pontos turisticos da cidade: \n");
    scanf("%d", turistsPointCity);
}

float calculatePopulationDensity(unsigned long int populationCity, float kilometersAreaCity) {
    return (float)populationCity / kilometersAreaCity;
}

float calculatePIBPerCapita(double PIBCity, unsigned long int populationCity) {
    return PIBCity / (float)populationCity;
}

float calculateSuperPower(unsigned long int populationCity, float kilometersAreaCity, int turistsPointCity, double PIBCity, float populationDensityCity) {
    return (float)populationCity + kilometersAreaCity + (float)PIBCity + turistsPointCity + PIBCity + (1 / populationDensityCity);
}


void compairCityProperty(int *cityProperty1, int *cityProperty2, char *cityName1, char *cityName2) {
    if (cityProperty1 > cityProperty2) {
        printf("Resultado: Carta 1 (%s) venceu!", cityName1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", cityName2);
    }
}

int main(){
    // declarando variaveis para a primeira cidade
    char state1, cardCode1[5], cityName1[30];
    int turistsPointCity1, populationCity1;
    float kilometersAreaCity1, populationDensityCity1, PIBperCapitaCity1, superPowerCity1;
    double PIBCity1;

    printf("Informe os dados da primeira carta:\n");
    inputData(&state1, cardCode1, cityName1, &populationCity1, &kilometersAreaCity1, &PIBCity1, &turistsPointCity1);
    printf("Todos os dados da primeira carta foram adicionados com sucesso. Vamos para os dados da segunda carta\n");

    // declarando variáveis para a segunda cidade
    char state2, cardCode2[5], cityName2[30];
    int turistsPointCity2, populationCity2;
    float kilometersAreaCity2, populationDensityCity2, PIBperCapitaCity2;
    double PIBCity2;

    printf("Informe os dados da segunda carta:\n");
    inputData(&state2, cardCode2, cityName2, &populationCity2, &kilometersAreaCity2, &PIBCity2, &turistsPointCity2);

    float densityCity1 = calculatePopulationDensity(populationCity1, kilometersAreaCity1);
    float densityCity2 = calculatePopulationDensity(populationCity2, kilometersAreaCity2);
    float calculatePIBPerCapitaCity1 = calculatePIBPerCapita(PIBCity1, populationCity1);
    float calculatePIBPerCapitaCity2 = calculatePIBPerCapita(PIBCity2, populationCity2);
    float calculateSuperPowerCity1 = calculateSuperPower(populationCity1, kilometersAreaCity1, turistsPointCity1, PIBCity1, densityCity1);
    float calculateSuperPowerCity2 = calculateSuperPower(populationCity2, kilometersAreaCity2, turistsPointCity2, PIBCity2, densityCity2);

    
    // retornando a comparação entre duas cartas
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %i\n", cityName1, populationCity1);
    printf("Carta 2 - %s: %i\n", cityName2, populationCity2);
    compairCityProperty(&populationCity1, &populationCity2, cityName1, cityName2);

    return 0;
}
