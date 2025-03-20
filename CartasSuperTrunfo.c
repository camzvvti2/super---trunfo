#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() 
{

   int pontos1, pontos2, populacao1, populacao2, codigo1, codigo2;
   float  area1, area2, pib1, pib2;
   char nome1[30], nome2[30], estado1[50], estado2[50]; 

   printf("Digite o nome da cidade da Carta1: \n"); 
   scanf("%s", nome1);

   printf("Digite o estado da Carta1: \n");
   scanf("%s", estado1);

   printf("Digite o código da Carta1: \n");
   scanf("%d", &codigo1);

   printf("Digite a Area(km²) da cidade da Carta1: \n");
   scanf("%f", &area1);

   printf("Digite o numero da população da cidade da Carta1: \n");
   scanf("%d", &populacao1);

   printf("Digite o PIB da cidade da Carta1: \n");
   scanf("%f", &pib1);
   
   printf("Digite o numero de pontos turisticos da cidade da Carta1: \n");
   scanf("%d", &pontos1);

   //Exibindo o resultado
   
   printf("As informações da Carta1 é: \n");
   printf("Nome: %s\n",nome1);

   printf("Estado: %s\n",estado1);

   printf("Codigo: %d\n",codigo1);

   printf("Area(km²): %f\n",area1);

   printf("Numero da população: %d\n",populacao1);

   printf("PIB: %f\n",pib1);

   printf("Numero de pontos turisticos: %d\n",pontos1);


    return 0;
}
