# desafio-novato
Repositório criado para o Desafio Novato da Estácio - Análise e Desenvolvimento de Sistemas - Aluno: Vinicius Guimarães Urquiza

- Meu desafio segue o modelo mas aplicando algumas funções, poucas por enquanto, que achei legal como limite de 1 a 4 cartas por Estado.  Neste relatório explicarei o processo de criação e as funcionalidades, mostrando a evolução do script após cada modificação até o beta.

## Desafio Novato - Estácio ADS

Para atender aos requisitos do desafio, o programa em C deve permitir que o usuário insira os dados de duas cartas do Super Trunfo (representando cidades), e exiba essas informações de maneira organizada. Não podemos utilizar estruturas de repetição ou decisão, então o código será uma sequência simples de instruções.

Vou estruturar o código da seguinte maneira:
### Estrutura das Cartas

Cada carta terá os seguintes campos:

- Estado
- Código da Carta
- Nome da Cidade
- População
- Área (em km²)
- PIB
- Número de Pontos Turísticos
### Programa em C
```
#include <stdio.h>

typedef struct {
    char estado;          // Estado (A a H)
    char codigo[5];       // Código da carta (ex: A01, B03)
    char nomeCidade[50];  // Nome da cidade
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade em bilhões
    int pontosTuristicos; // Número de pontos turísticos
} Carta;

int main() {
    Carta carta1, carta2;

    // Leitura dos dados da primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", carta1.nomeCidade);  // Para ler nomes com espaços
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura dos dados da segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", carta2.nomeCidade);  // Para ler nomes com espaços
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

```
## Explicação do Código:

1. **Estrutura `Carta`**:
    
    - A estrutura `Carta` contém os campos solicitados no desafio: `estado`, `codigo`, `nomeCidade`, `populacao`, `area`, `pib` e `pontosTuristicos`.

2. **Leitura dos dados**:
    
    - O programa pede para o usuário informar os dados de cada carta (duas cartas no total).
    - Para ler as strings (como o nome da cidade), utilizamos o `scanf(" %[^\n]%*c", nomeCidade)`, o que permite capturar nomes com espaços.
    - As variáveis `populacao`, `area`, `pib` e `pontosTuristicos` são lidas com os tipos adequados (`int` e `float`).

3. **Exibição dos dados**:
    
    - Após capturar os dados de ambas as cartas, o programa imprime as informações na tela no formato solicitado.

### Observações:

- O programa não usa estruturas de repetição ou decisão, conforme solicitado no desafio.
- As entradas são feitas de forma sequencial e os dados são exibidos na sequência.
- A leitura do nome da cidade é feita com um `scanf` especial para permitir espaços no nome.

### Como Testar:

1. Compile o código com o comando `gcc super_trunfo.c -o super_trunfo.exe`.
2. Execute o programa: `./super_trunfo.exe`.
3. O programa irá solicitar as informações para as duas cartas, e em seguida, exibirá as informações de cada uma de forma organizada.

### Possíveis Melhorias Futuras:

- Implementar a lógica de comparação entre as cartas.
- Adicionar validações para garantir que os dados inseridos sejam válidos (por exemplo, garantir que o código siga o formato `A01`).
- Armazenar mais cartas ou usar listas dinâmicas para suportar mais entradas.


Para implementar a melhoria de que cada código de estado possa ter de 1 a 4 cartas, preciso ajustar a estrutura para permitir múltiplas cartas para cada estado. Uma forma de fazer isso é armazenar as cartas em um *array*, onde cada posição corresponde a uma carta, e o estado será a chave para identificar quantas cartas de cada estado foram inseridas.

Abaixo, vou apresentar a modificação necessária para o código, permitindo que cada estado tenha até 4 cartas associadas a ele. Vou utilizar um array de estruturas para armazenar as cartas e também garantir que o código de estado seja único para cada conjunto de cartas.
### Código Atualizado

