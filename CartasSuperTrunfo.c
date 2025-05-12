#include <stdio.h>

    int populacao1, ptTuristico1, populacao2, ptTuristico2;
    float area1, pib1, area2, pib2;
    char cidade1[50], cidade2[50];

int main() {

    //CADASTRO DA PRIMEIRA CARTA

    printf("Cadastre sua Primeira carta! \n\n");

    //CIDADE CARTA 1

    printf("A primeira carta terá o nome de qual cidade: ");
    scanf("%[^\n]", cidade1);
    printf("Nome %s para carta 1 registrado.\n\n", cidade1);

    //POPULÇÃO CARTA 1

    printf("Agora informa de quanto é a POPULAÇÃO dessa cidade: ");
    scanf("%d", &populacao1);
    printf("População de %d pessoas registrada para %s.\n\n", populacao1, cidade1);

    //ÁREA CARTA 1

    printf("Informe de quanto é a ÁREA em M² (metros quadrados) dessa cidade: ");
    scanf("%f", &area1);
    printf("Área de %.2f m² registrada para %s. \n\n", area1, cidade1);

    //PIB CARTA 1

    printf("Qual o PIB da cidade %s: ", cidade1);
    scanf("%f", &pib1);
    printf("PIB de %.2f registrado a cidade de %s. \n\n", pib1, cidade1);

    //PONTOS TURÍSTICOS CARTA 1

    printf("Por último informe quantos PONTOS TURÍSTICOS possue a cidade %s: ", cidade1);
    scanf("%d", &ptTuristico1);
    printf("%d pontos Turísticos reistrados na cidade de %s. \n\n", ptTuristico1, cidade1);

    //FINALIZAÇÃO CARTA 1

    printf("Com isso concluimos nossa primeira carta. \n Vamos fazer nossa segunda e última carta agora. \n\n");

    /* AQUI AGORA JÁ COMEÇA O CADASTRO DA SEGUNDA CARTA

    CIDADE CARTA 2 */

    printf("A primeira carta terá o nome de qual cidade: ");
    scanf("%[^\n]", cidade2);
    printf("Nome %s para carta 1 registrado.\n\n", cidade2);

    //POPULÇÃO CARTA 2

    printf("Agora informa de quanto é a POPULAÇÃO dessa cidade: ");
    scanf("%d", &populacao2);
    printf("População de %d pessoas registrada para %s.\n\n", populacao2, cidade2);

    //ÁREA CARTA 2

    printf("Informe de quanto é a ÁREA em M² (metros quadrados) dessa cidade: ");
    scanf("%f", &area2);
    printf("Área de %.2f m² registrada para %s. \n\n", area2, cidade2);

    //PIB CARTA 2

    printf("Qual o PIB da cidade %s: ", cidade2);
    scanf("%f", &pib2);
    printf("PIB de %.2f registrado a cidade de %s. \n\n", pib2, cidade2);

    //PONTOS TURÍSTICOS CARTA 2

    printf("Por último informe quantos PONTOS TURÍSTICOS possue a cidade %s: ", cidade2);
    scanf("%d", &ptTuristico2);
    printf("%d pontos Turísticos reistrados na cidade de %s. \n\n", ptTuristico2, cidade2);


    return 0;
}
