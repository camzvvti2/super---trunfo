#include <stdio.h>
#include <stdlib.h>



int main() {
   
    
    int carta1 = estado1, populacao1, area1, pib1, turistico1, densidade1;

    char estado1[20];
    char codigo1[15];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidade1;
    float pibcapita1;
    float superpoder1;


    printf("digite o nome do estado1: \n");
    scanf("%s", estado1);

    printf("digite o codigo1 da carta: \n");
   scanf("%s", &codigo1);
   
    printf("digite o nome da cidade1: \n");
    scanf("%s", &cidade1);

    printf("digite a populacao1: \n");
    scanf("%d", &populacao1);

    printf("digite a area1: \n");
    scanf("%f", &area1);

    printf("digite o pib1: \n");
    scanf("%f", &pib1);

    printf("digite pontos turistico1: \n");
    scanf("%d", &turistico1);
     
    printf("nome do estado1: %s\n", estado1);
    printf("codigo1: %s\n", codigo1);
    printf("cidade1: %s\n", cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1: %f\n", area1);
    printf("pib1: %f\n", pib1);
    printf("ponto turistico1: %d\n",turistico1);

    densidade1 = (float) populacao1 / area1;
    pibcapita1 = (float) populacao1 / pib1;

    printf("A densidade populacional1 é: %.2f\n", densidade1);
    printf("O pib per capita1 é: %.2f\n", pibcapita1);

    superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibcapita1 + densidade1;

    printf("superpoder1: %.2f\n", superpoder1);


    int carta2 = estado2, populacao2, area2, pib2, turistiro2, densidade2;

    char estado2[15];
    char codigo2[8];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float pibcapita2;
    float superpoder2;

    printf("digite o nome do estado2: \n");
    scanf("%s", &estado2);

    printf("digite o codigo2: \n");
    scanf("%s", &codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("digite populacao2: \n");
    scanf("%d",&populacao2);

    printf("digite a area2: \n");
    scanf("%f", &area2);

    printf("digite o pib2: \n");
    scanf("%f", &pib2);

    printf("digite ponto turistico2: \n");
    scanf("%d", &turistico2);

    printf("estado2: %s\n", estado2);
    printf("codigo2: %s\n", codigo2);
    printf("cidade2: %s\n", cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %f\n", area2);
    printf("pib2: %f\n", pib2);
    printf("turistico2: %d\n", turistico2);

    densidade2 = (float) populacao2 / area2;
    pibcapita2 = (float) populacao2 / pib2;

    printf("A densidade populacional2 é: %.2f\n", densidade2);
    printf("O pib per capita2 é: %.2f\n", pibcapita2);

    superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibcapita2 + densidade2;

    printf("superpoder2: %.2f\n", superpoder2);


    printf("***super trunfo***\n");
    printf("escolha uma opcao: \n");
    printf("1. estado.\n");
    printf("2. populacao.\n");
    printf("3. area.\n");
    printf("4. pib.\n");
    printf("5. turisticos.\n");
    printf("6. densidade.\n");
    printf("escolha: \n");
    scanf("%d", &carta1, &carta2);
    

    switch (carta1)
    {
    case 1:
       printf("estado:  -");
        break;
    case 2:
       printf("populacao: -");
        break;
    case 3:
        printf("area:  -");
         break;
    case 4:
       printf("pib:  -");
        break;
    case 5:
       printf("turistico: -");
        break;
    case 6:
        printf("densidade: -");
         break;    
    
    }


    if(carta1 == carta2)
    {
        printf("empate\n");
    } else if(estado1 > estado2)
    {  
        printf("carta 1 venceu");
    } else if(populacao1 > populacao2)
    {
        printf("carta 1 venceu");
    } else if (area1 > area2)
    {
        printf("carta 1 venceu");
    } else if (pib1 > pib2)
    {
        printf("carta 1 venceu");
    } else if(turistico1 > turistico2)
    {
        printf("carta 1 venceu");
    } else if(densidade1 < densidade2)
    {
        printf("carta 1 venceu");
    } else
    {
       printf("carta 2 venceu");
    }
    
    
            

   

    
}
