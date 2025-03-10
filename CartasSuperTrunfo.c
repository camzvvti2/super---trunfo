#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro de Cidades

int main() {
    // Declaração de variáveis para a primeira cidade
    char codigo1[4] = "A01";
    char nome1[50] = "Manaus";
    char estado1[20] = "Amazonas";
    int populacao1 = 4281209;
    float area1 = 1571000.0;
    float pib1 = 42968.0;
    int pontos_turisticos1 = 10;

    // Declaração de variáveis para a segunda cidade
    char codigo2[4]= "A02";
    char nome2[50]= "Goiania";
    char estado2[20]= "Goiás";
    int populacao2= 7350483;
    float area2= 340.086;
    float pib2= 55247.45;
    int pontos_turisticos2= 8;

    // Cadastro da primeira cidade
    printf("Cadastro de Cidade 1:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Digite o estado da cidade: ");
    scanf(" %[^\n]", estado1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Exibição dos dados da primeira cidade
    printf("\nCidade 1 cadastrada:\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Cadastro da segunda cidade
    printf("\nCadastro de Cidade 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite o estado da cidade: ");
    scanf(" %[^\n]", estado2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da segunda cidade
    printf("\nCidade 2 cadastrada:\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}


