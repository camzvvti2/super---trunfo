#include <stdio.h>

int main() {
    
char carta1[20] = "Carta 1";
char carta2[20] = "Carta 2";
char estado1;
char estado2;
char codigo1[20];
char codigo2[20];
char cidade1[20];
char cidade2[20];
int populacao1;
int populacao2;
float area1;
float area2;
float PIB1;
float PIB2;
int numero_de_pontos_turisticos1;
int numero_de_pontos_turisticos2;

printf("Escolha uma letra de um Estado: \n");
scanf("%c", &estado1);

printf("Escolha outra letra de um Estado: \n");
scanf("%c", &estado2);

printf("Escolha uma Cidade: \n");
scanf("%s", &cidade1);

printf("Escolha outra Cidade: \n");
scanf("%s", &cidade2);

printf("Qual o valor outro Populacao: \n");
scanf("%d", &populacao1);

printf("Qual o valor da Populacao: \n");
scanf("%d", &populacao2);

printf("Qual o Valor da Area: \n");
scanf("%f", &area1);

printf("Escolha outro Valor da Area: \n");
scanf("%f", &area2);

printf("Escolha outro PIB da Cidade: \n");
scanf("%f", &PIB1);

printf("Escolha outro PIB da Cidade: \n");
scanf("%f", &PIB2);


printf("Qual o Numero de Pontos Turisticos: \n");
scanf("%d", &numero_de_pontos_turisticos1);

printf("Fale outro Numero de Pontos Turisticos: \n");
scanf("%d", &numero_de_pontos_turisticos2);

    printf("Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: A01\n");
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos1);

    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: A02 \n");
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos2);
    return 0;
}
