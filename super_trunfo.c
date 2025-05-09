#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome_1[30];

    char estado_1[2];
    char codigo_1[3];
    
    int populacao_1;
    float area_1;
    float PIB_1;
    int num_pontos_turisticos_1;
    
    char nome_2[30];

    char estado_2[2];
    char codigo_2[3];

    int populacao_2;
    float area_2;
    float PIB_2;
    int num_pontos_turisticos_2;

    //INPUT DA PRIMEIRA CIDADE!!!
    printf("Insira o estádo da cidade com uma letra: ");
    scanf("%s", estado_1);

    printf("Insira o código da cidade: ");
    scanf("%s", codigo_1);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome_1);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_1);

    printf("Insira área da cidade: ");
    scanf("%f", &area_1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB_1);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos_1);

    printf("\n");


    //INPUT DA SEGUNDA CIDADE!!!
    printf("Agora vamos para a segunda cidade.\n");

    printf("Insira o estádo da cidade com uma letra: ");
    scanf("%s", estado_2);

    printf("Insira o código da cidade: ");
    scanf("%s", codigo_2);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome_2);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_2);

    printf("Insira área da cidade: ");
    scanf("%f", &area_2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB_2);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos_2);

    printf("\n");

    //OUTPUT PRIMEIRA CIDADE
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s%s\n", estado_1, codigo_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n\n", num_pontos_turisticos_1);

    //OUTPUT SEGUNDA CIDADE
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s%s\n", estado_2, codigo_2);
    printf("Nome da Cidade: %s:\n", nome_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", PIB_2);
    printf("Número de Pontos Turísticos: %d\n\n", num_pontos_turisticos_2);

    printf("FIM\n\n");

    return 0;
}
