#include <stdio.h>

int main() {
    // Declarando variáveis a ser utilizadas
    char estado[2];      //botando mais um caractere para evitar erro
    char codigo[4];
    char nome[20];
    int populacao, N_P_turistico;    //botando as variáveis na mesma linha para faciliar
    float area, Pib;

    // Cadastro da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Primeira letra do estado: ");        // impressão padrão em printf
    scanf(" %c", &estado[0]);                    //estamos armazenando o caractere lido na posição 0do array estado.

    printf("Código da Carta (3 caracteres): ");  //informando corretamente o usuário quantos caracteres são permitidos
    scanf("%3s", codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);                     // Corrigido para permitir nomes compostos

    printf("População: ");
    scanf("%d", &populacao);

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico);

    // Pedido da Área total e PIB em linhas separadas
    printf("Área total (km²): ");
    scanf("%f", &area);  // Lê apenas a área

    printf("PIB (em milhões): ");
    scanf("%f", &Pib);  // Lê apenas o PIB

    // Exibição dos dados cadastrados
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", N_P_turistico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", Pib);

    // Limpeza do buffer de entrada antes de começar a carta 2
    getchar(); // Limpa o buffer de entrada (o '\n' remanescente)

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estado[1]);

    printf("Código da Carta (3 caracteres): ");
    scanf("%3s", codigo);

    // Limpar o buffer antes de ler o nome
    getchar(); // Limpa o '\n' que ficou no buffer após a leitura anterior

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);  // Corrigido para permitir nomes compostos

    printf("População: ");
    scanf("%d", &populacao);

    printf("Pontos turísticos: ");
    scanf("%d", &N_P_turistico);

    // Pedido da Área total e PIB em linhas separadas para a segunda carta
    printf("Área total (km²): ");
    scanf("%f", &area);  // Lê apenas a área

    printf("PIB (em milhões): ");
    scanf("%f", &Pib);  // Lê apenas o PIB

    // Exibição dos dados cadastrados
    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", N_P_turistico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", Pib);

    return 0;
}
