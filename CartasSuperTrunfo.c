#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Execução de exercicio Jonathan Mota de Carvalho

typedef struct {
    char codigo[4];  // Código da cidade.
    int populacao;    // população da cidade.
    float area;       // Área da cidade em km²
    float pib;        // PIB da cidade em milhões
    int pontos_turisticos;   // Número de pontos turísticos.
    float densidade_populacional; // Densidade populacional
    float pib_per_capita; // PIB per capita
} Cidade;

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Função para calcular a densidade populacional
double calcular_densidade_populacional(int populacao, float area) {
    return (area > 0) ? (populacao / area) : 0;
}

// Função para calcular o PIB per capita
double calcular_pib_per_capita(float pib, int populacao) {
    return (populacao > 0) ? (pib * 1000000 / populacao) : 0;
}

int main() {
    Cidade cidades[NUM_ESTADOS * NUM_CIDADES];
    char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int i;

    printf("Cadastro de cidades:\n");

    // Loop para cadastrar todas as cidades
    for (i = 0; i < NUM_ESTADOS * NUM_CIDADES; i++) {
        int estadoIndex = i / NUM_CIDADES;
        int cidadeNumero = (i % NUM_CIDADES) + 1;

        // Gerando código da cidade
        snprintf(cidades[i].codigo, sizeof(cidades[i].codigo), "%c%02d", estados[estadoIndex], cidadeNumero);

        printf("\nCadastro da cidade %s:\n", cidades[i].codigo);

        // Entrada de dados pelo usuário
        printf("População: ");
        scanf("%d", &cidades[i].populacao);

        printf("Área (km²): ");
        scanf("%f", &cidades[i].area);

        printf("PIB (milhões): ");
        scanf("%f", &cidades[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);

        // Cálculo da densidade populacional e PIB per capita
        cidades[i].densidade_populacional = calcular_densidade_populacional(cidades[i].populacao, cidades[i].area);
        cidades[i].pib_per_capita = calcular_pib_per_capita(cidades[i].pib, cidades[i].populacao);  // Corrigido
    }

    // Exibindo os dados cadastrados
    printf("\nLista de Cidades Cadastradas:\n");
    for (i = 0; i < NUM_ESTADOS * NUM_CIDADES; i++) {
        printf("\nCidade: %s\n", cidades[i].codigo);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f milhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
        printf("Densidade populacional: %.2f hab/km²\n", cidades[i].densidade_populacional);  // Corrigido
        printf("PIB per capita: %.2f\n", cidades[i].pib_per_capita);
    }    

    return 0;
}