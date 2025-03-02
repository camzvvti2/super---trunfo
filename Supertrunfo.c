#include <stdio.h>

//Jogo de cartas Super Trunfo - Parte 1
// Objetivo: Cadastro das Cartas

//Abaixo, vamos inserir a variavei que iremos trabalhar...
int main() {
    char Estado;
    char Cod_carta [5];
    char Nome_da_cidade [30];
    int Populacao, Tot_Pontos_Turisticos;
    float Area_em_km2;
    float PIB;

    //Estrutura para o usúario interagir e criar as cartas...
    //Cadastrando 2 cidades:

    //Cidade/Carta 1...
    printf ("Dados da Carta 1.. \n");

    printf("Digite o Nome do Estado: \n");
    scanf("%s", & Estado);

    //O código da carta será uma letra como A, seguida de 0 e demonstrando a carta que voce esta cadastrando 1, 2 3...
    printf("Digite o Código da Carta: \n");
    scanf("%s", & Cod_carta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", & Nome_da_cidade);

    printf("Digite o total da População: \n");
    scanf("%d", & Populacao);

    printf("Digite a area de Extensão da Cidade: \n");
    scanf("%f,", & Area_em_km2);

    printf("PIB: \n");
    scanf("%f", & PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", & Tot_Pontos_Turisticos);

    //Exibição dos dados inserido pelo usuario:

    printf("Nome do Estado: %s \n", Estado);
    printf("Código da Carta: %s \n", Cod_carta);
    printf("Nome da Cidade: %s \n", Nome_da_cidade);
    printf("Populacao: %d \n", Populacao);
    printf("Extensão Territorial: %f \n", Area_em_km2);
    printf("PIB: %f \n", PIB);
    printf("Total de Pontos Turísticos: %d \n", Tot_Pontos_Turisticos);

    return 0;
}
