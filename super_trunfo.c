// Incluindo a biblioteca padrão de entrada/saída
#include <stdio.h>

// Função principal do programa
int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // 3 caracteres + terminador \0
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao cadastro de cartas do Super Trunfo!\n");
    printf("Vamos cadastrar duas cartas.\n\n");

    // Cadastro da primeira carta
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    // Lendo os dados da primeira carta
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê até encontrar uma quebra de linha
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n"); // Pula uma linha

    // Cadastro da segunda carta
    printf("=== CADASTRO DA CARTA 2 ===\n");
    
    // Lendo os dados da segunda carta
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n"); // Pula uma linha

    // Exibindo os dados cadastrados
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos1);
    
    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0; // Indica que o programa terminou com sucesso
}