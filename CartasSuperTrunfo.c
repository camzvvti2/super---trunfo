#include <stdio.h>
#include <string.h>


int main() {
    // Declaração das variáveis utilizadas
    char estado_1, estado_2;
    char nome_1[50], nome_2[50];
    int pop_1, pop_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int turi_1, turi_2;

    // Cadastro da carta 1
    printf("INFORMAÇÕES DA CARTA 1\n");
    printf("Digite o estado da Carta 1: \n");
    scanf("%c", &estado_1);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome_1, sizeof(nome_1), stdin);
    nome_1[strcspn(nome_1, "\n")] = '\0';

    printf("Digite o número de habitantes: \n");
    scanf("%d", &pop_1);
    getchar();

    printf("Digite a área da cidade: \n");
    scanf("%f", &area_1);
    getchar();

    printf("Digite o PIB (em bilhões de reais) da cidade: \n");
    scanf("%f", &pib_1);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turi_1);
    getchar();

    // Cadastro da carta 2
    printf("\n");
    printf("INFORMAÇÕES DA CARTA 2\n");
    printf("Digite o estado da Carta 2: \n");
    scanf("%c", &estado_2);
    getchar();

    printf("Digite o nome da cidade : \n");
    fgets(nome_2, sizeof(nome_2), stdin);
    nome_2[strcspn(nome_2, "\n")] = '\0';

    printf("Digite o número de habitantes: \n");
    scanf("%d", &pop_2);
    getchar();

    printf("Digite a área da cidade: \n");
    scanf("%f", &area_2);
    getchar();

    printf("Digite o PIB (em bilhões de reais) da cidade: \n");
    scanf("%f", &pib_2);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turi_2);
    getchar();

    // Exibição dos dados da carta 1
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %c01\n", estado_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %d\n", pop_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", turi_1);

    // Exibição dos dados da carta 2
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c02\n", estado_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("População: %d\n", pop_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", turi_2);

    return 0;
}
