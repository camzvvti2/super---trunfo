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

    printf("Escolha uma opção para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    // variavel para armazenar a escolha do jogador
    int escolhaJogador;
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        // O nome dos dois países.
        printf("Comparação entre: %s e %s\n", countryName1, countryName2);
        // O atributo usado na comparação.
        printf("O atributo usado na comparação foi: População\n");
        // Os valores do atributo para cada carta.
        printf("O valor de cada atributo é: (%d) para a carta 1,  e (%d) para a carta 2\n", populationCountry1, populationCountry2);

        // Qual carta venceu.
        if (populationCountry1 > populationCountry2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", countryName1);
        }
        else if (populationCountry1 < populationCountry2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", countryName2);
        }
        else
        {
            printf("Empate!");
        }
        break;

    case 2:
        // O nome dos dois países.
        printf("Comparação entre: %s e %s\n", countryName1, countryName2);
        // O atributo usado na comparação.
        printf("O atributo usado na comparação foi: Área\n");
        // Os valores do atributo para cada carta.
        printf("O valor de cada atributo é: (%.2f) para a carta 1,  e (%.2f) para a carta 2\n", kilometersAreaCountry1, kilometersAreaCountry2);

        // Qual carta venceu.
        if (kilometersAreaCountry1 > kilometersAreaCountry2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", countryName1);
        }
        else if (kilometersAreaCountry1 < kilometersAreaCountry2)
        {
            printf("Resultado: Carta 2 (%s) venceu!", countryName2);
        }
        else
        {
            printf("Empate!");
        }
        break;

        case 3:
            // O nome dos dois países.
            printf("Comparação entre: %s e %s\n", countryName1, countryName2);
            // O atributo usado na comparação.
            printf("O atributo usado na comparação foi: PIB\n");
            // Os valores do atributo para cada carta.
            printf("O valor de cada atributo é: (%lf) para a carta 1,  e (%lf) para a carta 2\n", PIBCountry1, PIBCountry2);
    
            // Qual carta venceu.
            if (PIBCountry1 > PIBCountry2)
            {
                printf("Resultado: Carta 1 (%s) venceu!", countryName1);
            }
            else if (PIBCountry1 < PIBCountry2)
            {
                printf("Resultado: Carta 2 (%s) venceu!", countryName2);
            }
            else
            {
                printf("Empate!");
            }
            break;

            case 4:
                // O nome dos dois países.
                printf("Comparação entre: %s e %s\n", countryName1, countryName2);
                // O atributo usado na comparação.
                printf("O atributo usado na comparação foi: Número de pontos turísticos\n");
                // Os valores do atributo para cada carta.
                printf("O valor de cada atributo é: (%d) para a carta 1,  e (%d) para a carta 2\n", turistsPointCountry1, turistsPointCountry2);
        
                // Qual carta venceu.
                if (PIBCountry1 > PIBCountry2)
                {
                    printf("Resultado: Carta 1 (%s) venceu!", countryName1);
                }
                else if (PIBCountry1 < PIBCountry2)
                {
                    printf("Resultado: Carta 2 (%s) venceu!", countryName2);
                }
                else
                {
                    printf("Empate!");
                }
                break;

                case 5:
                // O nome dos dois países.
                printf("Comparação entre: %s e %s\n", countryName1, countryName2);
                // O atributo usado na comparação.
                printf("O atributo usado na comparação foi: Densidade demografia\n");
                // Os valores do atributo para cada carta.
                printf("O valor de cada atributo é: (%.2f) para a carta 1,  e (%.2f) para a carta 2\n", densityCountry1, densityCountry2);
        
                // Qual carta venceu.
                if (densityCountry1 < densityCountry2)
                {
                    printf("Resultado: Carta 1 (%s) venceu!", countryName1);
                }
                else if (densityCountry1 > densityCountry2)
                {
                    printf("Resultado: Carta 2 (%s) venceu!", countryName2);
                }
                else
                {
                    printf("Empate!");
                }
                break;

       default:
        break;
    }

    return 0;
}