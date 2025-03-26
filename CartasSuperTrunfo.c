#include <stdio.h>
//incluindo variavel float e calculo do super poder
//por:Rodolfo Assunçao
float calcular_super_poder(unsigned long int populacao, float area, float Pib, int N_P_turistico, float densidade, float pib_per_capita) {
    return populacao + area + Pib + N_P_turistico + (densidade > 0 ? (1 / densidade) : 0) + pib_per_capita;
}
// incluindo as variaveis a ser trabalhadas
int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    int N_P_turistico1, N_P_turistico2;
    float area1, area2, Pib1, Pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Cadastro da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (3 caracteres): ");
    scanf("%3s", codigo1);
    
    getchar(); // Limpeza do buffer, !muito importante
    printf("Nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    
    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico1);

    printf("Área total (km²): ");
    scanf("%f", &area1);

    printf("PIB (em milhões): ");
    scanf("%f", &Pib1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = Pib1 / populacao1;
    super_poder1 = calcular_super_poder(populacao1, area1, Pib1, N_P_turistico1, densidade1, pib_per_capita1);

    getchar(); // Limpeza do buffer antes de começar a segunda entrada

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta (3 caracteres): ");
    scanf("%3s", codigo2);

    getchar(); // Limpeza do buffer
    printf("Nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico2);

    printf("Área total (km²): ");
    scanf("%f", &area2);

    printf("PIB (em milhões): ");
    scanf("%f", &Pib2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = Pib2 / populacao2;
    super_poder2 = calcular_super_poder(populacao2, area2, Pib2, N_P_turistico2, densidade2, pib_per_capita2);

    // Exibição das informações
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c\nCódigo: %s\nNome: %sPopulação: %lu\nPontos turísticos: %d\nÁrea: %.2f km²\nPIB: %.2f milhões\n",
           estado1, codigo1, nome1, populacao1, N_P_turistico1, area1, Pib1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f milhões\nSuper Poder: %.2f\n", densidade1, pib_per_capita1, super_poder1);

    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c\nCódigo: %s\nNome: %sPopulação: %lu\nPontos turísticos: %d\nÁrea: %.2f km²\nPIB: %.2f milhões\n",
           estado2, codigo2, nome2, populacao2, N_P_turistico2, area2, Pib2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f milhões\nSuper Poder: %.2f\n", densidade2, pib_per_capita2, super_poder2);

    // Comparação das cartas
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