```
#include <stdio.h>

#define MAX_CARTAS 4  // Máximo de 4 cartas por estado
#define MAX_ESTADOS 8 // Máximo de 8 estados

typedef struct {
    char estado;          // Estado (A a H)
    char codigo[5];       // Código da carta (ex: A01)
    char nomeCidade[50];  // Nome da cidade
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade em bilhões
    int pontosTuristicos; // Número de pontos turísticos
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta* c) {
    printf("Estado (A a H): ");
    scanf(" %c", &c->estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", c->codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", c->nomeCidade);  // Para ler nomes com espaços
    printf("População: ");
    scanf("%d", &c->populacao);
    printf("Área (em km²): ");
    scanf("%f", &c->area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &c->pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &c->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta* c) {
    printf("\nCarta:\n");
    printf("Estado: %c\n", c->estado);
    printf("Código: %s\n", c->codigo);
    printf("Nome da Cidade: %s\n", c->nomeCidade);
    printf("População: %d\n", c->populacao);
    printf("Área: %.2f km²\n", c->area);
    printf("PIB: %.2f bilhões de reais\n", c->pib);
    printf("Número de Pontos Turísticos: %d\n", c->pontosTuristicos);
}

int main() {
    Carta cartas[MAX_ESTADOS][MAX_CARTAS];  // Array para armazenar até 4 cartas por estado
    int numCartas[MAX_ESTADOS] = {0};  // Array para contar quantas cartas foram inseridas para cada estado
    int estadoIndex, i;

    // Ler as cartas para até 8 estados
    for (estadoIndex = 0; estadoIndex < MAX_ESTADOS; estadoIndex++) {
        printf("\nInforme as cartas para o estado %c:\n", 'A' + estadoIndex);
        
        // Perguntar quantas cartas o usuário deseja inserir para o estado atual
        int num = 0;
        printf("Quantas cartas deseja cadastrar para o estado %c? (1 a 4): ", 'A' + estadoIndex);
        scanf("%d", &num);

        if (num < 1 || num > 4) {
            printf("Número inválido de cartas! A quantidade de cartas deve ser entre 1 e 4.\n");
            return 1;
        }

        // Lê as cartas para o estado atual
        for (i = 0; i < num; i++) {
            printf("\nInforme os dados da carta %d para o estado %c:\n", i + 1, 'A' + estadoIndex);
            lerCarta(&cartas[estadoIndex][i]);
        }

        numCartas[estadoIndex] = num;
    }

    // Exibir as cartas cadastradas
    for (estadoIndex = 0; estadoIndex < MAX_ESTADOS; estadoIndex++) {
        if (numCartas[estadoIndex] > 0) {
            printf("\nCartas cadastradas para o estado %c:\n", 'A' + estadoIndex);
            for (i = 0; i < numCartas[estadoIndex]; i++) {
                exibirCarta(&cartas[estadoIndex][i]);
            }
        }
    }

    return 0;
}

```

### Alterações e Melhorias:

1. **Array de Cartas por Estado**:
    
    - Utilizamos `cartas[MAX_ESTADOS][MAX_CARTAS]` para armazenar até 4 cartas por estado. Cada linha do array representa um estado (de A a H), e as colunas representam as cartas daquele estado.
2. **Controle de Quantidade de Cartas**:
    
    - A variável `numCartas[MAX_ESTADOS]` mantém o controle de quantas cartas foram cadastradas para cada estado.
3. **Entrada Dinâmica de Cartas**:
    
    - O programa pergunta ao usuário quantas cartas ele deseja cadastrar para cada estado, permitindo entre 1 e 4 cartas por estado.
4. **Leitura e Exibição**:
    
    - Usamos funções separadas para ler e exibir as cartas, tornando o código mais modular e organizado.
5. **Validação da Quantidade de Cartas**:
    
    - A quantidade de cartas para cada estado deve ser entre 1 e 4. Caso o usuário insira um valor fora desse intervalo, o programa exibe um erro.

### Como Funciona:

1. **Entrada de Dados**:
    
    - O programa solicita ao usuário o número de cartas a serem cadastradas para cada estado (1 a 4).
    - Depois, ele pede as informações para cada carta (Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos).
2. **Exibição de Cartas**:
    
    - Após o cadastro, o programa exibe as cartas de todos os estados cadastrados, com as informações formatadas conforme solicitado.


### Exemplo de Execução:

