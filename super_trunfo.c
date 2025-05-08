#include <stdio.h>
#include <string.h>
int main(){
    char estado1[3];
    char codigoDaCarta1[3];
    char nomeDaCidade1[50] ;
    int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int numeroDePontosTuristicos1 = 0;
    
    
    char estado2 [3];
    char codigoDaCarta2 [3];
    char nomeDaCidade2 [50];
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int numeroDePontosTuristicos2 = 0;
    
    
    printf("Escolha o Estado da primeira carta:\n(Deve ser uma letra de A a H)\n");
    scanf("%s", estado1);
    printf("Digite o código da carta:\n(Deve ser um número de 01 a 04)\n");
    scanf("%s", codigoDaCarta1);
    setbuf(stdin, 0);
    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade1, 50, stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")]='\0';
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacao1);
    printf("Digite o valor da área da cidade:\n");
    scanf("%f", &area1);
    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &numeroDePontosTuristicos1);
    
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    
    printf("Escolha o Estado da segunda carta:\n(Deve ser uma letra de A a H)\n");
    scanf("%s", estado2);
    printf("Digite o código da carta:\n(Deve ser um número de 01 a 04\n");
    scanf("%s", codigoDaCarta2);
    setbuf(stdin, 0);
    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade2, 50, stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")]= '\0';   
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacao2);
    printf("Digite o valor da área da cidade:\n");
    scanf("%f", &area2);
    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &numeroDePontosTuristicos2);
    
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1,codigoDaCarta1);
    printf("Nome da Cidade:%s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Àrea:%0.2f km²\n", area1);
    printf("PIB:%0.2freais\n",pib1);
    printf("Número de Pontos Turísticos:%d\n", numeroDePontosTuristicos1);
    printf("Densidade populacional:%0.2fhab/km²\n", densidadePopulacional1);
    printf("Pib per capita:%0.2f reais\n",  pibPerCapita1);
    
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2,codigoDaCarta2);
    printf("Nome da Cidade:%s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea:%0.2f km²\n", area2);
    printf("PIB:%0.2freais\n",pib2);
    printf("Número de Pontos Turísticos:%d\n", numeroDePontosTuristicos2);
    printf("Densidade populacional:%0.2fhab/km²\n", densidadePopulacional2);
    printf("Pib per capita:%0.2f reais\n",  pibPerCapita2);


    return 0;

};