#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas

    /*o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades. 
     Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).*/

    char estado1, estado2;

    char codi1, codigo2;

    char cidade1[30], cidade2[30];

    int popu1, popu2;

    float area1, area2;

    float pib1, pib2;

    int pnt1, pntc2;

    printf("Dados da primeira carta: \n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
    scanf("%c", &estado1);
    
    printf("Codigo da carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", &codi1);

    printf("Escolha a cidade desejada: \n");
    scanf("%s", cidade1);

    printf("Qual a populçao da Cidade escolhida? (ex: 1510023500): \n");
    scanf("%d", &popu1);

    printf("Area da cidade escolhida: \n");
    scanf("%f", &area1);

    printf("PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Por ultimo, quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pnt1);

    printf("\n");

    printf("Dados da segunda carta: \n");

    printf("\n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
    scanf("%s", &estado2);

    printf("Codigo da carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", &codigo2);

    printf("Escolha a cidade desejada: \n");
    scanf("%s", &cidade2);

    printf("Qual a populçao da Cidade escolhida? (ex: 1510023500): \n");
    scanf("%d", &popu2);

    printf("Area da cidade escolhida: \n");
    scanf("%f", &area2);

    printf("PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Por ultimo, quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pntc2);

    printf("\n");
/*prineira carta*/
    printf("Resultados da primeira carta: \n");
    
    printf("estado: %c \n", estado1);

    printf("codigo: %c \n", codi1);

    printf("cidade: %s \n", cidade1);

    printf("população: %d \n", popu1);

    printf("area: %.2f \n", area1);

    printf("pib: %.2f \n", pib1);

    printf("pontos turisticos: %d \n", pnt1);
/*fim da primeira crt e inicio da sgd*/
    printf("\n");

    printf("resultados da segunda carta: \n");

    printf("Estado: %c \n", estado2);

    printf("Codigo: %s \n", &codigo2);

    printf("Cidade: %s \n", &cidade2);

    printf("População: %d \n", popu2);

    printf("Area: %.2f \n", area2);

    printf("Pib: %.2f \n", pib2);

    printf("Pontos turisticos: %d \n", pntc2);
/*fim da segunda*/

    printf("FIM");
    
    return 0;

}