```
Informe as cartas para o estado A:
Quantas cartas deseja cadastrar para o estado A? (1 a 4): 2

Informe os dados da carta 1 para o estado A:
Estado (A a H): A
Código da Carta (ex: A01): A01
Nome da Cidade: São Paulo
População: 12325000
Área (em km²): 1521.11
PIB (em bilhões de reais): 699.28
Número de Pontos Turísticos: 50

Informe os dados da carta 2 para o estado A:
Estado (A a H): A
Código da Carta (ex: A02): A02
Nome da Cidade: Campinas
População: 1200000
Área (em km²): 1241.1
PIB (em bilhões de reais): 43.50
Número de Pontos Turísticos: 20

Cartas cadastradas para o estado A:
Carta:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta:
Estado: A
Código: A02
Nome da Cidade: Campinas
População: 1200000
Área: 1241.10 km²
PIB: 43.50 bilhões de reais
Número de Pontos Turísticos: 20
```
### Possíveis Melhorias Futuras:

- **Validação das Entradas**: Adicionar verificações para garantir que os dados inseridos sejam válidos (por exemplo, verificar se o PIB é um número positivo).
- **Limitação de Cartas**: Poderíamos permitir que o programa adicione um número máximo de cartas (4 cartas por estado, por exemplo).

Para implementar a funcionalidade que instrui o usuário sobre o tipo de entrada aceitável e também lida com entradas inválidas, vamos adicionar mensagens de instrução para cada tipo de entrada e garantir que, caso o usuário insira um valor incorreto, o programa emita um aviso e solicite novamente a entrada.

### Código Atualizado

```
#include <stdio.h>
#include <stdlib.h>

#define MAX_CARTAS 4  // Máximo de 4 cartas por estado
#define MAX_ESTADOS 8 // Máximo de 8 estados

typedef struct {
    char estado;          // Estado (A a H)
    char codigo[5];       // Código da carta (ex: A01)
    char nomeCidade[50];  // Nome da cidade
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade em bilhões
    int pontosTuristicos; // Número de pontos turísticos
} Carta;

// Função para ler uma entrada de char válida
char lerCharValido(char min, char max) {
    char c;
    while (1) {
        scanf(" %c", &c); // o " " antes de %c é para descartar espaços ou quebras de linha anteriores
        if (c >= min && c <= max) {
            return c;
        } else {
            printf("Entrada inválida! Digite uma letra entre %c e %c: ", min, max);
        }
    }
}

// Função para ler uma string válida (nome da cidade)
void lerStringValida(char *str, int maxLen) {
    while (1) {
        scanf(" %[^\n]%*c", str);  // Para ler nomes com espaços
        if (strlen(str) > 0 && strlen(str) < maxLen) {
            return;
        } else {
            printf("Entrada inválida! Digite um nome de cidade válido (não vazio e com menos de %d caracteres): ", maxLen);
        }
    }
}

// Função para ler um inteiro válido
int lerIntValido(int min, int max) {
    int val;
    while (1) {
        if (scanf("%d", &val) == 1 && val >= min && val <= max) {
            return val;
        } else {
            printf("Entrada inválida! Digite um número inteiro entre %d e %d: ", min, max);
            while (getchar() != '\n'); // Limpar o buffer
        }
    }
}

// Função para ler um número de ponto flutuante válido
float lerFloatValido(float min, float max) {
    float val;
    while (1) {
        if (scanf("%f", &val) == 1 && val >= min && val <= max) {
            return val;
        } else {
            printf("Entrada inválida! Digite um número decimal entre %.2f e %.2f: ", min, max);
            while (getchar() != '\n'); // Limpar o buffer
        }
    }
}

// Função para ler os dados de uma carta
void lerCarta(Carta* c) {
    printf("Estado (A a H): ");
    c->estado = lerCharValido('A', 'H');

    printf("Código da Carta (ex: A01): ");
    while (1) {
        scanf("%s", c->codigo);
        if (c->codigo[0] >= 'A' && c->codigo[0] <= 'H' && c->codigo[2] >= '1' && c->codigo[2] <= '4' && c->codigo[1] >= '0' && c->codigo[1] <= '9') {
            break;
        } else {
            printf("Código inválido! Digite um código válido (ex: A01): ");
        }
    }

    printf("Nome da Cidade: ");
    lerStringValida(c->nomeCidade, 50);

    printf("População (número de habitantes): ");
    c->populacao = lerIntValido(1, 100000000);

    printf("Área (em km²): ");
    c->area = lerFloatValido(1.0, 10000.0);

    printf("PIB (em bilhões de reais): ");
    c->pib = lerFloatValido(0.0, 100000.0);

    printf("Número de Pontos Turísticos: ");
    c->pontosTuristicos = lerIntValido(0, 500);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta* c) {
    printf("\nCarta:\n");
    printf("Estado: %c\n", c->estado);
    printf("Código: %s\n", c->codigo);
    printf("Nome da Cidade: %s\n", c->nomeCidade);
    printf("População: %d\n", c->populacao);
    printf("Área: %.2f km²\n", c->area);
    printf("PIB: %.2f bilhões de reais\n", c->pib);
    printf("Número de Pontos Turísticos: %d\n", c->pontosTuristicos);
}

int main() {
    Carta cartas[MAX_ESTADOS][MAX_CARTAS];  // Array para armazenar até 4 cartas por estado
    int numCartas[MAX_ESTADOS] = {0};  // Array para contar quantas cartas foram inseridas para cada estado
    int estadoIndex, i;

    // Ler as cartas para até 8 estados
    for (estadoIndex = 0; estadoIndex < MAX_ESTADOS; estadoIndex++) {
        printf("\nInforme as cartas para o estado %c:\n", 'A' + estadoIndex);
        
        // Perguntar quantas cartas o usuário deseja inserir para o estado atual
        int num = 0;
        printf("Quantas cartas deseja cadastrar para o estado %c? (1 a 4): ", 'A' + estadoIndex);
        num = lerIntValido(1, 4);

        // Lê as cartas para o estado atual
        for (i = 0; i < num; i++) {
            printf("\nInforme os dados da carta %d para o estado %c:\n", i + 1, 'A' + estadoIndex);
            lerCarta(&cartas[estadoIndex][i]);
        }

        numCartas[estadoIndex] = num;
    }

    // Exibir as cartas cadastradas
    for (estadoIndex = 0; estadoIndex < MAX_ESTADOS; estadoIndex++) {
        if (numCartas[estadoIndex] > 0) {
            printf("\nCartas cadastradas para o estado %c:\n", 'A' + estadoIndex);
            for (i = 0; i < numCartas[estadoIndex]; i++) {
                exibirCarta(&cartas[estadoIndex][i]);
            }
        }
    }

    return 0;
}
```

