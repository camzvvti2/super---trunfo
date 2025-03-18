#include <stdio.h>

int main() {
    char nome[100];  // Define um array para armazenar o nome com até 99 caracteres + '\0'
    
    // Solicita que o usuário digite o nome completo
    printf("Digite o nome: ");
    scanf("%[^\n]", nome);  // Lê a string até encontrar um '\n' (nova linha)
    
    // Imprime o nome completo
    printf("Nome digitado: %s\n", nome);

    return 0;
}

/*Uso de scanf("%s", nome): Ao passar o nome de um array para scanf, não é necessário usar o &, pois o nome de um array já é o endereço da sua primeira posição.

Uso de getchar(): Após o primeiro scanf("%s", estado1);, o caractere de nova linha (\n) ainda fica no buffer de entrada. Isso pode interferir na leitura subsequente. 
Por isso, usamos getchar(); antes de capturar a cidade para consumir esse caractere.

Impressão com printf("%s", nome): Quando você imprime uma string, não é necessário usar o & na variável (isso é feito corretamente no código agora).*/

/*Explicação das mudanças:
scanf(" %[^\n]", cidade1);: A adição do espaço antes de %[^\n] é a principal mudança. Esse espaço irá consumir qualquer caractere de nova linha (\n) ou espaços em branco que possam ter sido deixados no buffer de entrada após a leitura de entradas anteriores. Dessa forma, não precisamos de getchar() para limpar o buffer.
Como funciona:
Quando o scanf encontra o espaço antes do %[^\n], ele ignora qualquer caractere de espaço ou nova linha que possa estar no buffer de entrada. Isso resolve o problema sem a necessidade de um getchar().
O formato scanf(" %[^\n]", cidade1) vai capturar a cidade, incluindo os espaços, até o primeiro caractere de nova linha.*/