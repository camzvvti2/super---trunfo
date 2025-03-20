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
} Carta;

// Função para limpar o buffer do teclado
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para ler uma entrada de char válida
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

// Função para ler uma string válida (nome da cidade)
void lerStringValida(char *str, int maxLen) {
    while (1) {
        fgets(str, maxLen, stdin);
        
        // Remover o '\n' caso tenha sido armazenado
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        if (strlen(str) > 0) {
            return;
        }
        printf("Entrada inválida! Digite um nome de cidade válido (não vazio e com menos de %d caracteres): ", maxLen);
    }
}

// Função para ler um inteiro válido
int lerIntValido(int min, int max) {
    int val;
    while (1) {
        if (scanf("%d", &val) == 1 && val >= min && val <= max) {
            return val;
        }
        printf("Entrada inválida! Digite um número inteiro entre %d e %d: ", min, max);
        clearBuffer();
    }
}

// Função para ler um número de ponto flutuante válido
float lerFloatValido(float min, float max) {
    float val;
    while (1) {
        if (scanf("%f", &val) == 1 && val >= min && val <= max) {
            return val;
        }
        printf("Entrada inválida! Digite um número decimal entre %.2f e %.2f: ", min, max);
        clearBuffer();
    }
}

// Função para ler os dados de uma carta
void lerCarta(Carta* c) {
    printf("Estado (A a H): ");
    c->estado = lerCharValido('A', 'H');

    printf("Código da Carta (ex: A01): ");
    while (1) {
        scanf("%s", c->codigo); 
        
        // Validar se tem exatamente 4 caracteres e segue o formato esperado
        if (strlen(c->codigo) == 4 && 
            c->codigo[0] >= 'A' && c->codigo[0] <= 'H' &&
            c->codigo[1] >= '0' && c->codigo[1] <= '9' &&
            c->codigo[2] >= '0' && c->codigo[2] <= '9' &&
            c->codigo[3] >= '1' && c->codigo[3] <= '4') {
            break;
        }
        printf("Código inválido! Digite um código válido (ex: A01): ");
    }

    printf("Nome da Cidade: ");
    clearBuffer();
    lerStringValida(c->nomeCidade, 50);

    printf("População (número de habitantes): ");
    c->populacao = lerIntValido(1, 100000000);

    printf("Área (em km²): ");
    c->area = lerFloatValido(1.0, 10000.0);

    printf("PIB (em bilhões de reais): ");
    c->pib = lerFloatValido(0.0, 100000.0);

    printf("Número de Pontos Turísticos (0 a 500): ");
    c->pontosTuristicos = lerIntValido(0, 500);
}

// Função para exibir os dados de uma carta
void exibirCarta(const Carta* c) {
    printf("\n----------------------\n");
    printf(" Estado: %c\n", c->estado);
    printf(" Código: %s\n", c->codigo);
    printf(" Nome da Cidade: %s\n", c->nomeCidade);
    printf(" População: %d habitantes\n", c->populacao);
    printf(" Área: %.2f km²\n", c->area);
    printf(" PIB: %.2f bilhões de reais\n", c->pib);
    printf(" Pontos Turísticos: %d\n", c->pontosTuristicos);
    printf("----------------------\n");
}

int main() {
    Carta cartas[MAX_ESTADOS][MAX_CARTAS];  
    int numCartas[MAX_ESTADOS] = {0};  
    int estadoIndex, i;

    for (estadoIndex = 0; estadoIndex < MAX_ESTADOS; estadoIndex++) {
        printf("\nInforme as cartas para o estado %c:\n", 'A' + estadoIndex);
        
        printf("Quantas cartas deseja cadastrar para o estado %c? (1 a 4): ", 'A' + estadoIndex);
        int num = lerIntValido(1, 4);

        for (i = 0; i < num; i++) {
            printf("\nInforme os dados da carta %d para o estado %c:\n", i + 1, 'A' + estadoIndex);
            lerCarta(&cartas[estadoIndex][i]);
        }

        numCartas[estadoIndex] = num;
    }

    for (estadoIndex = 0; estadoIndex < MAX_ESTADOS; estadoIndex++) {
        if (numCartas[estadoIndex] > 0) {
            printf("\nCartas cadastradas para o estado %c:\n", 'A' + estadoIndex);
            for (i = 0; i < numCartas[estadoIndex]; i++) {
                exibirCarta(&cartas[estadoIndex][i]);
            }
        }
    }

    return 0;
}
