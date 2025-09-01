#include <stdio.h>

enum moves
{
    UP,
    DOWN,
    LEFT,
    RIGHT,
    DIAGONAL_UP_RIGHT,
    DIAGONAL_UP_LEFT,
    DIAGONAL_DOWN_RIGHT,
    DIAGONAL_DOWN_LEFT
};

struct ChessPieces
{
    char name[10]; // apenas 1 letra (A até H) + '\0'
    enum moves move[10];
    int move_count; // quantos movimentos realmente tem
};

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

const char *getMoveName(enum moves m)
{
    switch (m)
    {
    case UP:
        return "Cima";
    case DOWN:
        return "Baixo";
    case LEFT:
        return "Esquerda";
    case RIGHT:
        return "Direita";
    case DIAGONAL_UP_RIGHT:
        return "Cima, Direita";
    case DIAGONAL_UP_LEFT:
        return "Cima, Esquerda";
    case DIAGONAL_DOWN_RIGHT:
        return "Baixo, Direita";
    case DIAGONAL_DOWN_LEFT:
        return "Baixo, Esquerda";
    default:
        return "UNKNOWN";
    }
};

int main()
{

    const struct ChessPieces pieces[] = {
        {"Torre", {RIGHT, RIGHT, RIGHT, RIGHT, RIGHT}, 5},
        {"Bispo", {DIAGONAL_UP_RIGHT, DIAGONAL_UP_RIGHT, DIAGONAL_UP_RIGHT, DIAGONAL_UP_RIGHT, DIAGONAL_UP_RIGHT}, 5},
        {"Rainha", {LEFT, LEFT, LEFT, LEFT, LEFT, LEFT, LEFT, LEFT}, 8},
        // cavalo é especial → não cabe no mesmo enum (precisaria de outro sistema)
    };

    int total_pieces = sizeof(pieces) / sizeof(pieces[0]);

    for (int i = 0; i < total_pieces; i++)
    {
        printf("Peca: %s\n", pieces[i].name);
        printf("Movimentos: ");
        for (int j = 0; j < pieces[i].move_count; j++)
        {
            printf("%s ", getMoveName(pieces[i].move[j]), "%s - ");
        }
        printf("\n\n");
    }

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
