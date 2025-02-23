#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // declaração de variáveis
    //const carta1 = 1;
    //const carta2 = 2;
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populaçao1, populaçao2;
    int turistico1, turistico2;
    float area1, area2, pib1, pib2, densidadeP1,densidadeP2;
    float pibPer1, pibPer2, superP1, superP2;

    // cadastro entrada de dados carta 1
    printf("*******cadastro de cartas*******\n");
    printf("favor insira os dados da primeira carta\n");
    printf("qual o estado da carta_1  A á H : \n ");
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
    printf("por favor iforme o numero de pontos turisticos de %s\n",cidade1);
    scanf("%d",&turistico1);
    printf("\n");
    printf("carta 1 cadastrada com sucesso\n");
    printf("\n");

    // cadastro entrada de dados carta 2
   
    printf("favor insira os dados da segunda carta\n");
    printf("qual o estado da carta_2  A á H : " );
    scanf(" %c",&estado2);
    printf("Por favor inserir o codigo para carta de 01 a 04: _%c\n ",estado2);
    scanf("%s",&codigo2);
    printf("por favor, qual a cidade para: %c%s\n ",estado2,codigo2);
    scanf("%s",&cidade2);
    printf("insira a população de %s\n ",cidade2);
    scanf("%lu",&populaçao2);
    printf("qual a area de: %s\n",cidade2);
    scanf("%f",&area2);
    printf("favor digitar o pib de %s\n",cidade2);
    scanf("%f",&pib2);
    printf("por favor iforme o numero de pontos turisticos de %s\n",cidade2);
    scanf("%d",&turistico2);

    // calculos 
    densidadeP1 = (float) populaçao1 / area1;
    densidadeP2 = (float) populaçao2 / area2;
    pibPer1 = (float) pib1 / populaçao1;
    pibPer2 = (float) pib2 / populaçao2;
    superP1 = (float) populaçao1+area1+pib1+ (float)turistico1+pibPer1;
    superP2 = (float) populaçao2+area2+pib2+(float)turistico2+pibPer2;


    //impressão da carta 1 na tela
    printf("*******Carta cadastrada com sucesso!*******\n");
    printf("Carta:  1 \n");
    printf("estado: %c\n",estado1);
    printf("codigo: %c%s\n",estado1,codigo1);
    printf("Cidade: %s\n",cidade1);
    printf("População: %d\n",populaçao1);
    printf("area: %f km2\n",area1);
    printf("Pib: R$%f  bilhões de reais\n",pib1);
    printf("turistico: %d\n",turistico1);
    printf("Densidade Populacional: %.02f hab/km2\n",densidadeP1);
    printf("Pib per Capita: %.02f reais\n",pibPer1);
    printf("super poder %f",superP1); 
    printf("   \n");

    //impressão da carta 2 na tela
    printf("*******Carta cadastrada com sucesso!*******\n");
    printf("Carta:  2 \n");
    printf("estado: %c\n",estado2);
    printf("codigo: %c%s\n",estado2,codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("População: %d\n",populaçao2);
    printf("area: %f  km2\n",area2);
    printf("Pib: R$%f  bilhões de reais\n",pib2);
    printf("turistico: %d\n",turistico2);
    printf("Densidade Populacional: %.02f hab/km2\n",densidadeP2);
    printf("Pib per Capita: %.02f reais\n",pibPer2);
    printf("super poder %f",superP2);
    return 0;
}
