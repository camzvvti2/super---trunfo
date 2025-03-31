#include <stdio.h>
#include <string.h>

int main() {
    char Estado, Estado2;
    char Codigo[6], Codigo2[6], Cidade[50], Cidade2[50];
    int Populacao, NumTuristicos, Populacao2, NumTuristicos2;
    float Area, Area2, PIB, PIB2;

    printf("Primeira carta: \n");
    printf("Digite o Estado (EX: A ou B): \n");
    scanf(" %c", &Estado);
    getchar();

    printf("Digite o Código (EX: A01): ");
    fgets(Codigo, 6, stdin);

    printf("Digite a Cidade: ");
    fgets(Cidade, 50, stdin);

    printf("Digite a População (EX: 673000): \n");
    scanf("%d", &Populacao);

    printf("Digite a Área em km² (EX: 1200.25): \n");
    scanf("%f", &Area);

    printf("Digite o PIB (EX: 300.50): \n");
    scanf("%f", &PIB);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumTuristicos);
    getchar(); 

    printf("\nSegunda carta: \n");
    printf("Digite o Estado da segunda carta (EX: A ou B): \n");
    scanf(" %c", &Estado2);
    getchar(); 

    printf("Digite o Código da segunda carta (EX: A01): ");
    fgets(Codigo2, 6, stdin); 

    printf("Digite a Cidade da segunda carta: ");
    fgets(Cidade2, 50, stdin);

    printf("Digite a População da segunda carta (EX: 673000): \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área em km² da segunda carta (EX: 1200.25): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da segunda carta (EX: 300.50): \n");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos da segunda carta: \n");
    scanf("%d", &NumTuristicos2);

    printf("\nPrimeira Carta:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NumTuristicos);

    printf("\nSegunda Carta:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumTuristicos2);

    return 0;
}
