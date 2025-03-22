#include <stdio.h>

int main() {

    char estado1[100];  
    char codi1[100];
    char cidade1[100];
    int popu1;
    float area1;
    float pib1;
    int pnt1;
    float DensidadePopu1;
    float PIBperCap1;

    char estd2[100];
    char codigo2[100];
    char cidade2[100];
    int popu2;
    float area2;
    float pib2;
    int pntc2;
    float DensiPopulacional2;
    float PIBpc2;

        printf("\n");   

    printf("----- Dados da primeira carta ----- \n");

        printf("\n");
    
    printf("Estado: Uma letra de 'A' a 'H' (Representando um dos oito estados) \n");
    scanf("%s", estado1);
        printf("\n");   
    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codi1);
        printf("\n");
    printf("Escolha a cidade desejada (ex: Rio De Janeiro): \n");
    scanf(" %[^\n]", cidade1);
        printf("\n");
    printf("Qual a populaçao da Cidade escolhida? (ex: 15000): \n");
    scanf("%d", &popu1);
        printf("\n");
    printf("Area da cidade escolhida em quilômetros quadrados (ex: 564.50): \n");
    scanf("%f", &area1);
        printf("\n");
    printf("PIB da cidade em bilhoes (ex: 564.50): \n");
    scanf("%f", &pib1);
        printf("\n");
    printf("Quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pnt1);

        printf("\n");

    printf("----- Dados da segunda carta ----- \n");

        printf("\n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
    scanf("%s", estd2);
        printf("\n");
    printf("Codigo da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigo2);
        printf("\n");
    printf("Escolha a cidade desejada (ex: São Paulo): \n");
    scanf(" %[^\n]", cidade2);
        printf("\n");
    printf("Qual a populaçao da Cidade escolhida? (ex: 15000000): \n");
    scanf("%d", &popu2);
        printf("\n");
    printf("Area da cidade escolhida em quilômetros quadrados (ex: 564.50): \n");
    scanf("%f", &area2);
        printf("\n");
    printf("PIB da cidade em bilhoes (ex: 125.23): \n");
    scanf("%f", &pib2);
        printf("\n");
    printf("Quantidade de Pontos Turistico da cidade: \n");
    scanf("%d", &pntc2);

    DensidadePopu1 = (float) popu1 / area1;
    PIBperCap1 = (float) popu1 / pib1;

    DensiPopulacional2 = (float) popu2 / area2;
    PIBpc2 =  (float) popu2 / pib2;

        printf("\n");

/*prineira carta*/

    printf(" ----- Resultados da primeira carta ----- \n");
        printf("\n");
    printf("Estado: %s \n", estado1);
        printf("\n");
    printf("Codigo: %s \n", codi1);
        printf("\n");
    printf("Cidade: %s \n", cidade1);
        printf("\n");
    printf("População: %d \n", popu1);
        printf("\n");
    printf("Area: %.2f km2\n", area1);
        printf("\n");
    printf("Pib: %.2f bilhões de reais \n", pib1);
        printf("\n");
    printf("Número de Pontos Turísticos: %d \n", pnt1);
        printf("\n");
//inf adicionais
    printf("Densidade Populacional: %.2f \n", DensidadePopu1);
        printf("\n");
    printf("PIB per Capita: %.2f \n", PIBperCap1);

/*fim da primeira crt e inicio da sgd*/

        printf("\n");
    printf(" ----- resultados da segunda carta ----- \n");
        printf("\n");
    printf("Estado: %s \n", estd2);
        printf("\n");
    printf("Codigo: %s \n", codigo2);
        printf("\n");
    printf("Cidade: %s \n", cidade2);
        printf("\n");
    printf("População: %d \n", popu2);
        printf("\n");
    printf("Area: %.2f km2\n", area2);
        printf("\n");
    printf("Pib: %.2f bilhões de reais \n", pib2);
        printf("\n");
    printf("Número de Pontos Turísticos: %d \n", pntc2);
        printf("\n");
//inf adicionais
    printf("Densidade Populacional: %.2f \n", DensiPopulacional2);
        printf("\n");
    printf("PIB per Capita: %.2f \n", PIBpc2);
    
/*fim da segunda*/
        printf("\n");
    printf("FIM\n");
        printf("\n");
    return 0;

}
