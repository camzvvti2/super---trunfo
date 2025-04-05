#include <stdio.h>

// Desafio Super Trunfo - Nível Avançado
// Execução de exercicio por Jonathan Mota de Carvalho

#define VERDE "\033[1;32m"
#define VERMELHO "\033[1;31m"
#define RESET "\033[0m"

typedef struct {
    char codigo[4];  
    unsigned long int populacao;    
    float area;       
    float pib;        
    int pontos_turisticos;   
    float densidade_populacional; 
    float pib_per_capita; 
    float super_poder;
} Cidade;

// Função para calcular a densidade populacional
double calcular_densidade_populacional(unsigned long int populacao, float area) {
    return (area > 0) ? ((double)populacao / area) : 0;
}

// Função para calcular o PIB per capita
double calcular_pib_per_capita(float pib, unsigned long int populacao) {
    return (populacao > 0) ? ((pib * 1000000) / populacao) : 0; 
}

// Função para calcular o Super Poder
double calcular_super_poder(Cidade c) {
    return (float)(c.populacao + c.area + c.pib + c.pontos_turisticos + c.pib_per_capita + (1.0 / c.densidade_populacional));
}

void comparar_atributo(char* nome, float valor1, float valor2, int menor_vence) {
    int resultado;
    if (menor_vence) {
        resultado = valor1 < valor2;
    } else {
        resultado = valor1 > valor2;
    }
    printf("%s: %sCarta 1 venceu (%d)%s\n", nome, resultado ? VERDE : VERMELHO, resultado, RESET);
}

int main() {
    Cidade carta1, carta2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Código: ");
    scanf("%s", carta1.codigo);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (milhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = calcular_densidade_populacional(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1.pib, carta1.populacao);
    carta1.super_poder = calcular_super_poder(carta1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Código: ");
    scanf("%s", carta2.codigo);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (milhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade_populacional = calcular_densidade_populacional(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2.pib, carta2.populacao);
    carta2.super_poder = calcular_super_poder(carta2);

    // Comparações
    printf("\n==============================\n");
    printf("Comparação de Cartas:\n");
    printf("==============================\n\n");

    comparar_atributo("População", carta1.populacao, carta2.populacao, 0);
    comparar_atributo("Área", carta1.area, carta2.area, 0);
    comparar_atributo("PIB", carta1.pib, carta2.pib, 0);
    comparar_atributo("Pontos Turísticos", carta1.pontos_turisticos, carta2.pontos_turisticos, 0);
    comparar_atributo("Densidade Populacional", carta1.densidade_populacional, carta2.densidade_populacional, 1);
    comparar_atributo("PIB per Capita", carta1.pib_per_capita, carta2.pib_per_capita, 0);
    comparar_atributo("Super Poder", carta1.super_poder, carta2.super_poder, 0);

    return 0;
}
