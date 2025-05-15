#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;                  // Letra de 'A' a 'H'
    char codigo[4];               // Ex: "A01"
    char nomeCidade[50];         // Nome da cidade
    int populacao;               // Número de habitantes
    float area;                  // Área em km²
    float pib;                   // PIB em bilhões de reais
    int pontosTuristicos;       // Número de pontos turísticos
} Carta;

void mostrarCarta(Carta c) {
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("------------------------\n");
}

int main() {
    // Definindo as duas cartas
    Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    int opcao;

    printf("=== Super Trunfo - Cidades ===\n\n");
    printf("Carta 1:\n");
    mostrarCarta(carta1);
    printf("Carta 2:\n");
    mostrarCarta(carta2);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Comparando População...\n");
            if (carta1.populacao > carta2.populacao)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.populacao < carta2.populacao)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Comparando Área...\n");
            if (carta1.area > carta2.area)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.area < carta2.area)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Comparando PIB...\n");
            if (carta1.pib > carta2.pib)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.pib < carta2.pib)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Comparando Pontos Turísticos...\n");
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
