#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   int População1, População2, NumerodePontos1, NumerosdePontos2, Codigo1, Codigo2;
   float Area1, Area2, PIB1, PIB2;
   char nome1, nome2;

   printf("Digite o nome da Carta1: ");
   scanf("%c", &nome1);

   printf("Digite o codigo da Carta1: ");
   scanf("%d", &Codigo1);

   printf("Digite o numero da População: ");
   scanf("%d", &População1);

   printf("Digite a Area da cidade: ");
   scanf("%f", &Area1);

   printf("Digite o PIB da cidade");
   scanf("%f", PIB1);
   
   printf("Digite o numero de pontos turisticos da cidade: ");
   scanf("%d", &NumerodePontos1);

   //Exibindo o resultado
   
   printf("As informações da Carta1 é: ", nome1, Codigo1, População1, Area1, NumerodePontos1);
   


   


    return 0;
}
