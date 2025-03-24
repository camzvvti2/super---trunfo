#include <stdio.h>

int main(){

//insira os dados da primeira carta abaixo

char estado1[20];          //estado da carta 1   
char codigo1[3];          //código da carta 1
char cidade1[40];          //cidade da carta 1
int  populacao1;           //população da carta 1
float area1;               //area em km² da carta 1
float PIB1;                //PIB da carta 1
int   pontos1;             //Pontos turisticos da carta 1


printf("Para cadastrar suas cartas responda as questoes a seguir \n");
printf("Agora iremos dar inicio ao cadastro da carta 1 \n"); //frase para cadastro carta 1
printf("\n"); //espaçamento estético

printf("Carta 1 \n"); //titulo da primeira carta

printf("digite o estado: \n");
scanf("%s", &estado1);

printf("digite a cidade: \n");
scanf("%s", &cidade1);

printf("digite o codigo da carta: \n");
scanf("%s", &codigo1);

printf("digite a população: \n");
scanf("%d", &populacao1);

printf("digite a área: \n");
scanf("%f", &area1);

printf("digite o PIB: \n");
scanf("%f", &PIB1);

printf("digite os pontos turisticos: \n");
scanf("%d", &pontos1);

//IMPRESSAO DE DADOS CARTA 1 \/

printf("\n"); //espaçamento estético

printf("Carta 1 \n"); //titulo da primeira carta

printf("Estado: %s\n", estado1);

printf("Cidade: %s\n", cidade1);

printf("Código da carta: %s\n", codigo1);

printf("População: %d\n", populacao1);

printf("Área: %.0f\n", area1);

printf("PIB: %.0f\n", PIB1);

printf("Pontos turisticos: %d\n", pontos1);

printf("\n"); //espaçamento estético
printf("Agora com a primeira carta pronta iremos fazer o cadastro da segunda \n");
printf("\n"); //espaçamento estético



//insira os dados da segunda carta abaixo

char  estado2[30];              //estado da carta 2             //NAO UTILIZAR
char  codigo2[3];               //código da carta 2
char cidade2[20];              //cidade da carta 2
int   populacao2;               //população da carta 2
float area2;                   //area em km² da carta 2
float PIB2;                    //PIB da carta 2
int   pontos2;                 //Pontos turisticos da carta 2


printf("Carta 2 \n"); //titulo da segunda carta
printf("digite o estado: \n");
scanf("%s", &estado2);

printf("digite a cidade: \n");
scanf("%s", &cidade2);

printf("digite o codigo da carta: \n");
scanf("%s", &codigo2);

printf("digite a população: \n");
scanf("%d", &populacao2);

printf("digite a área: \n");
scanf("%f", &area2);

printf("digite o PIB: \n");
scanf("%f", &PIB2);

printf("digite os pontos turisticos: \n");
scanf("%d", &pontos2);

//IMPRESSAO DE  DADOS, CARTA2 \/

printf("\n"); //espaçamento estético

printf("Carta 2 \n"); //titulo da segunda carta

printf("Estado: %s\n", estado2);

printf("Cidade: %s\n", cidade2);

printf("Código da carta: %s\n", codigo2);

printf("População: %d\n", populacao2);

printf("Área: %.0f\n", area2);

printf("PIB: %.0f\n", PIB2);

printf("Pontos turisticos: %d\n", pontos2);

return 0;
}   