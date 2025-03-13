#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado01 = 'A', estado02 = 'B';
    char codigo01[] = "A01", codigo02[] = "B02";
    char nomecidade01[] = "São Paulo", nomecidade02[] = "Rio de Janeiro";
    unsigned long int populacao01 = 12330000, populacao02 = 6775561;
    float area01 = 1521.11, area02 = 1200.27;
    float pib01 = 700000000000.0, pib02 = 400000000000.0;
    int pturisticos01 = 50, pturisticos02 = 35;
    float densidade01, densidade02;
    float pib_percapita01, pib_percapita02;
    float superpoder01, superpoder02, inverso_densidade01, inverso_densidade02;

    
    

    // Calculo da Densidade populacional e do PIB per Capita
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;

    pib_percapita01 = pib01 / populacao01;
    pib_percapita02 = pib02 / populacao02;
    
    /*Cálculo do inverso da densidade populacional:
      Divisão de 1 pelo valor da densidade,
      identificando o maior valor como o com menor densidade populacional*/
    inverso_densidade01 = 1 / (densidade01 + 0.0001);
    inverso_densidade02 = 1 / (densidade02 + 0.0001);

    //Soma dos atributos para obter o super poder (população, área, PIB,pontos turísticos, PIB per capita e o inverso da densidade populacional)
    superpoder01 = populacao01 + area01 + pib01 + pturisticos01 + pib_percapita01 + inverso_densidade01;
    superpoder02 = populacao02 + area02 + pib02 + pturisticos02 + pib_percapita02 + inverso_densidade02;

    printf("\n");
    
    int escolha1, escolha2;

    printf("====HORA DE COMPARAR AS CARTAS====\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Número de Pontos Turísticos\n");
    printf("[5] PIB per Capita\n")
    printf("[6] Densidade demográfica\n");
    printf("Escolha  atributa para comparar: \n");
    scanf("%d", &escolha1);

    switch (escolha1){
      case 1:
        printf("Primeiro Atributo Selecionado!!\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Número de Pontos Turísticos\n");
        printf("[5] PIB per Capita\n")
        printf("[6] Densidade demográfica\n");
        printf("Escolha  atributa para comparar: \n");
        scanf("%d", &escolha2);

    }


    
    
    
    return 0;
}
