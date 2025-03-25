#include <stdio.h>

int main() {


     //Declaração das variaveis da primeira carta

    int pontosturisticos, populacao;
    float area, pib, densidadepopulacional, PIBpercapita;
    char nomedacidade[50], codigodacidade[50], estado[50];
    float SuperPoder1;

    printf("Digite o Código da cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Digite o estado da cidade: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km² da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos há na cidade: \n");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = (populacao / area);
    PIBpercapita = (pib / populacao);

    printf("Código da cidade: %s \n", codigodacidade);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População da cidade: %.d \n", populacao);
    printf("Área da cidade: %.2fkm2 \n", area);
    printf("PIB da cidade: R$ %.4f \n", pib);
    printf("Pontos turísticos da cidade: %d \n", pontosturisticos);
    printf("A densidade populacional é: %fhab/km² \n", densidadepopulacional);
    printf("O PIB per capita é: %freais \n", PIBpercapita);

    printf(" O valor do super trunfo da carta A (%f) é maior que o valor total da carta de superpoder B (%f)? %d\n",
    SuperPoder1 = codigodacidade + nomedacidade + populacao + area + pib + pontosturisticos + densidadepopulacional + PIBpercapita;
                        
    

    //Declaração das variaveis da segunda carta
    
    int pontosturisticos2, populacao2;
    float area2, pib2, densidadepopulacional2, PIBpercapita2;
    char nomedacidade2[50], codigodacidade2[50], estado2[50];
    float SuperPoder2
    
    printf("Carta 2: \n");
    
    printf("Digite o Código da cidade: \n");
    scanf("%s", &codigodacidade2);

    printf("Digite o estado da cidade: \n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos há na cidade: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (populacao2 / area2);
    PIBpercapita2 = (pib2 / populacao2);

    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + PIBpercapita2 + densidadepopulacional2;

    printf("Código da cidade: %s \n", codigodacidade2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População da cidade: %.d \n", populacao2);
    printf("Área da cidade: %.2fkm2 \n", area2);
    printf("PIB da cidade: R$ %.4f \n", pib2);
    printf("Pontos turísticos da cidade: %d \n", pontosturisticos2);
    printf("A densidade populacional é: %fhab/km² \n", densidadepopulacional2);
    printf("O PIB per capita é: %freais \n", PIBpercapita2);


    printf("Digite o primeiro valor que gostaria de comparar"\n);



    return 0;

}