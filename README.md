## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, você expandirá o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.

🆕 **Diferença em relação ao Nível Novato:**

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

**Simplificações para o Nível Intermediário:**

*   Continue cadastrando apenas **duas** cartas.
*   Continue **sem usar** laços (`for`, `while`) ou condicionais (`if`, `else`).


# Sobre o Projeto

Este programa em C permite comparar atributos de duas cidades com base em dados fornecidos pelo usuário. O usuário insere informações sobre as cidades, como população, área, PIB e número de pontos turísticos. Em seguida, pode escolher um critério para comparar e determinar qual cidade tem a melhor pontuação nesse atributo.

## Pré-requisitos

Para compilar e executar este código, você precisa de um compilador C, como:

- GCC (GNU Compiler Collection)

- Clang

- MinGW (para Windows)

## Como Compilar e Executar

Passo 1: Compilar o código

1. Tenha a extensão `C/C++` instalada no seu vscode
2. A extensão ira te gerar um botão na parte superior direita
3. Ao clicar, vai se abrir o terminal do vscode.


## Como Testar

1. O programa solicitará que você insira informações sobre duas cidades.

```
Insira os seguintes dados para cada cidade:
Letra do estado (A-H)

Código da carta (exemplo: A01)

Nome da cidade

População

Área em km²

PIB da cidade

Número de pontos turísticos
```
2. Após inserir os dados, escolha um critério para comparar as cidades:

```
1: População

2: Área

3: PIB

4: Número de pontos turísticos

5: Densidade demográfica
```

3. O programa mostrará os dados inseridos e indicará qual cidade tem o melhor valor para o critério escolhido.

