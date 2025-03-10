#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Super Trunfo!!\n");

    char codigo_cidade[3], nome_ciade;
    int populacao, pontos_turisticos;
    float area, pib;

    char codigo_cidade1[3], nome_ciade1;
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Cadastro das Cartas:
    // Cidade 1

    printf("Digite o nome da Cidade 1 (a inicial do estado):\n");
    scanf(" %d", &nome_ciade);
    
    printf("Digite o codigo da cidade:\n");
    scanf(" %d", &codigo_cidade);
    
    printf("Digite o a população da cidade %s:\n",codigo_cidade);
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos dessa cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    // Cidade 2

    printf("\n\nDigite o nome da Cidade 2 (a inicial do estado):\n");
    scanf(" %d", &nome_ciade1);
    
    printf("Digite o codigo da cidade:\n");
    scanf(" %d", &codigo_cidade1);
    
    printf("Digite o a população da cidade %s:\n",codigo_cidade1);
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos dessa cidade:\n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    
    
      

    
    printf("Dados da Carta 1 cadastrada \n");
    printf("O Nome da cidade É: %d\n", nome_ciade);
    printf("O Código da cidade: %d\n", codigo_cidade);
    printf("A quantidade de pontos turísticos é: %f\n", pontos_turisticos);
    printf("A população da cidade é: %f\n", populacao);
    printf("A área da cidade é: %.2f\n", area);
    printf("O PIB da cidade é: %.2f\n", pib);

    printf("Dados da Carta 2 cadastrada\n");
    printf("O Nome da cidade É: %d\n", nome_ciade1);
    printf("O Código da cidade: %d\n", codigo_cidade1);
    printf("A quantidade de pontos turísticos é: %.2f\n", pontos_turisticos1);
    printf("A população da cidade é: %.2f\n", populacao1);
    printf("A área da cidade é: %.2f\n", area1);
    printf("O PIB da cidade é: %.2f\n", pib1); 
   
    return 0;
}
