## 🛡️ Nível Aventureiro: Cálculo de Atributos com Comparação Dupla

No nível Aventureiro, você expandirá o sistema para incluir o cálculo de dois novos atributos derivados: **Densidade Populacional** e **PIB per Capita**. Além disso, poderá **comparar dois atributos diferentes** entre as duas cidades para determinar o vencedor.

🆕 **Diferenças em relação ao Nível Novato:**

* **Novos Atributos Calculados:**
  * **Densidade Populacional**: População / Área (`float`)
  * **PIB per Capita**: PIB / População (`float`)

* **Comparação por Dois Atributos**:
  * O usuário escolhe **dois atributos diferentes** para comparação.
  * Os valores desses atributos são somados para definir a cidade vencedora.

⚙️ **Funcionalidades do Sistema:**

* O sistema solicita os dados de **duas cidades**.
* Calcula automaticamente:
  * Densidade Populacional
  * PIB per Capita
* O usuário escolhe **dois atributos diferentes** para comparar:
  * População
  * Área
  * PIB
  * Número de Pontos Turísticos
  * Densidade Populacional
* O programa exibe todos os dados, realiza a comparação e mostra o vencedor com base na **soma dos dois atributos escolhidos**.

📥 **Entrada de Dados:**

O programa solicitará os seguintes dados para **cada cidade**:

- Nome da cidade
- População (número inteiro)
- Área em km² (float)
- PIB (float)
- Número de pontos turísticos (número inteiro)


📤 **Saída de Dados:**

* Exibe todos os dados das cidades, incluindo:
  * Densidade Populacional (calculada)
  * PIB per Capita (calculado)
* Exibe a comparação dos dois atributos escolhidos:
  * Vencedor em cada atributo
  * Soma dos valores
  * Resultado final da comparação

📌 **Restrições do Projeto:**

✅ O sistema **não utiliza laços** (`for`, `while`, etc.)  
✅ O sistema **não utiliza estruturas condicionais tradicionais** (`if`, `else`, etc.) para repetição ou seleção de atributos  
✅ Tudo está implementado **diretamente na função `main()`**

---

## 🛠️ Como Compilar e Executar

1. Instale a extensão **C/C++** no VS Code
2. Clique no botão de "Executar" no topo direito da interface do VS Code
3. O terminal será aberto automaticamente para entrada de dados

---

## 🧪 Como Testar

1. O programa solicitará os dados das duas cidades.
2. Você escolherá **dois atributos diferentes (de 1 a 5)** para realizar a comparação:

1: População
2: Área
3: PIB
4: Número de pontos turísticos
5: Densidade demográfica


3. O programa exibirá:
  * Os valores de cada atributo para as duas cidades
  * Quem venceu em cada atributo
  * A soma dos dois atributos
  * Qual cidade venceu no total

---

## 🗂️ Sobre o Projeto

Este programa em C permite comparar **dois atributos diferentes entre duas cidades**, com base nos dados fornecidos pelo usuário. O sistema calcula automaticamente atributos derivados e determina a cidade vencedora com base na **soma** dos dois atributos escolhidos.

Ideal para praticar estruturas básicas, operadores lógicos e manipulação de dados sem uso de laços ou condicionais tradicionais.
