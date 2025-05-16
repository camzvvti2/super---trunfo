#include <stdio.h>

void main()
{
    //carta A vars
    char EstadoA;
    char codA[20];
    char nomeA[20];
    int populacaoA;
    float areaA;
    float pibA;
    int pontostA;

    //carta B vars
    char EstadoB;
    char codB[3];
    char nomeB[20];
    int populacaoB;
    float areaB;
    float pibB;
    int pontostB;

    //pegar info carta A
    printf("Insira os dados da carta A: \n");

    printf("Digite o Estado: ");
    scanf("%s", &EstadoA);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codA);

    scanf("%c"); //limpar o \n residual

    printf("Digite o nome da cidade: ");
    fgets(nomeA,20,stdin);

    printf("Digite a populacao: ");
    scanf("%d",&populacaoA);

    printf("Digite a area: ");
    scanf("%f", &areaA);

    printf("Digite o pib: ");
    scanf("%f", &pibA);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontostA);

    //pegar info carta B
    printf("Insira os dados da carta B: \n");

    printf("Digite o Estado: ");
    scanf("%s", &EstadoB);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codB);

    scanf("%c"); //limpar o \n residual

    printf("Digite o nome da cidade: ");
    fgets(nomeB,20,stdin);

    printf("Digite a populacao: ");
    scanf("%d",&populacaoB);

    printf("Digite a area: ");
    scanf("%f", &areaB);

    printf("Digite o pib: ");
    scanf("%f", &pibB);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontostB);

    //exibir os dados

    //Carta A

    printf("\nCarta A: \n");
    printf("Estado: %c\n", EstadoA);
    printf("Codigo: %s\n", codA);
    printf("Nome da Cidade: %s", nomeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Area: %d km²\n", areaA);
    printf("PIB: %d bilhoes de reais\n", pibA);
    printf("Número de Pontos Turisticos: %d\n", pontostA);

    //Carta B
    printf("\nCarta B: \n");
    printf("Estado: %c\n", EstadoB);
    printf("Codigo: %s\n", codB);
    printf("Nome da Cidade: %s", nomeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Area: %d km²\n", areaB);
    printf("PIB: %d bilhoes de reais\n", pibB);
    printf("Número de Pontos Turisticos: %d\n", pontostB);
    
}
