#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas

    /*o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades. 
     Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).*/

    char estado1, estado2;
    char codigo1, codigo2;
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Dados da primeira  carta: \n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
    scanf("%c", &estado1);
    

    printf("Codigo da carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", &codigo1);


    printf("Escolha a cidade desejada: \n");
    scanf("%s", cidade1);


    printf("Qual a populçao da Cidade escolhida? (ex: 1510023500): \n");
    scanf("%d", &populacao1);


    printf("Area da cidade escolhida: \n");
    scanf("%f", &area1);


    printf("PIB da cidade: \n");
    scanf("%f", &pib1);


    printf("Por ultimo, quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pontosTuristicos1);
    
    return 0;

}

