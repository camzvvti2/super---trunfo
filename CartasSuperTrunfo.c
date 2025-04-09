#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    // Declaração de variáveis da Carta 1
    char estado1, estado2;            // Letra do estado (A-H)
    char codigo1[4], codigo2[4];      // Código da carta (ex: A01), com espaço para 3 caracteres + '\0'
    int numero_carta1, numero_carta2; // Número da carta (1 a 4)
    char cidade1[50], cidade2[50];    // Nome da cidade (até 49 caracteres + '\0')
    int populacao1, populacao2;       // População da cidade
    float area1, area2;               // Área da cidade em km²
    float densidade1, densidade2;     // Densidade populacional
    float pib1, pib2;                 // PIB da cidade em bilhões de reais
    float percapta1, percapta2;       // PIB per capta em bilhões de reais
    int num_pontos1, num_pontos2;     // Número de pontos turísticos

    // ==== Cadastro da Carta 1 ====
    printf("=========  Carta 1  =========\n\n");

    // Entrada do estado (uma letra de A a H)
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado1);  // O espaço antes do %c ignora quebras de linha anteriores

    // Entrada do número da carta (de 1 a 4)
    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta1);

    // Geração do código da carta no formato "A01", "B02", etc.
    sprintf(codigo1, "%c%02d", estado1, numero_carta1);

    // Entrada do nome da cidade (sem espaços)
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    // Entrada da população
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);

    // Entrada da área da cidade
    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area1);

    // Entrada do PIB da cidade
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    // Entrada do número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos1);

    // Densidade populacional
    densidade1 = (float) populacao1/area1;
    
    // PIB per capta
    percapta1 = (float) pib1/populacao1;


    // ==== Cadastro da Carta 2 ====
    printf("\n\n=========  Carta 2  =========\n\n");

    // Entrada do estado
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    // Número da carta
    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta2);

    // Geração do código da carta
    sprintf(codigo2, "%c%02d", estado2, numero_carta2);

    // Nome da cidade
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    // População
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao2);

    // Área
    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area2);

    // PIB
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    // Pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos2);

    // Densidade populacional
    densidade2 = (float) populacao2/area2;
    
    // PIB per capta
    percapta2 = (float) pib2/populacao2;

    // ==== Exibição das Cartas ====
    printf("\n\n=========  Cartas Cadastradas  =========\n");

    // Exibindo a carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);  // %.2f limita a 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capta: %.2f\n", percapta1);

    // Exibindo a carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capta: %.2f\n", percapta2);

    return 0;
}
