#include <stdio.h>

int main() {
    unsigned long populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int escolha;

    // Cadastro das cartas
    printf("Cadastro da Carta 1:\n");
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Menu simples
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\nResultado da Comparacao:\n");

    if (escolha == 1) {
        if (populacao1 > populacao2)
            printf("Carta 1 vence em Populacao!\n");
        else if (populacao1 < populacao2)
            printf("Carta 2 vence em Populacao!\n");
        else
            printf("Empate em Populacao.\n");
    }

    if (escolha == 2) {
        if (area1 > area2)
            printf("Carta 1 vence em Area!\n");
        else if (area1 < area2)
            printf("Carta 2 vence em Area!\n");
        else
            printf("Empate em Area.\n");
    }

    if (escolha == 3) {
        if (pib1 > pib2)
            printf("Carta 1 vence em PIB!\n");
        else if (pib1 < pib2)
            printf("Carta 2 vence em PIB!\n");
        else
            printf("Empate em PIB.\n");
    }

    if (escolha == 4) {
        if (pontos1 > pontos2)
            printf("Carta 1 vence em Pontos Turisticos!\n");
        else if (pontos1 < pontos2)
            printf("Carta 2 vence em Pontos Turisticos!\n");
        else
            printf("Empate em Pontos Turisticos.\n");
    }

    return 0;
}





#include <stdio.h>

int main() {
    unsigned long pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int opcao;

    printf("Cadastro da Carta 1:\n");
    printf("Populacao: "); scanf("%lu", &pop1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Populacao: "); scanf("%lu", &pop2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontos2);

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    float percapita1 = pib1 / pop1;
    float percapita2 = pib2 / pop2;

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Densidade Populacional\n2 - PIB per Capita\n3 - Populacao + Area\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            if (dens1 < dens2)
                printf("Carta 1 vence (menor Densidade Populacional)\n");
            else if (dens2 < dens1)
                printf("Carta 2 vence (menor Densidade Populacional)\n");
            else
                printf("Empate\n");
            break;

        case 2:
            if (percapita1 > percapita2)
                printf("Carta 1 vence (maior PIB per Capita)\n");
            else if (percapita2 > percapita1)
                printf("Carta 2 vence (maior PIB per Capita)\n");
            else
                printf("Empate\n");
            break;

        case 3:
            if ((pop1 + (unsigned long)area1) > (pop2 + (unsigned long)area2))
                printf("Carta 1 vence (Populacao + Area)\n");
            else
                printf("Carta 2 vence (Populacao + Area)\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}





#include <stdio.h>

int main() {
    unsigned long pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    printf("Cadastro da Carta 1:\n");
    scanf("%lu %f %f %d", &pop1, &area1, &pib1, &pontos1);
    printf("Cadastro da Carta 2:\n");
    scanf("%lu %f %f %d", &pop2, &area2, &pib2, &pontos2);

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    float ppc1 = pib1 / pop1;
    float ppc2 = pib2 / pop2;

    // Comparando dois atributos com lógica composta e operador ternário
    printf("\nComparando PIB per Capita e Pontos Turísticos...\n");

    int resultado = (ppc1 > ppc2 && pontos1 > pontos2) ? 1 :
                    (ppc2 > ppc1 && pontos2 > pontos1) ? 2 : 0;

    (resultado == 1) ? printf("Carta 1 vence!\n") :
    (resultado == 2) ? printf("Carta 2 vence!\n") :
                       printf("Empate geral!\n");

    return 0;
}
