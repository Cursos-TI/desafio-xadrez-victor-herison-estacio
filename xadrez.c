#include <stdio.h>

// Função recursiva para movimentar a Rainha (movimenta para a Esquerda)
void moverRainhaRecursivo(int casas) {
    if (casas <= 0) 
        return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// Função recursiva para movimentar a Torre (movimenta para a Direita)
void moverTorreRecursivo(int casas) {
    if (casas <= 0)
        return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Função recursiva para movimentar o Bispo (movimento diagonal: Cima e Direita)
// Nesta função, utilizamos um loop externo para o movimento vertical e um loop interno para o movimento horizontal.
void moverBispoRecursivo(int casas) {
    if (casas <= 0)
        return;
    
    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {
        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("(Cima, Direita)\n");
        }
    }
    moverBispoRecursivo(casas - 1);
}

int main() {
    // Definição do número de casas a serem percorridas para cada peça
    int rainhaCasas = 8;  // Rainha: movimenta para a esquerda
    int torreCasas = 5;   // Torre: movimenta para a direita
    int bispoCasas = 5;   // Bispo: movimenta na diagonal (cima e direita)
    
    // Movimentação da Rainha utilizando recursividade
    printf("Rainha:\n");
    moverRainhaRecursivo(rainhaCasas);
    
    // Movimentação da Torre utilizando recursividade
    printf("\nTorre:\n");
    moverTorreRecursivo(torreCasas);
    
    // Movimentação do Bispo utilizando recursividade com loops aninhados
    printf("\nBispo:\n");
    moverBispoRecursivo(bispoCasas);
    
    // Movimentação do Cavalo utilizando loops aninhados com condições
    // O movimento do Cavalo será para cima duas vezes e depois para a direita (movimento em "L").
    printf("\nCavalo:\n");
    // Usando dois loops aninhados:
    // - Quando (i == 0, j == 0): imprime "Cima"
    // - Quando (i == 1, j == 0): imprime "Cima"
    // - Quando (i == 1, j == 1): imprime "Direita"
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if(i == 0 && j == 0) {
                printf("Cima\n");
            } else if(i == 1 && j == 0) {
                printf("Cima\n");
            } else if(i == 1 && j == 1) {
                printf("Direita\n");
            } else {
                // Caso (i == 0, j == 1): não faz nada
                continue;
            }
        }
    }
    
    return 0;
}
