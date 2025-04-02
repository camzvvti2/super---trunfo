#include <stdio.h>

int main(){

    char carta [01];
    char estado [10];
    char codigo [5];
    char cidade [20];
    int população;
    int pontosturisticos;
    float area;
    float pib;

    printf("Carta: \n");
    scanf("%c", &carta);

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("codigo: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Total de Habitantes: \n");
    scanf("%d", &população);

    printf("Area: \n");
    scanf("%d", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos);

    
    printf("carta \n");
    printf("Estado: %s \n", estado);
    printf("Codigo da carta: %s%s \n", estado, codigo);
    printf("Cidade: %s \n", cidade);
    printf("Habitantes: %d \n", população);
    printf("Area: %f \n",area);
    printf("Pib: %n", pib);
    printf("Pontos Turisticos: \n", pontosturisticos);


    return 0;




}