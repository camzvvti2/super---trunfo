#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Paula

int main() {
    printf("Cadastro da Cartas 01\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado[1] = "A";
    char CodigodaCarta[03] = "A01";
    char Cidade[20] = "Salvador";
    int Populacao = 2418000;
    float Area = 693.8;
    float PIB = 21.8;
    int PontosTuristicos = 20;
    
    // Cadastro das Cartas:
    printf("Digite o Estado: ");
    scanf("%s", Estado);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CodigodaCarta);
    printf("Digite o Nome: ");
    scanf("%s", Cidade);
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a Area: ");
    scanf("%f", &Area);
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("Digite o Numero de Pontos Turisticos:  \n");
    scanf("%d", &PontosTuristicos);

    // Exibição dos Dados das Cartas:
    printf("Estado: %s\n", Estado);

    printf("Codigo da Carta: %s\n", CodigodaCarta);

    printf("Nome da Cidade: %s\n", Cidade);

    printf("Populacao: %d\n", Populacao);

    printf("Area: %.2f\n", Area);

    printf("PIB: %.2f\n", PIB);

    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    

    return 0;
}
