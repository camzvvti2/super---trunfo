#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int population, turistic_points;
    char city_name[50], code[10], state[3];
    float area, pib;
  
    for (int i = 0; i < 2; i++) {
      printf("Digite o nome da cidade: \n ");
      scanf("%s", city_name);
  
      printf("Digite o código da cidade: \n");
      scanf("%s", code);
  
      printf("Digite o estado da cidade: \n");
      scanf("%s", state);
  
      printf("Digite a população da cidade: \n");
      scanf("%d", &population);
  
      printf("Digite a área da cidade: \n");
      scanf("%f", &area);
  
      printf("Digite o PIB da cidade: \n");
      scanf("%f", &pib);
  
      printf("Digite os pontos turísticos da cidade: \n");
      scanf("%d", &turistic_points);
  
      printf("\nCidade: %s\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n\n",
             city_name, code, state, population, area, pib, turistic_points);
    }
    return 0;
}
