#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Primeira carta
    char estado_1; // Estado
    char codigo_1[4]; // Código da Carta (Estado + Número de 1 a 4)
    char cidade_1[80]; // Nome da Cidade
    int populacao_1; // População da Cidade
    float area_1; // Área da Cidade em Km²
    float pib_1; // PIB da Cidade
    int qtpt_1; // Quantidade de Pontos Turísticos da Cidade
    
    // Segunda carta
    char estado_2; // Estado
    char codigo_2[4]; // Código da Carta (Estado + Número de 1 a 4)
    char cidade_2[80]; // Nome da Cidade
    int populacao_2; // População da Cidade
    float area_2; // Área da Cidade em Km²
    float pib_2; // PIB da Cidade
    int qtpt_2; // Quantidade de Pontos Turísticos da Cidade

    // Obtendo os dados da primeira carta
    printf("=== Carta 1 ===\n\n");
    printf("Digite o Nome da Cidade (ate 79 caracteres): ");
    scanf("%s", cidade_1); // Nome da cidade

    printf("Digite o Estado (caractere de A-Z): ");
    scanf("%s", &estado_1); // Estado (char)
    
    // Código da carta
    codigo_1[0] = estado_1;
    codigo_1[1] = '0';
    printf("\nDigite o Numero do Codigo (digito de 1-9): ");
    scanf("%s", &codigo_1[2]);

    printf("Digite a Populacao da Cidade: ");
    scanf("%i", &populacao_1); // População da cidade
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_1); // PIB da cidade
    printf("Digite a Quantidade de Pontos Turisticos da Cidade: ");
    scanf("%i", &qtpt_1); // Quantidade de pontos turísticos da cidade
    printf("Digite a Area da Cidade: ");
    scanf("%f", &area_1); // Área da cidade

    // Limpar entrada de dados, porque a Estácio esqueceu disso
    // Se tirar essas linhas, ele pula o próximo fgets
    scanf("%*[^\n]");
    scanf("%*c");

    // Obtendo os dados da segunda carta
    printf("\n=== Carta 2 ===\n\n");
    printf("Digite o Nome da Cidade (ate 79 caracteres): ");
    scanf("%s", cidade_2); // Nome da cidade

    printf("Digite o Estado (caractere de A-Z): ");
    scanf("%s", &estado_2); // Estado (char)
    
    // Código da carta
    codigo_2[0] = estado_2;
    codigo_2[1] = '0';
    printf("Digite o Numero do Codigo (digito de 1-9): ");
    scanf("%s", &codigo_2[2]);

    printf("Digite a Populacao da Cidade: ");
    scanf("%i", &populacao_2); // População da cidade
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_2); // PIB da cidade
    printf("Digite a Quantidade de Pontos Turisticos da Cidade: ");
    scanf("%i", &qtpt_2); // Quantidade de pontos turísticos da cidade
    printf("Digite a Area da Cidade: ");
    scanf("%f", &area_2); // Área da cidade

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);
    printf("Populacao: %i\n", populacao_1);
    printf("Area: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos Turisticos: %i\n\n", qtpt_1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);
    printf("Populacao: %i\n", populacao_2);
    printf("Area: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos Turisticos: %i\n\n", qtpt_2);

    return 0;
}
