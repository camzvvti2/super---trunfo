#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, 
    //número de pontos turísticos.

    //Variáveis carta 1 e os tipos para alocar os dados inseridos
    int carta_um = 1;
    char nome_do_pais[50];
    int codigo_ddd_da_cidade;
    char nome_da_cidade[50];
    unsigned long int populacao;
    float area_km;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float per_capita;
    float super_poder;


    //Variáveis carta 2 e os tipos para alocar os dados inseridos
    int carta_dois = 2;
    char nome_do_pais_dois[50];
    int codigo_ddd_da_cidade_dois;
    char nome_da_cidade_dois[50];
    unsigned long int populacao_dois;
    float area_km_dois;
    float pib_dois;
    int pontos_turisticos_dois;
    float densidade_populacional_dois;
    float per_capita_dois;
    float super_poder_dois;


    //Variáveis de Comparação:
    int resultado_poulacao, resultado_area, resultado_pib, resultado_pontos_turisticos,
    resultado_densidade_populacional, resultado_per_capita, resultado_super_poder;

    
    // Apresentando o jogo e Solicitandp ao usuário que insira as informações dos dados.
    printf("BEM-VINDO AO JOGO DE CARTAS SUPER TRUNFO!\n");
    printf("VAMOS COMEÇAR!\n");

    // Usando função printf com \n para saltar linhas, para organizar mais os dados exibidos.
    printf("\n");

    // Utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    // Usando a função fgets para ter acesso a países com nomes compostos.
    // Usando a função printf para mostrar os dados em tela.
    printf("Prepare-se para inserir as informações das Cartas:\n");
    printf("\n");

    // Cadastro da Carta:
    //Carta 1
    printf("Cadastre a carta número 1!\n");
    printf("\n");
    printf("Carta: %d\n", carta_um);

    //Dados Nome País:
    printf("Escreva o nome do País: ");
    fgets(nome_do_pais,50,stdin);
    printf("Nome do País: %s" , nome_do_pais);

    //Dados Nome Cidade:
    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade,50, stdin);
    printf("Nome da Cidade: %s", nome_da_cidade);

    //Dados Número de DDD Telefônco da Cidade:
    printf("Escreva o código do DDD telefônico da Cidade: ");
    scanf("%d", &codigo_ddd_da_cidade);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade); 

    //Dados Número da População:
    printf("Insira o número da População: ");
    scanf("%lu", &populacao);
    printf("População: %.lu\n", populacao);

    //Dados de Extensão da Área da Cidade do País:
    printf("Insira a área em km² da Cidade: ");
    scanf("%f", &area_km);
    printf("Área km²: %.2f \n",area_km);

    //Dados do PIB da Cidade:
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %.2f \n", pib);

    //Dados Número de ponto Turísticos da Cidade Cadastrada:
    printf("Insira o Número de pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Número de pontos Turísticos: %d \n", pontos_turisticos);

    //Cálculo densidade populacional:
    densidade_populacional = populacao / area_km;

    //Cálculo PIB per capita:
    per_capita = pib / populacao;


    printf("\n");
    printf("\n");

    printf("---------------------//---------------------\n");
    printf("\n");
    printf("\n");

    // Cadastro da Carta:
    //Carta 2
    printf("Cadastre a carta Número Dois!\n");
    printf("\n");
    printf("Carta: %d\n", carta_dois);

    //Dados Nome País:
    printf("Escreva o nome do País: ");
    getchar(); /*Usei a função para corrigir um erro de buffer na entrada de dados,
     relacionado com o uso do scanf após um fgets de introdução de dados. */ 
    fgets(nome_do_pais_dois,50,stdin);
    printf("Nome do País: %s" , nome_do_pais_dois);

     //Dados Nome Cidade:
    printf("Insira o nome da Cidade: ");
    fgets(nome_da_cidade_dois,50, stdin);
    printf("Nome da Cidade: %s", nome_da_cidade_dois);

     //Dados Número de DDD Telefônco da Cidade:
    printf("Escreva o código do DDD telefônico da Cidade: ");
    scanf("%d", &codigo_ddd_da_cidade_dois);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade_dois); 

     //Dados Número da População:
    printf("Insira o número da População: ");
    scanf("%lu", &populacao_dois);
    printf("População: %lu\n", populacao_dois);

    //Dados de Extensão da Área da Cidade do País:
    printf("Insira a área em km² da Cidade: ");
    scanf("%f", &area_km_dois);
    printf("Área km²: %.2f \n",area_km_dois);


    //Dados do PIB da Cidade:
    printf("Insira o PIB: ");
    scanf("%f", &pib_dois);
    printf("PIB: %.2f \n", pib_dois);
    
     //Dados Número de ponto Turísticos da Cidade Cadastrada:
    printf("Insira o Número de pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_dois);
    printf("Número de pontos Turísticos: %d \n", pontos_turisticos_dois);

    //Cálculo densidade populacional:
        densidade_populacional_dois = populacao_dois / area_km_dois;

     //Cálculo PIB per capita:
        per_capita_dois = pib_dois / populacao_dois;

    printf("\n");
    printf("\n");

    // Seção de exibição dos Dados das Cartas com o uso da função printf:
  
    //Dados Carta 1
    printf("Carta: %d\n", carta_um);
    printf("País: %s", nome_do_pais);
    printf("Nome da Cidade: %s", nome_da_cidade);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade);
    printf("População: %lu\n", populacao);
    printf("Área km²: %.2f\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional);
    printf("PIB per capita: %.2f reais \n", per_capita);

    printf("\n");
    printf("\n");
    
    //Dados Carta 2
    printf("Carta: %d\n", carta_dois);
    printf("País: %s", nome_do_pais_dois);
    printf("Nome da Cidade: %s", nome_da_cidade_dois);
    printf("Código DDD da Cidade: %d\n", codigo_ddd_da_cidade_dois);
    printf("População: %lu\n", populacao_dois);
    printf("Área km²: %.2f\n", area_km_dois);
    printf("PIB: %.2f\n", pib_dois);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_dois);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional_dois);
    printf("PIB per capita: %.2f reais \n", per_capita_dois);

    printf("\n");
    printf("\n");

    
    //Super poder carta 1:
    super_poder = (float) populacao + area_km + (float) pontos_turisticos + per_capita / 1;

    //Super poder carta 2:
    super_poder_dois = (float) populacao + area_km + (float) pontos_turisticos + per_capita_dois / 1;


    // Comparação Atributos das Cartas 1 e 2:  1 verdadeiro, 0 falso
    resultado_poulacao = populacao > populacao_dois;
    resultado_area = area_km > area_km_dois;
    resultado_pib = pib > pib_dois;
    resultado_pontos_turisticos = pontos_turisticos > pontos_turisticos_dois;
    resultado_densidade_populacional = densidade_populacional < densidade_populacional_dois;
    resultado_per_capita = per_capita > per_capita_dois;
    resultado_super_poder = super_poder > super_poder_dois;


    //Impressão do resultado da comparação:
    printf("Comparação das Cartas: Se for 1 Carta A venceu, se for 0 Carta B venceu: \n");
  
    printf("\n");
  
    printf("Resultado População: %d Venceu\n!", resultado_poulacao);
    printf("Resultado Área: %d Venceu!\n",resultado_area);
    printf("Resultado PIB: %d Venceu!\n", resultado_pib);
    printf("Resultado Pontos Turísticos: %d Venceu!\n", resultado_pontos_turisticos);
    printf("Resultado Densidade Populacional: %d Venceu!\n", resultado_densidade_populacional);
    printf("Resultado PIB per Capita: %d Venceu!\n", resultado_per_capita);
    printf("Resultado Super Poder: %d Venceu!\n", resultado_super_poder);

    printf("\n");
    printf("\n");

    printf("Obrigado por jogar!");

    printf("\n");
    printf("\n");
    
    return 0;
}