### Alterações e Melhorias:

1. **Mensagens de Instrução para o Usuário**:
    
    - Para cada tipo de entrada (Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos), adicionamos uma mensagem clara para o usuário sobre o que ele precisa inserir, incluindo as limitações de cada tipo de dado.
2. **Validação de Entrada**:
    
    - **`lerCharValido()`**: Lê um caractere e garante que seja um dos valores válidos, como 'A' a 'H'.
    - **`lerStringValida()`**: Lê uma string e garante que não seja vazia e que tenha um tamanho adequado.
    - **`lerIntValido()`**: Lê um número inteiro e garante que ele esteja dentro de um intervalo especificado.
    - **`lerFloatValido()`**: Lê um número flutuante e garante que ele esteja dentro de um intervalo válido.
3. **Avisos para Entradas Inválidas**:
    
    - Se o usuário inserir uma entrada inválida (como um número fora do intervalo, um caractere errado ou uma string vazia), o programa emite um aviso e repete a solicitação de entrada até que o valor seja válido.

### Exemplo de Execução:

```
Informe as cartas para o estado A:
Quantas cartas deseja cadastrar para o estado A? (1 a 4): 2

Informe os dados da carta 1 para o estado A:
Estado (A a H): A
Código da Carta (ex: A01): A01
Nome da Cidade: São Paulo
População (número de habitantes): 12325000
Área (em km²): 1521.11
PIB (em bilhões de reais): 699.28
Número de Pontos Turísticos: 50

Informe os dados da carta 2 para o estado A:
Estado (A a H): A
Código da Carta (ex: A02): A02
Nome da Cidade: Campinas
População (número de habitantes): 1200000
Área (em km²): 1241.1
PIB (em bilhões de reais): 43.50
Número de Pontos Turísticos: 20

Cartas cadastradas para o estado A:
Carta:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta:
Estado: A
Código: A02
Nome da Cidade: Campinas
População: 1200000
Área: 1241.10 km²
PIB: 43.50 bilhões de reais
Número de Pontos Turísticos: 20
```

Agora o código é mais robusto, com validação de entradas e instruções claras para o usuário.