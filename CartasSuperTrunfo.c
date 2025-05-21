#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
struct Carta {
    char estado;
    char codigo [4];
    char  nomeCidade [40];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

     // Leitura dos dados da primeira carta
    printf("Desafio Super Trunfo!\n");
     printf("Digite os dados da primeira carta:\n");
      printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

     // Leitura dos dados da segunda carta
     printf("\nDigite os dados da segunda carta:\n");
      printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo da carta (ex: B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Numero de pontos turisticos: %d\n", carta1.pontosTuristicos);

      // Exibição dos dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Numero de pontos turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
