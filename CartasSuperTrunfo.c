#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, 
    //número de pontos turísticos.

    int carta_um = 1;
    int carta_dois = 2;
    char nome_do_pais[50];
    int codigo_ddd_da_cidade[50];
    char nome_da_cidade[50];
    float populacao;
    float area_km;
    float pib;
    int pontos_turisticos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("BEM-VINDO AO JOGO DE CARTAS SUPER TRUNFO!\n VAMOS COMEÇAR!\n");
    printf("Prepare-se para inserir as informações das Cartas:\n");
    printf("Cadastre a carta número UM!");
    printf("Carta: %d\n", carta_um);
    printf("Escreva o nome do País: ");
    fgets(nome_do_pais,50,stdin);
    printf("Nome do País: %s" , nome_do_pais);
    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade,50, stdin);
    printf("Nome da Cidade: %s");
    printf("Escreva o código do DDD telefônico da Cidade: ");
    scanf("%d", &codigo_ddd_da_cidade);
    printf("Código DDD da Cidade: %d", codigo_ddd_da_cidade); 
      printf("Insira o número da População: ");
    scanf("%f", &populacao);
    printf("População: %f", populacao);
    printf("Insira a área em Km da Cidade: ");
    scanf("%f", &area_km);
    printf("Área: %f",area_km);
    printf("insira o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %f", pib);
    printf("Insira o Numer de pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("%d", pontos_turisticos);



    printf("---------------------//---------------------");

    printf("Cadastre a carta Número Dois!");
    printf("Carta: %d\n", carta_dois);
    printf("Escreva o nome do País: ");
    fgets(nome_do_pais,50,stdin);
    printf("Nome do País: %s" , nome_do_pais);
    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade,50, stdin);
    printf("Nome da Cidade: %s");
    printf("Escreva o código do DDD telefônico da Cidade: ");
    scanf("%d", &codigo_ddd_da_cidade);
    printf("Código DDD da Cidade: %d", codigo_ddd_da_cidade); 
      printf("Insira o número da População: ");
    scanf("%f", &populacao);
    printf("População: %f", populacao);
    printf("Insira a área em Km da Cidade: ");
    scanf("%f", &area_km);
    printf("Área: %f",area_km);
    printf("insira o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %f", pib);
    printf("Insira o Numer de pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("%d", pontos_turisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta: %d", carta_um);
    printf("País: %s", nome_do_pais);
    printf("Nome da Cidade: %s", codigo_ddd_da_cidade);
    printf("Código DDD da Cidade: %d");
    printf("População: %f");
    printf("Área: %f");
    printf("PIB: %f");
    printf("Número de Pontos Turísticos: %d");

    return 0;
}
