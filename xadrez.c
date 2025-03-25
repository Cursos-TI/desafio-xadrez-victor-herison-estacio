#include <stdio.h>


int main() {
    int rainha = 8; //esquerda
    int torre = 5; //direita
    int bispo = 5; //diagonal direita

    int count = 0; //contador para loop do while e while

    //rainha 8 esquerda
    printf("Rainha:\n"); // para i menor que 0, i mais 1, print esquerda
    for(int i = 0; i < rainha; i++){
        printf("Esquerda\n");
    }

    //torre 5 direita
    printf("\nTorre:\n");
    do //faça print direita enquanto o contador for menor do que a torre. contador ++ 
    {
        printf("direita\n");
        count++;
    } while (count < torre);


    //zerando o contador pra usar novamente
    count = 0;

    //bispo 5 diagonal direita
    printf("\nBispo\n");
    while(count < bispo){ //enquanto contador for menor que bispo, print alguma coisa. essa logica é usada para as outras pessas tbm
        printf("(Cima, Direita)\n");
        count++;
    }
    count = 0;

    //desafio aventureiro
   printf("\nCavalo:\n");
   //printar uma vez para baixo e então para baixo esquerda
   for (int i = 0; i < 1; i++)
   {
    printf("Baixo\n");
    while (count < 1)
    {
        printf("Baixo\nEsquerda\n");
        count++;
    }
    
   }
   

    return 0;
}
