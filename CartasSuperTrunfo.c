#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
char carta[20] = "Carta";
char estado;
char codigo[20];
char cidade[20];
int populacao;
float area;
float PIB;
int numero_de_pontos_turisticos;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
printf("Escolha uma letra de um Estado: \n");
scanf("%c", &estado);

printf("Escolha um Codigo: \n");
scanf("%s", &codigo);

printf("Escolha uma Cidade: \n");
scanf("%s", &cidade);

printf("Qual o valor da Populacao: \n");
scanf("%i", &populacao);

printf("Qual o Valor da Area: \n");
scanf("%f", &area);

printf("Qual e o PIB da Cidade: \n");
scanf("%f", &PIB);

printf("Qual o Numero de Pontos Turisticos: \n");
scanf("%d", &numero_de_pontos_turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos);
    return 0;
}
