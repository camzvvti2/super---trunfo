#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, estadu[50];
    char codigo[50] = {"01","02", "\0"};
    char nome, nomi[50];
    int populacao, populacau;
    float area, ariaa;
    float PIB, PEB;
    int pontosturisticos, pontus;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    printf ("qual o estado? /n");
    scanf("%s, estado");

    printf ("qual o estado 2? /n");
    scanf("%s, estadu");

    printf ("qual o código da carta? /n");
    scanf("%s, codigo");

    printf ("qual o código da carta 2? /n");
    scanf("%s, codigo");

    printf ("qual o nome da carta? /n");
    scanf("%s nome");

    printf ("qual o nome da carta 2? /n");
    scanf("%s nomi");

    printf ("qual a população do país? /n");
    scanf("%f, populacao");

    printf ("qual a população do país 2? /n");
    scanf("%f, populacau");

    printf ("qual a àrea do país? /n");
    scanf("%f, area");

    printf ("qual a àrea do país 2? /n");
    scanf("%f, ariaa");

    printf ("qual o PIB?");
    scanf("%f, PIB");

    printf ("qual o PIB 2?");
    scanf("%f, PEB");

    printf ("quantos pontos turísticos tem país?");
    scanf ("%d, pontosturisticos");

    printf ("quantos pontos turísticos tem no país 2? /n");
    scanf ("%d, pontus");

    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:

    printf ("Estado: %s /n - Código: %d /n", estado, codigo [0]);
    printf ("Nome: %s /n - População: %f /n", nome, populacao);
    printf ("Àrea: %f /n - PIB: %f /n - Pontos Turísticos: %d /n", area, PIB, pontosturisticos);

    printf ("Estado: %s /n - Código: %d /n", estadu, codigo [1]);
    printf ("Nome: %s /n - População: %f /n", nomi, populacau);
    printf ("Àrea: %f /n - PIB: %f /n - Pontos Turísticos: %d /n", ariaa, PEB, pontus);

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

