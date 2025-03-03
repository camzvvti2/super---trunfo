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
    char codigo_da_cidade[50];
    float populacao;
    float area_km;
    float pib;
    int pontos_turisticos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("BEM-VINDO AO JOGO DE CARTAS SUPER TRUNFO!\n VAMOS COMEÇAR!\n");
    printf("Cadastre as Cartas:\n");
    printf("Carta: %d\n", carta_um);
    printf("Escreva o nome do País: ");
    fgets(nome_do_pais,50,stdin);
    printf("Nome do País: %s" , nome_do_pais);
    printf("Escreva o código da Cidade: ");
    scanf("%s", &codigo_da_cidade);
    printf("Código da Cidade: %s", codigo_da_cidade);
    printf("Insira o número da população: ");
    scanf("%f", &populacao);
    printf("Insira a área em Km da Cidade: ");
    scanf("%f", &area_km);
    printf("insira o PIB: ");
    scanf("%f", &pib);
    printf("%d", pontos_turisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
