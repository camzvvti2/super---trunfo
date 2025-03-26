#include <stdio.h>

int main() {
    printf("Cadastro da Cartas 01\n");
    // Acima printf para definir qual carta está sendo cadastrada
    // Abaixo definição de variáveis para cada atributo da carta
    char Estado[1] = "A";
    char CodigodaCarta[03] = "A01";
    char Cidade[20] = "Salvador";
    int Populacao = 2418000;
    float Area = 693.8;
    float PIB = 21.8;
    int PontosTuristicos = 20;

    // Abaixo solicitação de entrada de dados para cada atributo da carta
    printf("Digite o Estado: ");
    scanf("%s", Estado);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CodigodaCarta);
    printf("Digite o Nome: ");
    scanf("%s", Cidade);
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);
    printf("Digite a Area: ");
    scanf("%f", &Area);
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("Digite o Numero de Pontos Turisticos:  \n");
    scanf("%d", &PontosTuristicos);



}