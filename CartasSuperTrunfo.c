#include <stdio.h>

    int populacao, ptTuristico;
    float area, pib;
    char cidade[50];

int main() {

    printf("Cadastre sua Primeira carta! \n\n");

    printf("A primeira carta terá o nome de qual cidade: ");
    scanf("%[^\n]", cidade);
    printf("Nome %s para carta 1 - registrado.\n\n", cidade);

    printf("Agora informa de quanto é a POPULAÇÃO dessa cidade: ");
    scanf("%d", &populacao);
    printf("População de %.2d registrada para %s.\n\n", populacao, cidade);

    printf("Informe de quanto é a ÁREA em M² (metros quadrados) dessa cidade: ");
    scanf("%f", &area);
    printf("Área de %.2f m² registrada para %s. \n\n", area, cidade);


    return 0;
}
