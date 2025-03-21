#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARTAS 4  // Máximo de 4 cartas por estado
#define MAX_ESTADOS 8 // Máximo de 8 estados

typedef struct {
    char estado;          // Estado (A a H)
    char codigo[5];       // Código da carta (ex: A01)
    char nomeCidade[50];  // Nome da cidade
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade em bilhões
    int pontosTuristicos; // Número de pontos turísticos
    float densidadePopulacional; // Habitantes por km²
    float pibPerCapita;   // PIB per capita
} Carta;

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

char lerCharValido(char min, char max) {
    char c;
    while (1) {
        if (scanf(" %c", &c) == 1 && c >= min && c <= max) {
            return c;
        }
        printf("Entrada inválida! Digite uma letra entre %c e %c: ", min, max);
        clearBuffer();
    }
}

void lerStringValida(char *str, int maxLen) {
    while (1) {
        fgets(str, maxLen, stdin);
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        if (strlen(str) > 0) {
            return;
        }
        printf("Entrada inválida! Digite um nome de cidade válido: ");
    }
}

int lerIntValido(int min, int max) {
    int val;
    while (1) {
        if (scanf("%d", &val) == 1 && val >= min && val <= max) {
            return val;
        }
        printf("Entrada inválida! Digite um número entre %d e %d: ", min, max);
        clearBuffer();
    }
}

float lerFloatValido(float min, float max) {
    float val;
    while (1) {
        if (scanf("%f", &val) == 1 && val >= min && val <= max) {
            return val;
        }
        printf("Entrada inválida! Digite um número entre %.2f e %.2f: ", min, max);
        clearBuffer();
    }
}

void calcularDados(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = c->pib * 1000000000 / c->populacao;
}

void lerCarta(Carta* c) {
    printf("Estado (A a H): ");
    c->estado = lerCharValido('A', 'H');

    printf("Código da Carta (ex: A01): ");
    scanf("%s", c->codigo);
    printf("Nome da Cidade: ");
    clearBuffer();
    lerStringValida(c->nomeCidade, 50);

    printf("População: ");
    c->populacao = lerIntValido(1, 100000000);
    printf("Área (km²): ");
    c->area = lerFloatValido(1.0, 10000.0);
    printf("PIB (bilhões): ");
    c->pib = lerFloatValido(0.0, 100000.0);
    printf("Pontos Turísticos: ");
    c->pontosTuristicos = lerIntValido(0, 500);

    calcularDados(c);
}

void exibirCarta(const Carta* c) {
    printf("\n----------------------\n");
    printf(" Estado: %c\n", c->estado);
    printf(" Código: %s\n", c->codigo);
    printf(" Nome da Cidade: %s\n", c->nomeCidade);
    printf(" População: %d habitantes\n", c->populacao);
    printf(" Área: %.2f km²\n", c->area);
    printf(" PIB: %.2f bilhões de reais\n", c->pib);
    printf(" Pontos Turísticos: %d\n", c->pontosTuristicos);
    printf(" Densidade Populacional: %.2f hab/km²\n", c->densidadePopulacional);
    printf(" PIB per Capita: %.2f reais\n", c->pibPerCapita);
    printf("----------------------\n");
}

int main() {
    Carta cartas[2];
    printf("Cadastro de duas cartas:\n");
    
    printf("\nInforme os dados para a primeira carta:\n");
    lerCarta(&cartas[0]);
    
    printf("\nInforme os dados para a segunda carta:\n");
    lerCarta(&cartas[1]);

    printf("\nCartas cadastradas:\n");
    exibirCarta(&cartas[0]);
    exibirCarta(&cartas[1]);
    
    return 0;
}