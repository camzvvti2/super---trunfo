#include <stdio.h>

int main() {

    char estado1[100];
    char codi1[100];
    char cidade1[100];
    int popu1;
    float area1;
    float pib1;
    int pnt1;
    
    char estd2[100];
    char codigo2[100];
    char cidade2[100];
    int popu2;
    float area2;
    float pib2;
    int pntc2;

    printf("Dados da primeira carta: \n");

    printf("Estado: Uma letra de 'A' a 'H' (Representando um dos oito estados) \n");
    scanf("%s", estado1);
    
    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codi1);

    printf("Escolha a cidade desejada: \n");
    scanf(" %[^\n]", cidade1);

    printf("Qual a populaçao da Cidade escolhida? (ex: 15000000): \n");
    scanf("%d", &popu1);

    printf("Area da cidade escolhida em quilômetros quadrados.: \n");
    scanf("%f", &area1);

    printf("PIB da cidade em bilhões: \n");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pnt1);

    printf("\n");

    printf("Dados da segunda carta: \n");

    printf("\n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
    scanf("%s", estd2);

    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigo2);

    printf("Escolha a cidade desejada: \n");
    scanf(" %[^\n]", cidade2);

    printf("Qual a populaçao da Cidade escolhida? (ex: 15000000): \n");
    scanf("%d", &popu2);

    printf("Area da cidade escolhida em quilômetros quadrados.: \n");
    scanf("%f", &area2);

    printf("PIB da cidade em bilhões: \n");
    scanf("%f", &pib2);

    printf("Quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pntc2);

    printf("\n");

/*prineira carta*/

    printf("Estado: %s \n", estado1);

    printf("Codigo: %s \n", codi1);

    printf("Cidade: %s \n", cidade1);

    printf("População: %d \n", popu1);

    printf("Area: %.2f km2\n", area1);

    printf("Pib: %.2f bilhões de reais \n", pib1);

    printf("Número de Pontos Turísticos: %d \n", pnt1);

/*fim da primeira crt e inicio da sgd*/

    printf("\n");

    printf("resultados da segunda carta: \n");

    printf("Estado: %s \n", estd2);

    printf("Codigo: %s \n", codigo2);

    printf("Cidade: %s \n", cidade2);

    printf("População: %d \n", popu2);

    printf("Area: %.2f km2\n", area2);

    printf("Pib: %.2f bilhões de reais \n", pib2);

    printf("Número de Pontos Turísticos: %d \n", pntc2);
    
/*fim da segunda*/

    printf("FIM\n");
    
    return 0;

}
