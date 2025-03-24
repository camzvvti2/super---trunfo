#include <stdio.h>

int main() {
    //Declarando as variaveis e seus nomes char,int,float
    
    char estado;
    char codigo[4];  // 3 caracteres + '\0' para segurança
    char nome[20];   // Nome aumentado para permitir nomes compostos
    int populacao, N_P_turistico;
    float area, Pib;

    // Cadastro das duas cartas, carta 1 e carta 2
    //imprimindo a solicitação de  informações de talhadas.

    for (int i = 1; i <= 2; i++) {
        printf("\n=== Cadastro da Carta %d ===\n", i);

        printf("Primeira letra do estado: ");
        scanf(" %c", &estado);  // Espaço antes de %c evita erro de buffer

        printf("Código da Carta (3 caracteres): ");
        scanf("%3s", codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome);  // Permite nomes compostos

        printf("Quantidade da população: ");
        scanf("%d", &populacao);

        printf("Quantidade de pontos turísticos: ");
        scanf("%d", &N_P_turistico);

        printf("Área total da cidade (km²): ");
        scanf("%f", &area);

        printf("PIB da cidade (em milhões): ");
        scanf("%f", &Pib);

        // Exibição dos dados cadastrados das cartas 1 e 2 respectivamente
        printf("\n=== Dados da Carta %d ===\n", i);
        printf("Estado: %c | Código: %s | Nome: %s\n", estado, codigo, nome);
        printf("População: %d | Pontos turísticos: %d\n", populacao, N_P_turistico);
        printf("Área: %.2f km² | PIB: %.2f milhões de reais\n", area, Pib);
    }

    return 0;
}
