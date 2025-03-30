#include <stdio.h>
int main() {
 //criando um jogo baseado em super trunfo

char estado1, estado2;
char codcarta1[03], codcarta2[03];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float areakm1, areakm2;
float pib1, pib2;
int pturistico1, pturistico2;

//Entrada de dados para Carta 1:
printf("Digite as informações sobre a Carta 1\n");

printf("Digite a letra correspondente ao estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o codigo da carta: ");
scanf("%s", codcarta1);

printf("Digite a cidade da carta: ");
scanf("%s", cidade1);

printf("Digite a população da cidade: ");
scanf("%d", &populacao1);

printf("Digite a area da cidade: ");
scanf("%f", &areakm1);

printf("Digite o Pib da cidade: ");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos da cidade: ");
scanf("%d", &pturistico1);

//entrada de dados para carta 2:
printf("\nDigite as informações sobre a Carta 2\n");

printf("Digite a letra correspondente ao estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o codigo da carta: ");
scanf("%s", codcarta2);

printf("Digite a cidade da carta: ");
scanf("%s", cidade2);

printf("Digite a população da cidade: ");
scanf("%d", &populacao2);

printf("Digite a area da cidade: ");
scanf("%f", &areakm2);

printf("Digite o Pib da cidade: ");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turisticos da cidade: ");
scanf("%d", &pturistico2);

//Saída Carta 1:
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo da Carta: %s\n", codcarta1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Area em Km²: %.2f\n", areakm1);
printf("Pib: %.2f\n", pib1);
printf("Pontos Turisticos: %d\n", pturistico1);

//Saída Carta 2: 
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo da Carta: %s\n", codcarta2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Area em Km²: %.2f\n", areakm2);
printf("Pib: %.2f\n", pib2);
printf("Pontos Turisticos: %d\n", pturistico2);
}

