#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Carta 1
    char cidade1[50], codigo1[10], estado1[3];
    unsigned long int pop1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;
    int pontos1;

    // Carta 2
    char cidade2[50], codigo2[10], estado2[3];
    unsigned long int pop2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    int pontos2;

    // Entrada - Carta 1
    printf("--- Carta 1 ---\n");
    printf("Nome: \n");
    scanf("%s", cidade1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("População: \n");
    scanf("%lu", &pop1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    // Cálculos - Carta 1
    densidade1 = pop1 / area1;
    pib_per_capita1 = pib1 / pop1;
    super_poder1 = pop1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0 / densidade1);

    // Entrada - Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Nome: \n");
    scanf("%s", cidade2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("População: \n");
    scanf("%lu", &pop2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    // Cálculos - Carta 2
    densidade2 = pop2 / area2;
    pib_per_capita2 = pib2 / pop2;
    super_poder2 = pop2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", pop1 > pop2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
