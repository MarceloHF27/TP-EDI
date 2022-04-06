#ifndef TABULEIRO_H
#define TABULEIRO_H

struct celula {
    int linha, coluna;

};

struct tabuleiro {
    int M[9][9];

};

typedef struct celula Celula;
typedef struct tabuleiro Tabuleiro;

Celula* defineVazias (Tabuleiro);
void TabuleiroInicializa (char [], Tabuleiro*);
void EhValido (Tabuleiro*);
int* valoresValidos (Tabuleiro, Celula);
void verificaLinha (Tabuleiro*, int);

#endif