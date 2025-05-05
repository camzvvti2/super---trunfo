#include <stdio.h>
#include <string.h>

int main()
{
    // setbuf(stdout, NULL);

    // Declaração das variáveis da primeira carta:
    char c1_estado[60];
    char c1_codigo[10];
    char c1_nome_cidade[60];
    unsigned long int c1_populacao;
    int c1_pontos_turisticos;
    float c1_area;
    float c1_PIB;
    float c1_densidade_populacional;
    float c1_pib_per_capita;
    double c1_super_poder;

    // Recebendo do usuário os dados da primeira carta:
    printf("Carta 1:\n");

    printf("Estado: ");
    fgets(c1_estado, sizeof(c1_estado), stdin);
    c1_estado[strcspn(c1_estado, "\n")] = 0;

    printf("Código: ");
    fgets(c1_codigo, sizeof(c1_codigo), stdin);
    c1_codigo[strcspn(c1_codigo, "\n")] = 0;

    printf("Nome da Cidade: ");
    fgets(c1_nome_cidade, sizeof(c1_nome_cidade), stdin);
    c1_nome_cidade[strcspn(c1_nome_cidade, "\n")] = 0;

    printf("População: ");
    scanf(" %lu", &c1_populacao);

    printf("Área: ");
    scanf(" %f", &c1_area);

    printf("PIB: ");
    scanf(" %f", &c1_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c1_pontos_turisticos);
    getchar();

    c1_densidade_populacional = c1_populacao / c1_area;
    c1_pib_per_capita = (c1_PIB * 1e9) / c1_populacao;
    c1_super_poder = c1_populacao + c1_area + c1_PIB + c1_pontos_turisticos + c1_pib_per_capita + (c1_area / c1_populacao);

    // Declaração das variáveis da segunda carta:
    char c2_estado[60];
    char c2_codigo[10];
    char c2_nome_cidade[60];
    unsigned long int c2_populacao;
    int c2_pontos_turisticos;
    float c2_area;
    float c2_PIB;
    float c2_densidade_populacional;
    float c2_pib_per_capita;
    double c2_super_poder;

    printf("\nCarta 2:\n");

    printf("Estado: ");
    fgets(c2_estado, sizeof(c2_estado), stdin);
    c2_estado[strcspn(c2_estado, "\n")] = 0;

    printf("Código: ");
    fgets(c2_codigo, sizeof(c2_codigo), stdin);
    c2_codigo[strcspn(c2_codigo, "\n")] = 0;

    printf("Nome da Cidade: ");
    fgets(c2_nome_cidade, sizeof(c2_nome_cidade), stdin);
    c2_nome_cidade[strcspn(c2_nome_cidade, "\n")] = 0;

    printf("População: ");
    scanf(" %lu", &c2_populacao);

    printf("Área: ");
    scanf(" %f", &c2_area);

    printf("PIB: ");
    scanf(" %f", &c2_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c2_pontos_turisticos);
    getchar();

    c2_densidade_populacional = c2_populacao / c2_area;
    c2_pib_per_capita = (c2_PIB * 1e9) / c2_populacao;
    c2_super_poder = c2_populacao + c2_area + c2_PIB + c2_pontos_turisticos + c2_pib_per_capita + (c2_area / c2_populacao);

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");

    int opcao1, opcao2;

    printf("\nOpção: ");
    scanf(" %d", &opcao1);
    getchar();

    switch(opcao1) {
        case 1:
            printf("\nEscolha o segundo atributo para comparar?\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");

            printf("\nOpção: ");
            scanf(" %d", &opcao2);
            getchar();
            break;
        
        case 2:
            printf("\nEscolha o segundo atributo para comparar?\n");
            printf("1 - População\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");

            printf("\nOpção: ");
            scanf(" %d", &opcao2);
            getchar();
            break;

        case 3:
            printf("\nEscolha o segundo atributo para comparar?\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");

            printf("\nOpção: ");
            scanf(" %d", &opcao2);
            getchar();
            break;

        case 4:
            printf("\nEscolha o segundo atributo para comparar?\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");

            printf("\nOpção: ");
            scanf(" %d", &opcao2);
            getchar();
            break;

        case 5:
            printf("\nEscolha o segundo atributo para comparar?\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");

            printf("\nOpção: ");
            scanf(" %d", &opcao2);
            getchar();
            break;
        
        case 6:
            printf("\nEscolha o segundo atributo para comparar?\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("7 - Super poder\n");

            printf("\nOpção: ");
            scanf(" %d", &opcao2);
            getchar();
            break;

        case 7:
            printf("\nEscolha o segundo atributo para comparar?\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");

            printf("\nOpção: ");
            scanf(" %d", &opcao2);
            getchar();
            break;
        
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    double soma_carta1 = 0.0, soma_carta2 = 0.0;

    switch (opcao1) {
        case 1:
            printf("\nAtributo utilizado para comparação: População\n\n");
            printf("Carta 1 (%s) - População: %lu habitantes\n", c1_estado, c1_populacao);
            printf("Carta 2 (%s) - População: %lu habitantes\n\n", c2_estado, c2_populacao);

            if (c1_populacao > c2_populacao)
                printf("População: Carta 1 venceu (1)\n");
            else if (c1_populacao < c2_populacao)
                printf("População: Carta 2 venceu (0)\n");
            else
                printf("População: Empate!\n");

            soma_carta1 += c1_populacao;
            soma_carta2 += c2_populacao;
                
            break;

        case 2:
            printf("\nAtributo utilizado para comparação: Área\n\n");
            printf("Carta 1 (%s) - Área: %.2f\n", c1_estado, c1_area);
            printf("Carta 2 (%s) - Área: %.2f\n\n", c2_estado, c2_area);

            if (c1_area > c2_area)
                printf("Área: Carta 1 venceu (1)\n");
            else if (c1_area < c2_area)
                printf("Área: Carta 2 venceu (0)\n");
            else
                printf("Área: Empate!\n");

            soma_carta1 += c1_area;
            soma_carta2 += c2_area;
            
            break;

        case 3:
            printf("\nAtributo utilizado para comparação: PIB\n\n");
            printf("Carta 1 (%s) - PIB: %.2f\n", c1_estado, c1_PIB);
            printf("Carta 2 (%s) - PIB: %.2f\n\n", c2_estado, c2_PIB);

            if (c1_PIB > c2_PIB)
                printf("PIB: Carta 1 venceu (1)\n");
            else if (c1_PIB < c2_PIB)
                printf("PIB: Carta 2 venceu (0)\n");
            else
                printf("PIB: Empate!\n");

            soma_carta1 += c1_PIB;
            soma_carta2 += c2_PIB;

            break;

        case 4:
            printf("\nAtributo utilizado para comparação: Número de Pontos Turísticos\n\n");
            printf("Carta 1 (%s) - Pontos turísticos: %d\n", c1_estado, c1_pontos_turisticos);
            printf("Carta 2 (%s) - Pontos turísticos: %d\n\n", c2_estado, c2_pontos_turisticos);

            if (c1_pontos_turisticos > c2_pontos_turisticos)
                printf("Pontos turísticos: Carta 1 venceu (1)\n");
            else if (c1_pontos_turisticos < c2_pontos_turisticos)
                printf("Pontos turísticos: Carta 2 venceu (0)\n");
            else
                printf("Pontos turísticos: Empate!\n");

            soma_carta1 += c1_pontos_turisticos;
            soma_carta2 += c2_pontos_turisticos;

            break;

        case 5:
            printf("\nAtributo utilizado para comparação: Densidade populacional\n\n");
            printf("Carta 1 (%s) - Densidade populacional: %.2f\n", c1_estado, c1_densidade_populacional);
            printf("Carta 2 (%s) - Densidade populacional: %.2f\n\n", c2_estado, c2_densidade_populacional);

            if (c1_densidade_populacional > c2_densidade_populacional)
                printf("Densidade populacional: Carta 1 venceu (1)\n");
            else if (c1_densidade_populacional < c2_densidade_populacional)
                printf("Densidade populacional: Carta 2 venceu (0)\n");
            else
                printf("Densidade populacional: Empate!\n");

            soma_carta1 += c1_densidade_populacional;
            soma_carta2 += c2_densidade_populacional;

            break;

        case 6:
            printf("\nAtributo utilizado para comparação: PIB per capita\n\n");
            printf("Carta 1 (%s) - PIB per capita: %.2f\n", c1_estado, c1_pib_per_capita);
            printf("Carta 2 (%s) - PIB per capita: %.2f\n\n", c2_estado, c2_pib_per_capita);

            if (c1_pib_per_capita > c2_pib_per_capita)
                printf("PIB per capita: Carta 1 venceu (1)\n");
            else if (c1_pib_per_capita < c2_pib_per_capita)
                printf("PIB per capita: Carta 2 venceu (0)\n");
            else
                printf("PIB per capita: Empate!\n");

            soma_carta1 += c1_pib_per_capita;
            soma_carta2 += c2_pib_per_capita;

            break;

        case 7:
            printf("\nAtributo utilizado para comparação: Super poder\n\n");
            printf("Carta 1 (%s) - Super poder: %.2f\n", c1_estado, c1_super_poder);
            printf("Carta 2 (%s) - Super poder: %.2f\n\n", c2_estado, c2_super_poder);

            if (c1_super_poder > c2_super_poder)
                printf("Super poder: Carta 1 venceu (1)\n");
            else if (c1_super_poder < c2_super_poder)
                printf("Super poder: Carta 2 venceu (0)\n");
            else
                printf("Super poder: Empate!\n");

            soma_carta1 += c1_super_poder;
            soma_carta2 += c2_super_poder;

            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    switch (opcao2) {
        case 1:
            printf("\nAtributo utilizado para comparação: População\n\n");
            printf("Carta 1 (%s) - População: %lu habitantes\n", c1_estado, c1_populacao);
            printf("Carta 2 (%s) - População: %lu habitantes\n\n", c2_estado, c2_populacao);

            if (c1_populacao > c2_populacao)
                printf("População: Carta 1 venceu (1)\n");
            else if (c1_populacao < c2_populacao)
                printf("População: Carta 2 venceu (0)\n");
            else
                printf("População: Empate!\n");

            soma_carta1 += c1_populacao;
            soma_carta2 += c2_populacao;
                
            break;

        case 2:
            printf("\nAtributo utilizado para comparação: Área\n\n");
            printf("Carta 1 (%s) - Área: %.2f\n", c1_estado, c1_area);
            printf("Carta 2 (%s) - Área: %.2f\n\n", c2_estado, c2_area);

            if (c1_area > c2_area)
                printf("Área: Carta 1 venceu (1)\n");
            else if (c1_area < c2_area)
                printf("Área: Carta 2 venceu (0)\n");
            else
                printf("Área: Empate!\n");

            soma_carta1 += c1_area;
            soma_carta2 += c2_area;
            
            break;

        case 3:
            printf("\nAtributo utilizado para comparação: PIB\n\n");
            printf("Carta 1 (%s) - PIB: %.2f\n", c1_estado, c1_PIB);
            printf("Carta 2 (%s) - PIB: %.2f\n\n", c2_estado, c2_PIB);

            if (c1_PIB > c2_PIB)
                printf("PIB: Carta 1 venceu (1)\n");
            else if (c1_PIB < c2_PIB)
                printf("PIB: Carta 2 venceu (0)\n");
            else
                printf("PIB: Empate!\n");

            soma_carta1 += c1_PIB;
            soma_carta2 += c2_PIB;

            break;

        case 4:
            printf("\nAtributo utilizado para comparação: Número de Pontos Turísticos\n\n");
            printf("Carta 1 (%s) - Pontos turísticos: %d\n", c1_estado, c1_pontos_turisticos);
            printf("Carta 2 (%s) - Pontos turísticos: %d\n\n", c2_estado, c2_pontos_turisticos);

            if (c1_pontos_turisticos > c2_pontos_turisticos)
                printf("Pontos turísticos: Carta 1 venceu (1)\n");
            else if (c1_pontos_turisticos < c2_pontos_turisticos)
                printf("Pontos turísticos: Carta 2 venceu (0)\n");
            else
                printf("Pontos turísticos: Empate!\n");

            soma_carta1 += c1_pontos_turisticos;
            soma_carta2 += c2_pontos_turisticos;

            break;

        case 5:
            printf("\nAtributo utilizado para comparação: Densidade populacional\n\n");
            printf("Carta 1 (%s) - Densidade populacional: %.2f\n", c1_estado, c1_densidade_populacional);
            printf("Carta 2 (%s) - Densidade populacional: %.2f\n\n", c2_estado, c2_densidade_populacional);

            if (c1_densidade_populacional > c2_densidade_populacional)
                printf("Densidade populacional: Carta 1 venceu (1)\n");
            else if (c1_densidade_populacional < c2_densidade_populacional)
                printf("Densidade populacional: Carta 2 venceu (0)\n");
            else
                printf("Densidade populacional: Empate!\n");

            soma_carta1 += c1_densidade_populacional;
            soma_carta2 += c2_densidade_populacional;

            break;

        case 6:
            printf("\nAtributo utilizado para comparação: PIB per capita\n\n");
            printf("Carta 1 (%s) - PIB per capita: %.2f\n", c1_estado, c1_pib_per_capita);
            printf("Carta 2 (%s) - PIB per capita: %.2f\n\n", c2_estado, c2_pib_per_capita);

            if (c1_pib_per_capita > c2_pib_per_capita)
                printf("PIB per capita: Carta 1 venceu (1)\n");
            else if (c1_pib_per_capita < c2_pib_per_capita)
                printf("PIB per capita: Carta 2 venceu (0)\n");
            else
                printf("PIB per capita: Empate!\n");

            soma_carta1 += c1_pib_per_capita;
            soma_carta2 += c2_pib_per_capita;

            break;

        case 7:
            printf("\nAtributo utilizado para comparação: Super poder\n\n");
            printf("Carta 1 (%s) - Super poder: %.2f\n", c1_estado, c1_super_poder);
            printf("Carta 2 (%s) - Super poder: %.2f\n\n", c2_estado, c2_super_poder);

            if (c1_super_poder > c2_super_poder)
                printf("Super poder: Carta 1 venceu (1)\n");
            else if (c1_super_poder < c2_super_poder)
                printf("Super poder: Carta 2 venceu (0)\n");
            else
                printf("Super poder: Empate!\n");

            soma_carta1 += c1_super_poder;
            soma_carta2 += c2_super_poder;

            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    printf("\nCarta 1 (%s) - Soma dos atributos: %.2f\n", c1_estado, soma_carta1);
    printf("Carta 2 (%s) - Soma dos atributos: %.2f\n", c2_estado, soma_carta2);

    if (soma_carta1 > soma_carta2)
        printf("\nResultado: Carta 1 - Venceu!\n");
    else if (soma_carta1 < soma_carta2)
        printf("\nResultado: Carta 2 - Venceu!\n");
    else
        printf("\nResultado: Empate!\n");

    printf("\nPressione Enter para sair...");
    getchar();

    return 0;
}
