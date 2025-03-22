#include <stdio.h>


int main() {
    int rainha = 8;
    int torre = 7;

    // determinando a posição do bispo como se fosse em um plano cartesiano
    int  bispo_x = 2;
    int bispo_y = 4;
    int soma_x, soma_y = 0;

    // movimentação do bispo;
    while (bispo_x == 2 && bispo_y ==4)
    {
        printf("\n\n====== Movimentação do bispo! ======\n\n");
        printf("A posição atual do bispo é (2,0)\n");
        printf("Se vc escolher um numero positivo para x ele vai se movimentar para a direita, e o contrario caso negativo\n");
        printf("Se vc escolher um numero positivo para y ele vai se movimentar para cima, e o contrario caso negativo\n");
        printf("Escolha a movimentação do bispo (x,y) respectivamente: \n");
        scanf("%d", &soma_x);
        scanf("%d", &soma_y);

        //somando o numero setado pelo usuario + o numero da posição atual do bispo para saber em que casa o bispo esta

        soma_x += bispo_x;
        soma_y += bispo_y;

        if (soma_x > 7 || soma_y > 7 || soma_x < 0 || soma_y < 0)
        {
            printf("O tabuleiro vai da posição 0 a 7(para x e y), não é possivel movimentar uma peça além disso!\n");
            printf("A posição que o tabuleiro passou foi (%d,%d)\n", soma_x, soma_y);
            printf("Corrija!\n");

            //retornando ao valor original para o loop n acabar
            soma_x, soma_y = 0;
            bispo_x = 2;
            bispo_y = 4;
        }else{

            printf("O Bispo se movimentou em x para:\n");
            if (soma_x > bispo_x)
            {
                for (int i = 0; i < (soma_x - bispo_x); i++) // vai printar direita a quantidade de casas que a nova posição for maior que a casa antiga
                {
                    printf("Direita\n");
                }
                
            }else if(soma_x == bispo_x){ //verifica se ele não andou
               printf("Não andou");
            }else{
                for (int i = 0; i < (bispo_x - soma_x); i++)
                {
                    printf("esquerda\n");
                }
            }

            //mesma verificação para y
            printf("\n\nO Bispo se movimentou em y para:\n");
            if (soma_y > bispo_y)
            {
                for (int i = 0; i < (soma_y - bispo_y); i++) // vai printar direita a quantidade de casas que a nova posição for maior que a casa antiga
                {
                    printf("Cima\n");
                }
                
            }else if(soma_y == bispo_y){ //verifica se ele não andou
               printf("Não andou");
            }else{
                for (int i = 0; i < (bispo_y - soma_y); i++)
                {
                    printf("Baixo\n");
                }
            }
            
            printf("\n\nA nova posição do bispo é: (%d, %d)", soma_x,soma_y);
            break;
        }
    }
    //vou fazer o resto do desafio sem acrescentar dificuldade
    int count = 0;
    printf("\n\n\nAa torre se movimentou em: \n");
    do
    {
        printf("\ndireita");
        count++;
    } while (count < torre);

    printf("\n\nA rainha se movimentou em: ");

    for(int i = 0; i < rainha; i++){
        printf("\nCima");
    }


    





    return 0;
}
