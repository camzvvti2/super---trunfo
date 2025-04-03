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

    //Uma letra de 'A' a 'H' (representando um dos oito estados)
    char estado;
    
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char codigoCarta[4];
    char nomeCidade[20];
    int populacao;
    
    // A área da cidade em quilômetros quadrados.
    float area;
 
    // Produto Interno Bruto
    float pib; 
    int qtdPontosTuristicos;

    printf("Carta 1\n");
    printf("Digite o código do Estado (Entre 'A' e 'H')\n");
    scanf("%c", &estado);
    printf("Digite o código da carta (De 01 a 04):\n");
    scanf("%c", &codigoCarta);
    printf("Digite o nome da cidade:\n");
    scanf("%c", &nomeCidade);
    printf("Digite a quantidade de pessoas:\n");
    scanf("%d", &populacao);
    printf("Digite a área em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pessoas:\n");
    scanf("%d", &qtdPontosTuristicos);

    printf("Carta 1:\n\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n",
        estado, codigoCarta, nomeCidade, populacao, area, pib, qtdPontosTuristicos);

    return 0;
}
