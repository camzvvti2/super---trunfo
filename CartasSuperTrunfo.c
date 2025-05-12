#include <stdio.h>

    int populacao, ptTuristico;
    float area, pib;
    char cidade[50];

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Cadastre sua Primeira carta! \n\n");

    printf("A primeira carta terá o nome de qual cidade: ");
    scanf("%s", &cidade);
    printf("Nome da carta 1 - registrado.");

    printf("\nAgora informa de quanto é a POPULAÇÃO dessa cidade: ");
    scanf("%d", &populacao);
    printf("População de %d registrada para %s. \n", populacao, cidade);

    printf("Informe de quanto é a ÁREA em M² (metros quadrados) dessa cidade: ");
    scanf("%i", &area);
    printf("\nÁrea de %i m² registrada para %s. \n", area, cidade);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
