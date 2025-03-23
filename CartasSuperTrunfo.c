#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    char estado[5];
    char codigo[11];
    char nome[10];
    int populacao, N_P_turistico;
    float area;
    float Pib;
    

    // Cadastro das Cartas:

    printf("carta 1 \n");

    printf("primeira letra do estado: \n");
    scanf("%s", &estado);

    printf("codigo da Carta 3 caracteres: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("quatidade da população: \n");
    scanf("%f", &populacao);

    printf("quantidade de pontos turisticos: \n");
    scanf("%f", &N_P_turistico);

    printf("área total da cidade: \n");
    scanf("%e", &area);

    printf("Pib da cidade: \n");
    scanf("%e", &Pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("estado: %s - codigo: %s - nome: %s \n", estado,codigo,nome);
    printf("populacao: %f - P_turistico: %f - area: %e - Pib: %e Milhões de Reais", populacao,N_P_turistico,area,Pib);
    
    


    
   

    



    
    
 

    

}
