#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.

void movimentoBispo (int n){
    if (n > 0)
    {
        printf("Cima-Direita \n");
        movimentoBispo(n -1);
    }
    
}

void movimentoTorre (int n){
    if (n > 0)
    {
        printf("Direita \n");
        movimentoTorre(n -1);
    }
    
}

void movimentoRainha (int n){
    if (n > 0)
    {
        printf("Esquerda \n");
        movimentoRainha(n -1);
    }
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int bispo = 0;
    int torre = 0;
    int rainha = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //movimentação do bispo
    printf("Movimentação do Bispo: \n");

    //while (bispo < 5){
    //    printf("Cima-Direita \n");
    //    bispo++;
    //}

    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    movimentoBispo(5);

    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre: \n");

    //do {
    //    printf("Direita \n");
    //    torre++;
    //} while (torre < 5);

    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    movimentoTorre(5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha: \n");

    //for (rainha; rainha < 8; rainha++) {
    //    printf("Esquerda\n");
    //}

    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    movimentoRainha(8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimentação do Cavalo: \n");
    
    //for (int i = 0; i < 1; i++)
    //{
    //    for (int j = 0; j < 2; j++)
    //    {
    //        printf("Cima \n");
    //    }
    //    printf("Direita \n");
    //}

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    int cima, direita;
    for ( cima = 2, direita = 0; cima > 0; direita++)
    {
        if (direita == 2)
        {
            printf("Direita \n");
            break;
        }
        printf("Cima \n");

    }

    return 0;
}