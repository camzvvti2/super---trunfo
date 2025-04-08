#include <stdio.h>
#include <string.h>

void inputData(char *state, char *cardCode, char *countryName, int countryNameSize, int *populationCountry, float *kilometersAreaCountry, double *PIBCountry, int *turistsPointCountry)
{
    printf("Digite a letra do estado (A-H): \n");
    scanf(" %c", state);
    getchar(); // Remove o '\n' do buffer

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %4s", cardCode);
    getchar(); // Remove o '\n' do buffer

    printf("Digite o nome da cidade: \n");
    fgets(countryName, countryNameSize, stdin);
    countryName[strcspn(countryName, "\n")] = '\0'; // Remove o '\n' da string

    printf("Digite a população da cidade: \n");
    scanf("%d", populationCountry);

    printf("Digite a área (em km²) da cidade: \n");
    scanf("%f", kilometersAreaCountry);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", PIBCountry);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", turistsPointCountry);
}

float calculatePopulationDensity(unsigned long int populationCountry, float kilometersAreaCountry)
{
    return (float)populationCountry / kilometersAreaCountry;
}

float calculatePIBPerCapita(double PIBCountry, unsigned long int populationCountry)
{
    return PIBCountry / (float)populationCountry;
}

float calculateSuperPower(unsigned long int populationCountry, float kilometersAreaCountry, int turistsPointCountry, double PIBCountry, float populationDensityCountry)
{
    return (float)populationCountry + kilometersAreaCountry + (float)PIBCountry + turistsPointCountry + PIBCountry + (1 / populationDensityCountry);
}

int main()
{

    // declarando variaveis para o primeiro pais
    char state1, cardCode1[5], countryName1[30];
    int turistsPointCountry1, populationCountry1;
    float kilometersAreaCountry1, populationDensityCountry1, PIBperCapitaCountry1, superPowerCountry1;
    double PIBCountry1;

    printf("Informe os dados da primeira carta:\n");
    inputData(&state1, cardCode1, countryName1, sizeof(countryName1), &populationCountry1, &kilometersAreaCountry1, &PIBCountry1, &turistsPointCountry1);
    printf("Todos os dados da primeira carta foram adicionados com sucesso. Vamos para os dados da segunda carta\n");

    // declarando variáveis para o segundo pais
    char state2, cardCode2[5], countryName2[30];
    int turistsPointCountry2, populationCountry2;
    float kilometersAreaCountry2, populationDensityCountry2, PIBperCapitaCountry2;
    double PIBCountry2;

    printf("Informe os dados da segunda carta:\n");
    inputData(&state2, cardCode2, countryName2, sizeof(countryName2), &populationCountry2, &kilometersAreaCountry2, &PIBCountry2, &turistsPointCountry2);

    float densityCountry1 = calculatePopulationDensity(populationCountry1, kilometersAreaCountry1);
    float densityCountry2 = calculatePopulationDensity(populationCountry2, kilometersAreaCountry2);
    float calculatePIBPerCapitaCountry1 = calculatePIBPerCapita(PIBCountry1, populationCountry1);
    float calculatePIBPerCapitaCountry2 = calculatePIBPerCapita(PIBCountry2, populationCountry2);
    float calculateSuperPowerCountry1 = calculateSuperPower(populationCountry1, kilometersAreaCountry1, turistsPointCountry1, PIBCountry1, densityCountry1);
    float calculateSuperPowerCountry2 = calculateSuperPower(populationCountry2, kilometersAreaCountry2, turistsPointCountry2, PIBCountry2, densityCountry2);

    int atributo1, atributo2;

    // Primeiro menu de escolha
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &atributo1);

    // Segundo menu de escolha com opções restantes
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1)
        printf("1. População\n");
    if (atributo1 != 2)
        printf("2. Área\n");
    if (atributo1 != 3)
        printf("3. PIB\n");
    if (atributo1 != 4)
        printf("4. Número de pontos turísticos\n");
    if (atributo1 != 5)
        printf("5. Densidade demográfica\n");

    scanf("%d", &atributo2);

    // Verificação para garantir que são diferentes
    if (atributo1 == atributo2)
    {
        printf("Erro: Os atributos escolhidos devem ser diferentes.\n");
        return 1;
    }

    float value1_attr1 = 0, value2_attr1 = 0;
    float value1_attr2 = 0, value2_attr2 = 0;

    // variavel para armazenar a escolha do jogador
    int escolhaJogador;
    scanf("%d", &escolhaJogador);

    // Comparação do primeiro atributo
    switch (atributo1)
    {
    case 1:
        value1_attr1 = populationCountry1;
        value2_attr1 = populationCountry2;
        break;
    case 2:
        value1_attr1 = kilometersAreaCountry1;
        value2_attr1 = kilometersAreaCountry2;
        break;
    case 3:
        value1_attr1 = PIBCountry1;
        value2_attr1 = PIBCountry2;
        break;
    case 4:
        value1_attr1 = turistsPointCountry1;
        value2_attr1 = turistsPointCountry2;
        break;
    case 5:
        value1_attr1 = densityCountry1;
        value2_attr1 = densityCountry2;
        break;
    }

    // Comparação do segundo atributo
    switch (atributo2)
    {
    case 1:
        value1_attr2 = populationCountry1;
        value2_attr2 = populationCountry2;
        break;
    case 2:
        value1_attr2 = kilometersAreaCountry1;
        value2_attr2 = kilometersAreaCountry2;
        break;
    case 3:
        value1_attr2 = PIBCountry1;
        value2_attr2 = PIBCountry2;
        break;
    case 4:
        value1_attr2 = turistsPointCountry1;
        value2_attr2 = turistsPointCountry2;
        break;
    case 5:
        value1_attr2 = densityCountry1;
        value2_attr2 = densityCountry2;
        break;
    }

    // Definir vencedor por atributo
    int vencedorAttr1 = (atributo1 == 5) ? (value1_attr1 < value2_attr1 ? 1 : (value1_attr1 > value2_attr1 ? 2 : 0))
                                         : (value1_attr1 > value2_attr1 ? 1 : (value1_attr1 < value2_attr1 ? 2 : 0));

    int vencedorAttr2 = (atributo2 == 5) ? (value1_attr2 < value2_attr2 ? 1 : (value1_attr2 > value2_attr2 ? 2 : 0))
                                         : (value1_attr2 > value2_attr2 ? 1 : (value1_attr2 < value2_attr2 ? 2 : 0));

    // Soma dos valores
    float sum1 = value1_attr1 + value1_attr2;
    float sum2 = value2_attr1 + value2_attr2;

    // Exibição dos resultados
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Carta 1: %s\n", countryName1);
    printf("Carta 2: %s\n", countryName2);

    printf("Atributo 1 (opção %d)\n", atributo1);
    printf("Atributo 2 (opção %d)\n", atributo2);

    printf("Valor atributo 1: %.2f\n", value1_attr1);
    printf("Valor atributo 2: %.2f\n", value2_attr2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", countryName1, sum1);
    printf("%s: %.2f\n", countryName2, sum2);

    if (sum1 > sum2)
        printf("Resultado final: Carta 1 (%s) venceu!\n", countryName1);
    else if (sum2 > sum1)
        printf("Resultado final: Carta 2 (%s) venceu!\n", countryName2);
    else
        printf("Resultado final: Empate!\n");

    return 0;
}