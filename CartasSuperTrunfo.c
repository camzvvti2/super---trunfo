#include <stdio.h>

int main() {

    int codigodacidade, pontosturisticos;
    float populacao, area, pib;
    char nomedacidade[50];

    printf("Digite o Código da cidade: \n");
    scanf("%d", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a população da cidade sem ponto ou vírgulas: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade sem ponto ou vírgulas: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos há na cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Código da cidade: %d \n", codigodacidade);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População da cidade: %.6f \n", populacao);
    printf("Área da cidade: %f \n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Pontos turísticos da cidade: %d\n", pontosturisticos);


    printf("Digite o Código da cidade: \n");
    scanf("%d", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos há na cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("Código da cidade: %d \n", codigodacidade);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População da cidade: %f \n", populacao);
    printf("Área da cidade: %f \n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Pontos turísticos da cidade: %d\n", pontosturisticos);


    return 0;

}
