#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
struct Carta {
    char estado[50];
    unsigned long int populacao;  // Alterado para unsigned long int
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;        // Calculado: população/área
    float pib_per_capita;   // Calculado: PIB/população
    float super_poder;      // Novo: soma de todos os atributos com densidade invertida
};

// Função para ler os dados de uma carta
void lerCarta(struct Carta *carta, int numero_carta) {
    printf("\nDigite os dados da Carta %d:\n", numero_carta);
    printf("Estado: ");
    scanf("%s", carta->estado);
    printf("População: ");
    scanf("%lu", &carta->populacao);
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (em milhões): ");
    scanf("%f", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para calcular os atributos derivados
void calcularAtributos(struct Carta *carta) {
    // Calcula densidade populacional (hab/km²)
    carta->densidade = carta->populacao / carta->area;
    
    // Calcula PIB per capita (PIB/população)
    carta->pib_per_capita = (carta->pib * 1000000) / carta->populacao; // Convertendo PIB para unidade monetária
    
    // Calcula o Super Poder (soma de todos os atributos com densidade invertida)
    carta->super_poder = carta->populacao + carta->area + carta->pib + 
                         carta->pontos_turisticos + carta->pib_per_capita + 
                         (1 / carta->densidade);
}

// Função para comparar dois atributos e determinar o vencedor
int compararAtributos(float atributo1, float atributo2, int menor_vence) {
    if (menor_vence) {
        return atributo1 < atributo2 ? 1 : 0;
    } else {
        return atributo1 > atributo2 ? 1 : 0;
    }
}

// Função para exibir os resultados da comparação
void exibirComparacao(struct Carta carta1, struct Carta carta2) {
    printf("\nComparação de Cartas:\n");
    
    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n", 
           compararAtributos(carta1.populacao, carta2.populacao, 0) ? 1 : 2,
           compararAtributos(carta1.populacao, carta2.populacao, 0));
    
    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", 
           compararAtributos(carta1.area, carta2.area, 0) ? 1 : 2,
           compararAtributos(carta1.area, carta2.area, 0));
    
    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", 
           compararAtributos(carta1.pib, carta2.pib, 0) ? 1 : 2,
           compararAtributos(carta1.pib, carta2.pib, 0));
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           compararAtributos(carta1.pontos_turisticos, carta2.pontos_turisticos, 0) ? 1 : 2,
           compararAtributos(carta1.pontos_turisticos, carta2.pontos_turisticos, 0));
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           compararAtributos(carta1.densidade, carta2.densidade, 1) ? 1 : 2,
           compararAtributos(carta1.densidade, carta2.densidade, 1));
    
    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           compararAtributos(carta1.pib_per_capita, carta2.pib_per_capita, 0) ? 1 : 2,
           compararAtributos(carta1.pib_per_capita, carta2.pib_per_capita, 0));
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", 
           compararAtributos(carta1.super_poder, carta2.super_poder, 0) ? 1 : 2,
           compararAtributos(carta1.super_poder, carta2.super_poder, 0));
}

int main() {
    struct Carta carta1, carta2;
    
    // Ler os dados das duas cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);
    
    // Calcular atributos derivados para ambas as cartas
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);
    
    // Exibir os resultados da comparação
    exibirComparacao(carta1, carta2);
    
    return 0;
}