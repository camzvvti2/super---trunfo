#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Execução de exercicio Jonathan Mota de Carvalho

typedef struct {
    char codigo [4];  // Código da cidade.
    int populacao;    // população da cidade.
    float area;       // Área da cidade em km²
    float pib;        // PIB da cidade em milhões
    int pontos_turisticos;   //Número de pontos turísticos. 
    } Cidade;

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

int main() {
   Cidade cidades[NUM_ESTADOS*NUM_CIDADES];
   char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
   int i;

   printf("Cadastro de cidades:\n");

   // Loop para cadastrar todas as cidades
   for ( i = 0; i <NUM_ESTADOS*NUM_CIDADES; i++){
    int estadoIndex = i / NUM_CIDADES;
    int cidadeNumero = (i % NUM_CIDADES) +1;

    //Gerando código da cidade
    snprintf(cidades[i].codigo, sizeof(cidades[i].codigo), "%c%02d", estados[estadoIndex], cidadeNumero);

    printf("\nCadastro da cidade %s:\n", cidades[i].codigo);

    //Entrada de dados pelo usuário
    printf("população: ");
    scanf("%d", &cidades[i].populacao);

    printf("Área: (km²): ");
    scanf("%f", &cidades[i].area);

    printf("PIB (milhões): ");
    scanf("%f", &cidades[i].pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &cidades[i].pontos_turisticos);
   }

   //Exibindo os dados cadastrados
   printf("\nLista de Cidades Cadastradas:\n");
   for ( i = 0; i < NUM_ESTADOS*NUM_CIDADES; i++){
    printf("\nCidade: %s\n", cidades[i].codigo);
    printf("População: %d habitantes\n",cidades[i].populacao);
    printf("Área: %.2f km²\n", cidades[i].area);
    printf("PIB: %2f milhões\n", cidades[i].pib);
    printf("Pontos turísticos: %d\n, cidades[i].pontos_turisticos");
   }    

return 0;
