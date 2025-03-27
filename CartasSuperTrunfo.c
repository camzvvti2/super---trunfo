#include <stdio.h>

     int main() {
    char Estado, Estado2;
    char Codigo[4], Codigo2[4];
    char Cidade[50], Cidade2[50];
    int Populacao, NumTuristicos, Populacao2, NumTuristicos2;
    float Area, Area2, PIB, PIB2;

    printf("Primeira carta:\n");

    printf("Digite o Estado (EX: A ou B): ");
    scanf(" %c", &Estado);
    getchar();

    printf("Digite o Código (EX: A01): ");
    fgets(Codigo, sizeof(Codigo), stdin);
    getchar();
    printf("Digite a Cidade: ");
    fgets(Cidade, sizeof(Cidade), stdin);

    printf("Digite a População (EX: 673000): ");
    scanf("%d", &Populacao);

    printf("Digite a Área em km² (EX: 1200.25): ");
    scanf("%f", &Area);

    printf("Digite o PIB (EX: 300.50): ");
    scanf("%f", &PIB);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NumTuristicos);

    printf("\nSegunda carta:\n");

    printf("Digite o Estado da segunda carta (EX: A ou B): ");
    scanf(" %c", &Estado2);
    getchar();

    printf("Digite o Código da segunda carta (EX: A01): ");
    fgets(Codigo2, sizeof(Codigo2), stdin);
    getchar();

    printf("Digite a Cidade da segunda carta: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);

    printf("Digite a População da segunda carta (EX: 673000): ");
    scanf("%d", &Populacao2);
    
    printf("Digite a Área em km² da segunda carta (EX: 1200.25): ");
    scanf("%f", &Area2);

    printf("Digite o PIB da segunda carta (EX: 300.50): ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos da segunda carta: ");
    scanf("%d", &NumTuristicos2);

    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NumTuristicos);

    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumTuristicos2);

    return 0;
}
