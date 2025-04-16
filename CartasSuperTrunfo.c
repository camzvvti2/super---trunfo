#include <stdio.h>
#include <string.h>

// Super Trunfo - Comparação com Destaque Visual (Emoji só na vitória)

int main() {
    // Dados da Cidade 1
    char nome1[50] = "Manaus";
    char estado1[30] = "Amazonas";
    int populacao1 = 4281209;
    float area1 = 1571000.0;
    float pib1 = 42968.0;
    int pontos_turisticos1 = 10;
    float densidade1 = populacao1 / area1;

    // Dados da Cidade 2
    char nome2[50] = "Goiania";
    char estado2[30] = "Goiás";
    int populacao2 = 7350483;
    float area2 = 340.086;
    float pib2 = 55247.45;
    int pontos_turisticos2 = 8;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("===== SUPER TRUNFO - CIDADES =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite a opção desejada (1 a 5): ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%s) e %s (%s):\n\n", nome1, estado1, nome2, estado2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome1, estado1);
            } else if (populacao2 > populacao1) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome2, estado2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome1, estado1);
            } else if (area2 > area1) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome2, estado2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome1, estado1);
            } else if (pib2 > pib1) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome2, estado2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, pontos_turisticos1);
            printf("%s: %d pontos\n", nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome1, estado1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome2, estado2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (menor é melhor)\n");
            printf("%s: %.4f hab/km²\n", nome1, densidade1);
            printf("%s: %.4f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome1, estado1);
            } else if (densidade2 < densidade1) {
                printf("\n*** VENCEDORA: %s (%s) 🎉 ***\n", nome2, estado2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Tente novamente com um número de 1 a 5.\n");
    }

    return 0;
}
