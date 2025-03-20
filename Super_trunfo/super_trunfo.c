#include <stdio.h>

int main(){

    printf("CARTA 01\n");

    //Acima criado printf para identicar primeira carta do Super_Trunfo;

    char CodigoCarta[3] = 'A1';
    char Estado[06] = "BAHIA";
    char cidade[10] = "SALVADOR";
    int populacao = 2568928;
    float areakm2 = 693.8;
    int NumeroPontosTuristicos = 20;

    //Acima declarei variveis com os nomes adequados;

    printf("O Codigo da Carta é: %s\n", 'A1');
    printf("O Estado é a: %s\n", "Bahia");
    printf("A Cidade se Chama: %s\n", "Salvador");
    printf("A População de Salvador é: %d\n", 2568928);
    printf("A cidade tem uma Área em KM² de: %f\n", 693.8);
    printf("O número de pontos turisticos são: %i\n", 20);
  
    //Acima Criei printscan para mostrar dados inseridos \n;

    printf("Digite o codigo da carta: ");
    scanf("%s", '&A1');

    printf("Digite o Estado e a cidade: \n");
    scanf("%s", "&Bahia", "&Salvador");

    printf("Digite a população da cidade: \n");
    scanf("%d", 25689298);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f\n", 693.8);

    printf("Digite o número de pontos turisticos da Cidade: \n");
    scanf("%i", 20);


}