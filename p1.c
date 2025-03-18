#include <stdio.h>

    int main() {
    char estado1[100];
    char cidade1[100];
    int popu1;
    float area1;
    float pib1;
    int pnt1;
    char codi1[100];

    printf("Dados da primeira carta: \n");

    printf("Estado: Uma letra de 'A' a 'H' (Representando um dos oito estados) \n");
    scanf("%s", estado1);
    
    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codi1);

    printf("Escolha a cidade desejada: \n");
    scanf(" %[^\n]", cidade1);

    printf("Qual a populçao da Cidade escolhida? (ex: 1510023500): \n");
    scanf("%d", &popu1);

    printf("Area da cidade escolhida: \n");
    scanf("%f", &area1);

    printf("PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Por ultimo, quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pnt1);

    printf("Resultados da primeira carta: \n");
    
    printf("Estado: %s \n", estado1);

    printf("Codigo: %s \n", codi1);

    printf("Cidade: %s \n", cidade1);

    printf("População: %d \n", popu1);

    printf("Area: %.1f km²\n", area1);

    printf("Pib: %.1f \n", pib1);

    printf("Pontos turisticos: %d \n", pnt1);

    printf("FIM\n");
    
    return 0;

}

