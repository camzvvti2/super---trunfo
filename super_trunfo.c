#include <stdio.h>

int main () {

    // Carta 1
    char letra = "A";
    char codigo [50] = "A01";
    char nome_da_cidade[50] = "Taubate";
    int populacao = 321.299;
    float area = 625.004;
    float PIB = 50563.09;
    int turistico = 10;

    // Carta 2
    char letraB = "B";
    char codigoB [50] = "B02";
    char nome_da_cidadeB = "Ubatuba";
    int populacaoB = 92.819;
    float areaB = 708.105;
    float pibB = 10404.04;
    int turisticoB = 25;

    // Carta 1 
    printf ("Letra: %C \n" , letra);
    printf ("Codigo do Estado: %s \n" , codigo);
    printf ("Nome da Cidade: %s \n" , nome_da_cidade);
    printf ("População: %d \n" , populacao);
    printf ("Área: %d \n" , area);
    printf ("PIB: %d \n" , PIB);
    printf ("Pontos Turisticos: %d \n" , turistico);

    printf ("\n");

    // Carta 2 
    printf ("Letra: %S \n" , letraB);
    printf ("Codigo do Estado: %d" , codigoB);
    printf ("Nome da Cidade: %s \n", nome_da_cidadeB);
    printf ("População: %D \n", populacaoB);
    printf ("Área: %D \n" , areaB);
    printf ("PIB: %D \N", pibB);
    printf ("Pontos Turisticos: %d \n" , turisticoB);

    return 0;


}
    