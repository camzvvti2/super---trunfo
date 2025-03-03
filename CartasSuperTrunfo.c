#include <stdio.h>

int main() {

    printf("***Desafio Super Truco!\n");
    
    // Declaração das variáveis para a primeira carta (Bruxelas)
    
    char estado1 = 'B'; // Representando Bélgica
    char codigo1[] = "B01";
    char nomeCidade1[] = "Bruxelas";
    int populacao1 = 1190000; // População estimada de Bruxelas
    float area1 = 161.38; // Área em km² de Bruxelas
    float pib1 = 543; // PIB em bilhões de euros
    int pontosTuristicos1 = 28; // Número aproximado de pontos turísticos

    // Declaração das variáveis para a segunda carta (Buenos Aires)
  
    char estado2 = 'A'; // Representando Argentina
    char codigo2[] = "A02";
    char nomeCidade2[] = "Buenos Aires";
    int populacao2 = 3120000; // População estimada de Buenos Aires
    float area2 = 202.0; // Área em km² de Buenos Aires
    float pib2 = 646.1; // PIB em bilhões de dólares
    int pontosTuristicos2 = 250; // Número aproximado de pontos turísticos

    // Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de euros\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de dólares\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
