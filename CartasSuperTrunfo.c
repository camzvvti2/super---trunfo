#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARTAS 4
#define MAX_ESTADOS 8

typedef struct {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

void calcularDados(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = (c->pib * 1000000000) / c->populacao;
    c->superPoder = c->populacao + c->area + c->pib + c->pontosTuristicos + c->pibPerCapita + (1.0 / c->densidadePopulacional);
}

void lerCarta(Carta *c) {
    printf("Estado (A a H): ");
    scanf(" %c", &c->estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", c->codigo);
    getchar(); // Limpa buffer
    
    printf("Nome da Cidade: ");
    fgets(c->nomeCidade, 50, stdin);
    c->nomeCidade[strcspn(c->nomeCidade, "\n")] = 0;
    
    printf("População: ");
    scanf("%lu", &c->populacao);
    printf("Área (km²): ");
    scanf("%f", &c->area);
    printf("PIB (bilhões): ");
    scanf("%f", &c->pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &c->pontosTuristicos);
    
    calcularDados(c);
}

void exibirCarta(const Carta *c) {
    printf("\n----------------------\n");
    printf(" Estado: %c\n", c->estado);
    printf(" Código: %s\n", c->codigo);
    printf(" Nome da Cidade: %s\n", c->nomeCidade);
    printf(" População: %lu habitantes\n", c->populacao);
    printf(" Área: %.2f km²\n", c->area);
    printf(" PIB: %.2f bilhões de reais\n", c->pib);
    printf(" Pontos Turísticos: %d\n", c->pontosTuristicos);
    printf(" Densidade Populacional: %.2f hab/km²\n", c->densidadePopulacional);
    printf(" PIB per Capita: %.2f reais\n", c->pibPerCapita);
    printf(" Super Poder: %.2f\n", c->superPoder);
    printf("----------------------\n");
}

void compararCartas(const Carta *c1, const Carta *c2) {
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", c1->populacao > c2->populacao ? 1 : 2);
    printf("Área: Carta %d venceu\n", c1->area > c2->area ? 1 : 2);
    printf("PIB: Carta %d venceu\n", c1->pib > c2->pib ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", c1->pontosTuristicos > c2->pontosTuristicos ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", c1->densidadePopulacional < c2->densidadePopulacional ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", c1->pibPerCapita > c2->pibPerCapita ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", c1->superPoder > c2->superPoder ? 1 : 2);
}

int main() {
    Carta cartas[MAX_ESTADOS][MAX_CARTAS];
    int quantidade[MAX_ESTADOS] = {0};
    int totalCartas = 0;
    char estado;
    int opcao;
    
    printf("Quantas cartas deseja cadastrar? (Máx: %d por estado)\n", MAX_CARTAS);
    scanf("%d", &totalCartas);
    if (totalCartas > MAX_ESTADOS * MAX_CARTAS) totalCartas = MAX_ESTADOS * MAX_CARTAS;
    
    for (int i = 0; i < totalCartas; i++) {
        printf("\nInforme os dados para a carta %d:\n", i + 1);
        lerCarta(&cartas[i / MAX_CARTAS][quantidade[i / MAX_CARTAS]++]);
    }
    
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < MAX_ESTADOS; i++) {
        for (int j = 0; j < quantidade[i]; j++) {
            exibirCarta(&cartas[i][j]);
        }
    }
    
    do {
        printf("\nEscolha duas cartas para comparar (Digite o estado e o índice, ex: A 1 B 2): ");
        char est1, est2;
        int idx1, idx2;
        scanf(" %c %d %c %d", &est1, &idx1, &est2, &idx2);
        
        int id1 = est1 - 'A';
        int id2 = est2 - 'A';
        
        if (id1 >= 0 && id1 < MAX_ESTADOS && id2 >= 0 && id2 < MAX_ESTADOS && idx1 > 0 && idx1 <= quantidade[id1] && idx2 > 0 && idx2 <= quantidade[id2]) {
            compararCartas(&cartas[id1][idx1 - 1], &cartas[id2][idx2 - 1]);
        } else {
            printf("Entradas inválidas!\n");
        }
        
        printf("Deseja comparar outra? (1-Sim / 0-Não): ");
        scanf("%d", &opcao);
    } while (opcao);
    
    return 0;
}
