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

    char estado1 ,estado2;
    char codigo1[5],codigo2[5];
    char nome1[50] ,nome2[50];
    int populacao1 ,populacao2;
    float area1 ,area2;
    float pib1 ,pib2;
    int pontos1 ,pontos2;

    //estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    //Código da Carta: A letra do estado seguida de um número de 01 a 04
    //Nome: O nome da cidade
    //População: O número de habitantes da cidade
    //Área: A área (em km²) da cidade em quilômetros quadrados
    //PIB: O Produto Interno Bruto da cidade
    //Pontos: A quantidade de pontos turísticos na cidade

    printf("Bem Vindo ao Jogo SUPER TRUNFO \n");
    printf("\n");
    printf("Crie a Carta 1 \n");
    printf("\n");
    printf("Escreva uma letra de 'A' a 'H' representando umas das oitos cidades:  \n" );
    scanf(" %c", &estado1 );

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", codigo1);
    
    printf("Escreva o nome da cidade: \n");
    scanf(" %[^\n]", nome1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d%*c", &populacao1);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos1);

    printf("Escreva o PIB (ex 300000000): \n");
    scanf(" %f", &pib1);
    printf("\n");
    printf("\n");


    printf("Parabens Carta 1 criada agora vamos criar a Carta 2 \n");
    printf("\n");
    printf("Crie a Carta 2 \n");
    printf("\n");
    printf("Escreva uma letra de 'A' a 'H' representando umas das oitos cidades:  \n" );
    scanf(" %c", &estado2 );

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", codigo2);

    printf("Escreva o nome da cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos2);

    printf("Escreva o PIB (ex: 300000000): \n");
    scanf(" %f", &pib2);

                                                                                                                                                                                                                           
    printf("Suas Cartas \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n" ,nome1);
    printf("População: %d \n" ,populacao1);
    printf("Área: %.2f km² \n" ,area1);
    printf("PIB: %f Bilhões \n" ,pib1);
    printf("Número de Pontos Turísticos: %d \n" ,pontos1);

    printf("\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n" ,nome2);
    printf("População: %d \n" ,populacao2);
    printf("Área: %.2f km² \n" ,area2);
    printf("PIB: %f Bilhões \n" ,pib2);
    printf("Número de Pontos Turísticos: %d \n" ,pontos2);

    return 0;
}
