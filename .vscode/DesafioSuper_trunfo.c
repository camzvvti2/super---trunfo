#include <stdio.h>
int main (){
    
//declaração primeria carta
 
int carta = 1;
char estado1 = A;
char codigo1[20] =  A01;
char cidade1[50] = Minas Gerais; 
float populacao1 = 21.292.666;
float area1 = 586.522;
float pib1 = 1.172.000; 

//declaração segunda carta

int carta2 = 2;
char estado2 = B;
char codigo2[20] =  B02;
char cidade2[50] = São Paulo;
float populacao2 = 44.035.304;
float area2 = 248.209;
float pib2 = 2.039.000;

//imprimir cartas 

printf("\n***Carta 1***\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %.3f\n", populacao);
printf("Área: %.3f\n", area);
printf("PIB: %.3f\n", pib);

//imprimir segunda carta

printf("\n***Carta 2***\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %.3f\n", populacao2);
printf("Área: %.3f\n", area2);
printf("PIB: %.3f\n", pib2);

return 0;
}   //fim do programa

