#include <stdio.h>
#include <string.h>

int main() {
    char estado[3];
    char codigo[5];
    char codigo_da_carta[7];
    char municipio[20];
    int populacao;
    int pontos_turisticos;
    float area_territorial, pib;

    char estado_1[3];
    char codigo1[5];
    char codigo_da_carta1[7];
    char municipio1[20];
    int populacao1;
    int pontos_turisticos1;
    float area_territorial1, pib1;

    // ENTRADA DE DADOS - CARTA 01
    printf("CARTA 01\n");

    // CAPTURA DO ESTADO
    printf("Digite a Inicial do seu Estado:\n");
    scanf("%s", estado);
    getchar(); // USADO PARA LIMPAR O BUFFER

    // CAPTURA DO CÓDIGO
    printf("Digite um Código:\n");
    scanf("%s", codigo);
    getchar();

    // CAPTURAR E UNIR INICIAL DO ESTADO MAIS O CÓDIGO
    strcpy(codigo_da_carta, estado);
    strcat(codigo_da_carta, codigo);

    // CAPTURA DO MUNICÍPIO
    printf("Informe o nome do Município:\n");
    scanf(" %[^\n]", municipio);
    getchar();

    // CAPTURA DA POPULAÇÃO
    printf("Qual o número de Habitantes?\n");
    scanf("%d", &populacao);
    getchar();

    // CAPTURA DA ÁREA EM KM²
    printf("Informe a área em km²:\n");
    scanf("%f", &area_territorial);
    getchar();

    // CAPTURA DO PIB
    printf("Informe o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib);
    getchar();

    // CAPTURA DA QUANTIDADE DE PONTOS TURÍSTICOS
    printf("Quantos pontos turísticos há nessa cidade?\n");
    scanf("%d", &pontos_turisticos);
    getchar();

    // ENTRADA DE DADOS - CARTA 02
    printf("\nCARTA 02\n");

    // CAPTURA DO ESTADO
    printf("Digite a Inicial do seu Estado:\n");
    scanf("%s", estado_1);
    getchar();

    // CAPTURA DO CÓDIGO
    printf("Digite um Código:\n");
    scanf("%s", codigo1);
    getchar();

    // CAPTURAR E UNIR INICIAL DO ESTADO MAIS O CÓDIGO DA CARTA 2
    strcpy(codigo_da_carta1, estado_1);
    strcat(codigo_da_carta1, codigo1);

    // CAPTURA DO MUNICÍPIO
    printf("Informe o nome do Município:\n");
    scanf(" %[^\n]", municipio1);
    getchar();

    // CAPTURA DA POPULAÇÃO
    printf("Qual o número de Habitantes?\n");
    scanf("%d", &populacao1);
    getchar();

    // CAPTURA DA ÁREA EM KM²
    printf("Informe a área em km²:\n");
    scanf("%f", &area_territorial1);
    getchar();

    // CAPTURA DO PIB
    printf("Informe o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib1);
    getchar();

    // CAPTURA DA QUANTIDADE DE PONTOS TURÍSTICOS
    printf("Quantos pontos turísticos há nessa cidade?\n");
    scanf("%d", &pontos_turisticos1);
    getchar();

    // SAÍDA DE DADOS DA CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta 1: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", municipio);
    printf("População: %d Pessoas\n", populacao);
    printf("Área: %.2f km²\n", area_territorial);
    printf("PIB: R$ %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    // SAÍDA DE DADOS DA CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código da Carta 2: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", municipio1);
    printf("População: %d Pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area_territorial1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    return 0;
}