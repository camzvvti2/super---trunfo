Xadrez 



#include <stdio.h>

void movimentoTorre(int linha, int coluna) {
    printf("Movimentos possíveis da Torre:\n");

    // Movimentos na mesma linha
    for (int i = 0; i < 8; i++) {
        if (i != coluna)
            printf("Linha %d, Coluna %d\n", linha, i);
    }

    // Movimentos na mesma coluna
    for (int i = 0; i < 8; i++) {
        if (i != linha)
            printf("Linha %d, Coluna %d\n", i, coluna);
    }
}






#include <stdio.h>

int movimentos[8][2] = {
    {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
    {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
};

void movimentoCavalo(int linha, int coluna) {
    printf("Movimentos possíveis do Cavalo:\n");
    for (int i = 0; i < 8; i++) {
        int novaLinha = linha + movimentos[i][0];
        int novaColuna = coluna + movimentos[i][1];
        if (novaLinha >= 0 && novaLinha < 8 && novaColuna >= 0 && novaColuna < 8) {
            printf("Linha %d, Coluna %d\n", novaLinha, novaColuna);
        }
    }
}






#include <stdio.h>

void movimentoRainha(int linha, int coluna, int dLinha, int dColuna) {
    int novaLinha = linha + dLinha;
    int novaColuna = coluna + dColuna;

    if (novaLinha < 0 || novaLinha >= 8 || novaColuna < 0 || novaColuna >= 8)
        return;

    printf("Linha %d, Coluna %d\n", novaLinha, novaColuna);
    movimentoRainha(novaLinha, novaColuna, dLinha, dColuna);
}

void todosMovimentosRainha(int linha, int coluna) {
    printf("Movimentos possíveis da Rainha:\n");
    int direcoes[8][2] = {
        {1, 0}, {-1, 0}, {0, 1}, {0, -1},  // Torre
        {1, 1}, {-1, -1}, {-1, 1}, {1, -1} // Bispo
    };

    for (int i = 0; i < 8; i++) {
        movimentoRainha(linha, coluna, direcoes[i][0], direcoes[i][1]);
    }
}
