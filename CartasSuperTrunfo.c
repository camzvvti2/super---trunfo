#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolha1, escolha2;
    int atributosDisponiveis[5] = {1, 2, 3, 4, 5}; // Controle das opções

    // Definição das variáveis das cartas
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada dos dados
    printf("Digite os dados da Carta 1:\n");
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo das métricas
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    
    // Escolha de atributos
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    scanf("%d", &escolha1);
    
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        scanf("%d", &escolha2);
    } while (escolha1 == escolha2);
    
    // Função para comparar atributos
    float valor1, valor2, soma1 = 0, soma2 = 0;
    for (int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? escolha1 : escolha2;
        printf("\nComparando %s:\n", (atributo == 1) ? "Populacao" :
                                          (atributo == 2) ? "Area" :
                                          (atributo == 3) ? "PIB" :
                                          (atributo == 4) ? "Pontos Turisticos" : "Densidade Demografica");
        
        switch (atributo) {
            case 1:
                valor1 = populacao1;
                valor2 = populacao2;
                break;
            case 2:
                valor1 = area1;
                valor2 = area2;
                break;
            case 3:
                valor1 = pib1;
                valor2 = pib2;
                break;
            case 4:
                valor1 = pontosTuristicos1;
                valor2 = pontosTuristicos2;
                break;
            case 5:
                valor1 = 1 / densidadePopulacional1;
                valor2 = 1 / densidadePopulacional2;
                break;
        }
        soma1 += valor1;
        soma2 += valor2;
        printf("%s: %.2f | %s: %.2f\n", cidade1, valor1, cidade2, valor2);
    }

    // Resultado final
    printf("\nSoma dos Atributos:\n%s: %.2f | %s: %.2f\n", cidade1, soma1, cidade2, soma2);
    printf("%s Ganhou!\n", (soma1 > soma2) ? cidade1 : (soma1 < soma2) ? cidade2 : "Empate");
    
    return 0;
}