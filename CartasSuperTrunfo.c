#include <stdio.h>

int main() {
    char cidade1[30], cidade2[30];
    char codigo1[10], codigo2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Cadastro da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Código da Carta: ");
    scanf(" %9s", codigo1);
    printf("Nome da cidade: ");
    getchar(); // Consome o newline pendente
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (milhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    pib_per_capita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código da Carta: ");
    scanf(" %9s", codigo2);
    printf("Nome da cidade: ");
    getchar(); // Consome o newline pendente
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (milhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    pib_per_capita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    // Exibição das informações cadastradas
    printf("\n====================================\n");
    printf("Informações das cartas cadastradas:\n");
    printf("------------------------------------\n");
    printf("Carta 1 - %s (%s)", nome_cidade1, cidade1);
    printf("Código: %s | População: %d | Área: %.2f km²\n", codigo1, populacao1, area1);
    printf("PIB: %.2f milhões | Densidade: %.2f hab/km²\n", pib1, densidade1);
    printf("PIB per capita: %.2f | Pontos turísticos: %d\n", pib_per_capita1, pontos_turisticos1);
    
    printf("\nCarta 2 - %s (%s)", nome_cidade2, cidade2);
    printf("Código: %s | População: %d | Área: %.2f km²\n", codigo2, populacao2, area2);
    printf("PIB: %.2f milhões | Densidade: %.2f hab/km²\n", pib2, densidade2);
    printf("PIB per capita: %.2f | Pontos turísticos: %d\n", pib_per_capita2, pontos_turisticos2);
    
    // Comparação fixa: PIB per capita
    printf("\n====================================\n");
    printf("Comparação de cartas (Atributo: PIB per capita)\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, cidade1, pib_per_capita1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, cidade2, pib_per_capita2);
    printf("------------------------------------\n");

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("====================================\n");

    return 0;
}

