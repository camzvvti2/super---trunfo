#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// teste larissa


// Definição das variáveis para armazenar as propriedades das cidades
char nome_cidade1[15], estado_cidade1[15], codigo_cidade1[10];
unsigned pop_cidade1, pontosTuristicos_cidade1;

 // Cadastro das Cartas:
 printf("|---------------------------------------|\n");
 printf("|\tBEM-VINDO AO SUPER-TRUNFO       |\n"     ); 
 printf("|---------------------------------------|\n\n");

 printf("\t~~~Cadastre suas cartas~~~\n");
 // cadastro da cidade 1
 printf("Cadastro da cidade 1\n");
 printf("Nome da cidade:\n");
 scanf(" %s", &nome_cidade1);

 printf("Estado da cidade:\n");
 scanf(" %s", &estado_cidade1);

 printf("Codigo da cidade:\n");
 scanf(" %s", &codigo_cidade1);

 printf("População:\n");
 scanf(" %u", &pop_cidade1);

 printf("Area(km²):\n");
 scanf(" %lf", &area_cidade1);

 printf("Pib:\n");
 scanf(" %lf", &pib_cidade1);

 printf("Pontos turisticos:\n");
 scanf(" %u", &pontosTuristicos_cidade1);
