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

    //Variáveis carta 1
    int carta_um = 1;
    char nome_do_pais[50];
    int codigo_ddd_da_cidade;
    char nome_da_cidade[50];
    float populacao;
    float area_km;
    float pib;
    int pontos_turisticos;

    //Variáveis carta 2

    int carta_dois = 2;
    char nome_do_pais_dois[50];
    int codigo_ddd_da_cidade_dois;
    char nome_da_cidade_dois[50];
    float populacao_dois;
    float area_km_dois;
    float pib_dois;
    int pontos_turisticos_dois;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("BEM-VINDO AO JOGO DE CARTAS SUPER TRUNFO!\n");

    printf("VAMOS COMEÇAR!\n");
    printf("\n");

    printf("Prepare-se para inserir as informações das Cartas:\n");
    printf("\n");

    //Carta 1
    printf("Cadastre a carta número 1!\n");
    printf("\n");

    printf("Carta: %d\n", carta_um);

    printf("Escreva o nome do País: ");
    fgets(nome_do_pais,50,stdin);
    printf("Nome do País: %s" , nome_do_pais);

    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade,50, stdin);
    printf("Nome da Cidade: %s", nome_da_cidade);

    printf("Escreva o código do DDD telefônico da Cidade: ");
    scanf("%d", &codigo_ddd_da_cidade);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade); 

    printf("Insira o número da População: ");
    scanf("%f", &populacao);
    printf("População: %.2f\n", populacao);

    printf("Insira a área em km² da Cidade: ");
    scanf("%f", &area_km);
    printf("Área km²: %.2f \n",area_km);

    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %.2f \n", pib);

    printf("Insira o Número de pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Número de pontos Turísticos: %d \n", pontos_turisticos);

    printf("\n");
    printf("\n");

    printf("---------------------//---------------------\n");
    printf("\n");
    printf("\n");

    //Carta 2
    printf("Cadastre a carta Número Dois!\n");
    printf("\n");

    printf("Carta: %d\n", carta_dois);

    printf("Escreva o nome do País: ");
    getchar();
    fgets(nome_do_pais_dois,50,stdin);
    printf("Nome do País: %s" , nome_do_pais_dois);

    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade_dois,50, stdin);
    printf("Nome da Cidade: %s", nome_da_cidade_dois);

    printf("Escreva o código do DDD telefônico da Cidade: ");
    scanf("%d", &codigo_ddd_da_cidade_dois);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade_dois); 

    printf("Insira o número da População: ");
    scanf("%f", &populacao_dois);
    printf("População: %.2f\n", populacao_dois);

    printf("Insira a área em km² da Cidade: ");
    scanf("%f", &area_km_dois);
    printf("Área km²: %.2f \n",area_km_dois);

    printf("Insira o PIB: ");
    scanf("%f", &pib_dois);
    printf("PIB: %.2f \n", pib_dois);
    
    printf("Insira o Número de pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_dois);
    printf("Número de pontos Turísticos: %d \n", pontos_turisticos_dois);

    printf("\n");
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Carta 1
    printf("Carta: %d\n", carta_um);
    printf("País: %s", nome_do_pais);
    printf("Nome da Cidade: %s", nome_da_cidade);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade);
    printf("População: %.2f\n", populacao);
    printf("Área km²: %.2f\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    printf("\n");
    printf("\n");
    
    //Carta 2
    printf("Carta: %d\n", carta_dois);
    printf("País: %s", nome_do_pais_dois);
    printf("Nome da Cidade: %s", nome_da_cidade_dois);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade_dois);
    printf("População: %.2f\n", populacao_dois);
    printf("Área km²: %.2f\n", area_km_dois);
    printf("PIB: %.2f\n", pib_dois);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_dois);

    printf("\n");
    printf("\n");
    
    return 0;
}
