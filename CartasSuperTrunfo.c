#include <stdio.h>
#include <stdbool.h>
int main() {
    
    // declaração de variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populaçao1, populaçao2;
    int turistico1, turistico2;
    float area1, area2, pib1, pib2, densidadeP1,densidadeP2;
    float pibPer1, pibPer2, superP1, superP2, inverso_densidade1,inverso_densidade2;
    //variáveis de batalha x1
    bool x1populaçao,x1area,x1pib,x1turismo,X1inverso,X1superP;

    // cadastro entrada de dados carta 1
    printf("*******cadastro de cartas*******\n");
    printf("favor insira os dados da primeira carta\n");
    printf("qual o estado da carta  A á H : \n ");
    scanf("%c",&estado1);
    printf("Por favor inserir o codigo para carta de 01 a 04: _%c\n ",estado1);
    scanf("%s",&codigo1);
    printf("por favor, qual a cidade para: %c%s\n ",estado1,codigo1);
    scanf("%s",&cidade1);
    printf("insira a população de %s\n ",cidade1);
    scanf("%lu",&populaçao1);
    printf("qual a area de: %s\n",cidade1);
    scanf("%f",&area1);
    printf("favor digitar o pib de %s\n",cidade1);
    scanf("%f",&pib1);
    printf("favor informe o numero de pontos turisticos de %s\n ",cidade1);
    scanf("%d",&turistico1 );
    printf("\n");
    printf("carta 1 cadastrada com sucesso\n");
    printf("\n");
    
    // cadastro entrada de dados carta 2
    printf("favor insira os dados da segunda carta\n");
    printf("qual o estado da carta 2  A á H : " );
    scanf(" %c",&estado2);
    printf("Favor inserir o codigo para carta de 01 a 04: _%c\n ",estado2);
    scanf(" %s",&codigo2);
    printf("Favor, qual a cidade para: %c%s\n ",estado2,codigo2);
    scanf(" %s",&cidade2);
    printf("insira a população de %s\n ",cidade2);
    scanf(" %lu",&populaçao2);
    printf("qual a area de: %s\n",cidade2);
    scanf(" %f",&area2);
    printf("Favor digitar o pib de %s\n",cidade2);
    scanf(" %f",&pib2);
    printf("Favor iNforme o numero de pontos turisticos de %s\n",cidade2);
    scanf(" %d",&turistico2);
    printf("\n");
    printf("carta 2 cadastrada com sucesso\n");
    printf("\n");

    // calculos 
    pibPer1            = (float) pib1 / populaçao1;
    pibPer2            = (float) pib2 / populaçao2;
    densidadeP1        = (float)populaçao1 / area1;
    densidadeP2        = (float)populaçao2 / area2;
    superP1            = (float)populaçao1+area1+pib1+ (float)turistico1+pibPer1;
    superP2            = (float)populaçao2+area2+pib2+ (float)turistico2+pibPer2;
    inverso_densidade1 = 1.0 / densidadeP1;
    inverso_densidade2 = 1.0 / densidadeP2;
    superP1            = superP1 - inverso_densidade1;
    superP2            = superP2 - inverso_densidade2;

    //impressão da carta 1 na tela
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    printf("*****Carta cadastrada com sucesso!*****\n");
    printf("Carta:  1 \n");
    printf("estado: %c\n",estado1);
    printf("codigo: %c%s\n",estado1,codigo1);
    printf("Cidade: %s\n",cidade1);
    printf("População: %lu\n",populaçao1);
    printf("area: %f km2\n",area1);
    printf("Pib: R$ %f  bilhões\n",pib1);
    printf("turistico: %d\n",turistico1);
    printf("Densidade Populacional: %f hab/km2\n",densidadeP1);
    printf("Pib per Capita: %f reais\n",pibPer1);
    printf("inverso da densidade populacional: %f\n",inverso_densidade1);
    printf("super poder %f\n",superP1); 
    
    //impressão da carta 2 na tela
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    printf("*****Carta cadastrada com sucesso!*****\n");
    printf("Carta:  2 \n");
    printf("estado: %c\n",estado2);
    printf("codigo: %c%s\n",estado2,codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("População: %lu\n",populaçao2);
    printf("area: %f  km2\n",area2);
    printf("Pib: R$%f  bilhões de reais\n",pib2);
    printf("turistico: %d\n",turistico2);
    printf("Densidade Populacional: %.02f hab/km2\n",densidadeP2);
    printf("Pib per Capita: %f reais\n",pibPer2);
    printf("inverso densidade populacional: %f\n",inverso_densidade2);
    printf("super poder %f\n",superP2);
    
    // comparando as cartas, batalha estilo X1
    x1populaçao = populaçao1 > populaçao2;
    x1area      = area1 > area2;
    x1pib       = pib1 > pib2;
    x1turismo   = turistico1 > turistico2;
    X1inverso   = inverso_densidade1 < inverso_densidade2;
    X1superP    = superP1 > superP2;
    
    // resultado da batalha, x1 entre os atributos
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    printf("valor 1 vence carta 1\n");
    printf("valor 0 vence carta 2\n");
    printf("X1 populacão: %d\n",x1populaçao);
    printf("X1 área     : %d\n",x1area);
    printf("X1 pib      : %d\n",x1pib);
    printf("X1 turismo  : %d\n",x1turismo);
    printf("x1 inversoDP: %d\n",X1inverso);
    printf("x1 S poder  : %d",X1superP);

    return 0;
}
