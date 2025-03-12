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
   
    char estado ;

    char codigo [10]; 
  
    char cidade [20]; 
  
    int população; 
  
    float area; 
  
    float pib; 
  
    int turismo; 

    printf("Digite o estado:\n");

    scanf("%c", &estado);
        
    printf("Estado:%c\n", estado);
   
    printf("Digite o codigo da carta: \n");
  
    scanf("%s", codigo);
  
    printf("O codigo da carta é:%s\n", codigo);

    printf("Digite o nome da cidade é:\n");
  
    scanf("%s", cidade);
  
    printf("O nome da cidade é:%s\n", cidade);

    printf("Qual a população da cidade:\n");
  
    scanf("%f", &população);
  
    printf("A população da cidade é de :%f\n", população);
  


    return 0;
}
