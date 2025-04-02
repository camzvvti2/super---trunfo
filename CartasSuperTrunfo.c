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
    
    //carta 1

    char estado1[20];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidade1;
    float pibcapita1;
    float superpoder1;


    printf("digite o nome do estado1: \n");
    scanf("%s", estado1);

    printf("digite o codigo1 da carta: \n");
    scanf("%s", &codigo1);
   
    printf("digite o nome da cidade1: \n");
    scanf("%s", &cidade1);

    printf("digite a populacao1: \n");
    scanf("%d", &populacao1);

    printf("digite a area1: \n");
    scanf("%f", &area1);

    printf("digite o pib1: \n");
    scanf("%f", &pib1);

    printf("digite pontos turistico1: \n");
    scanf("%d", &turistico1);
     
    printf("nome do estado1: %s\n", estado1);
    printf("codigo1: %s\n", codigo1);
    printf("cidade1: %s\n", cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1: %f\n", area1);
    printf("pib1: %f\n", pib1);
    printf("ponto turistico1: %d\n",turistico1);

    densidade1 = (float) populacao1 / area1;
    pibcapita1 = (float) populacao1 / pib1;

    printf("A densidade populacional1 é: %.2f\n", densidade1);
    printf("O pib per capita1 é: %.2f\n", pibcapita1);

    superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibcapita1 + densidade1;

    printf("superpoder1: %.2f\n", superpoder1);


    //carta 2

    char estado2[15];
    char codigo2[8];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float pibcapita2;
    float superpoder2;

    printf("digite o nome do estado2: \n");
    scanf("%s", &estado2);

    printf("digite o codigo2: \n");
    scanf("%s", &codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("digite populacao2: \n");
    scanf("%d",&populacao2);

    printf("digite a area2: \n");
    scanf("%f", &area2);

    printf("digite o pib2: \n");
    scanf("%f", &pib2);

    printf("digite ponto turistico2: \n");
    scanf("%d", &turistico2);

    printf("estado2: %s\n", estado2);
    printf("codigo2: %s\n", codigo2);
    printf("cidade2: %s\n", cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %f\n", area2);
    printf("pib2: %f\n", pib2);
    printf("turistico2: %d\n", turistico2);

    densidade2 = (float) populacao2 / area2;
    pibcapita2 = (float) populacao2 / pib2;

    printf("A densidade populacional2 é: %.2f\n", densidade2);
    printf("O pib per capita2 é: %.2f\n", pibcapita2);

    superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibcapita2 + densidade2;

    printf("superpoder2: %.2f\n", superpoder2);

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = turistico1 > turistico2;
    resultado5 = pibcapita1 > pibcapita2;
    resultado6 = densidade1 < densidade2;
    resultado7 = superpoder1 >superpoder2;

    printf("a carta1 e maior que carta2? %d\n", resultado1);
    printf("a carta1 e maior que carta2? %d\n", resultado2);
    printf("a carta1 e maior que carta2? %d\n", resultado3);
    printf("a carta1 e maior que carta2? %d\n", resultado4);
    printf("a carta1 e maior que carta2? %d\n", resultado5);
    printf("a carta1 e maior que carta2? %d\n", resultado6);
    printf("a carta1 e maior que carta2? %d\n", resultado7);

    printf("novo commit");

    return 0;

    
}
