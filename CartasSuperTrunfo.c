#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50], nome2[50];
    char codigo[4], codigo2[4];
    int pontosTuristicos, pontosTuristicos2, atributoVencedor;
    unsigned long int populacao, populacao2;
    float area, area2, pib, pib2;
    float densidadePopulacional, densidadePopulacional2, pibPerCapita, pibPerCapita2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** SUPERTRUNFO ***\n");
    printf("Escolha o atributo que decidirá qual carta vencerá!\n");
    printf("1. Populacão\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &atributoVencedor);


    printf("Agora cadastre os dados da primeira cidade\n");

    printf("Nome da cidade: \n");
    scanf("%49s", nome);

    printf("Código da cidade: \n");
    scanf("%3s", codigo);

    printf("População da cidade: \n");
    scanf("%lu", &populacao);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;
    // pibPerCapita = pib / populacao;

    printf("\n");


    printf("Agora cadastre os dados da segunda cidade\n");
    printf("Nome da cidade: \n");
    scanf("%49s", nome2);

    printf("Código da cidade: \n");
    scanf("%3s", codigo2);

    printf("População da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Área da cidade: \n");
    scanf("%f", &area2);

    printf("PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    densidadePopulacional2 = populacao2 / area2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    printf("Cartas cadastradas com sucesso! \n");
    printf("\n");

    printf("Aqui estão suas cartas:\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Nome: %s \n", nome);
    printf("Código: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional);

    printf("\n");

    printf("Carta 2:\n");
    printf("Nome: %s \n", nome2);
    printf("Código: %s \n", codigo2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: R$ %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("\n");

    printf("*** COMPARAÇÃO DAS CARTAS ***\n");
    printf("\n");
    printf("%s vs %s\n", nome, nome2);

    switch (atributoVencedor)
    {
    case 1:
    printf("Atributo que vence: População\n");
    printf("%s: %d - %s: %d\n", nome, populacao, nome2, populacao2);

    if(populacao > populacao2) {
        printf("%s venceu!\n", nome);
    } else if(populacao < populacao2) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate! \n");
    }
    break;

    case 2:
    printf("Atributo que vence: Área\n");
    printf("%s: %2f km² - %s: %2f km²\n", nome, area, nome2, area2);

    if(area > area2) {
        printf("%s venceu!\n", nome);
    } else if (area < area2) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate! \n");
    }
    break;

    case 3:
    printf("Atributo que vence: PIB\n");
    printf("%s: R$ %f - %s: R$ %f\n", nome, pib, nome2, pib2);

    if(pib > pib2) {
        printf("%s venceu!\n", nome);
    } else if (pib < pib2) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate! \n");
    }
    break;

    case 4:
    printf("Atributo que vence: Pontos turísticos\n");
    printf("%s: %d - %s: %d\n", nome, pontosTuristicos, nome2, pontosTuristicos2);

    if(pontosTuristicos > pontosTuristicos2) {
        printf("%s venceu!\n", nome);
    } else if (pontosTuristicos < pontosTuristicos2) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate! \n");
    }
    break;

    case 5:
    printf("Atributo que vence: Densidade demográfica\n");
    printf("%s: %f - %s: %f\n", nome, densidadePopulacional, nome2, densidadePopulacional2);

    if(densidadePopulacional < densidadePopulacional2) {
        printf("%s venceu!\n", nome);
    } else if (densidadePopulacional > densidadePopulacional2) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate! \n");
    }
    break;
    
    default:
    printf("Atributo inválido!");
    break;
    }

    return 0;
}
