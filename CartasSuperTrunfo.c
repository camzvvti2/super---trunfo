#include <stdio.h>

int main() {
    // Declarando variáveis a serem utilizadas
    char estado[2];            // Para armazenar a letra do estado
    char codigo[4];            // Para armazenar o código da carta
    char nome[20];             // Para armazenar o nome da cidade
    unsigned long int populacao; // Para armazenar a população (unsigned long int)
    int N_P_turistico;         // Para armazenar o número de pontos turísticos
    float area, Pib;           // Para armazenar a área e o PIB
    float densidade, pib_per_capita; // Para armazenar a densidade populacional e o PIB per capita
    float super_poder[2];      // Para armazenar o "Super Poder" de cada carta

    // Função para calcular o Super Poder
    float calcular_super_poder(unsigned long int populacao, float area, float Pib, int N_P_turistico, float densidade, float pib_per_capita) {
        return (float)(populacao + area + Pib + N_P_turistico + (1 / densidade) + pib_per_capita);
    }

    // Cadastro da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado[0]); // Leitura da letra do estado da Carta 1

    printf("Código da Carta (3 caracteres): ");
    scanf("%3s", codigo); // Leitura do código da carta

    // Limpeza do buffer antes de ler o nome
    getchar(); // Limpa o \n deixado após a leitura anterior

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome); // Leitura do nome da cidade

    printf("População: ");
    scanf("%lu", &populacao);  // Leitura da população (unsigned long int)

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico); // Leitura do número de pontos turísticos

    printf("Área total (km²): ");
    scanf("%f", &area); // Leitura da área

    printf("PIB (em milhões): ");
    scanf("%f", &Pib); // Leitura do PIB

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade = (float)populacao / area;
    pib_per_capita = Pib / (float)populacao;

    // Cálculo do Super Poder
    super_poder[0] = calcular_super_poder(populacao, area, Pib, N_P_turistico, densidade, pib_per_capita);

    // Exibição dos dados da Carta 1
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Pontos turísticos: %d\n", N_P_turistico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", Pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f milhões\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder[0]);

    // Limpeza do buffer antes de começar a Carta 2
    getchar(); // Limpa o \n deixado após a leitura da Carta 1

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado[1]); // Leitura da letra do estado da Carta 2

    printf("Código da Carta (3 caracteres): ");
    scanf("%3s", codigo); // Leitura do código da carta

    // Limpeza do buffer antes de ler o nome
    getchar(); // Limpa o \n deixado após a leitura anterior

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome); // Leitura do nome da cidade da Carta 2

    printf("População: ");
    scanf("%lu", &populacao);  // Leitura da população (unsigned long int)

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico); // Leitura do número de pontos turísticos

    printf("Área total (km²): ");
    scanf("%f", &area); // Leitura da área

    printf("PIB (em milhões): ");
    scanf("%f", &Pib); // Leitura do PIB

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade = (float)populacao / area;
    pib_per_capita = Pib / (float)populacao;

    // Cálculo do Super Poder
    super_poder[1] = calcular_super_poder(populacao, area, Pib, N_P_turistico, densidade, pib_per_capita);

    // Exibição dos dados da Carta 2
    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Pontos turísticos: %d\n", N_P_turistico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", Pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f milhões\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder[1]);

    // Comparação dos atributos
    printf("\n=== Comparação de Cartas ===\n");

    // Comparar População
    printf("População: Carta 1 venceu (%d)\n", (populacao > populacao) ? 1 : 0);  // Carta 1 vence se tiver maior população
    // Comparar Área
    printf("Área: Carta 1 venceu (%d)\n", (area > area) ? 1 : 0);  // Carta 1 vence se tiver maior área
    // Comparar PIB
    printf("PIB: Carta 1 venceu (%d)\n", (Pib > Pib) ? 1 : 0);  // Carta 1 vence se tiver maior PIB
    // Comparar Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade < densidade) ? 1 : 0);  // Carta 1 vence se tiver menor densidade
    // Comparar PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita > pib_per_capita) ? 1 : 0);  // Carta 1 vence se tiver maior PIB per Capita
    // Comparar Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder[0] > super_poder[1]) ? 1 : 0);  // Carta 1 vence se tiver maior Super Poder

    return 0;
}
