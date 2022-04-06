#include <stdio.h>
#include <stdbool.h> // bool, true, false
#include "tabuleiro.h"

void TabuleiroInicializa (char nomeArquivo[], Tabuleiro *t){ //*t é um tabuleiro que foi recebido como parâmetro
    FILE *fp;
    fp = fopen (nomeArquivo, "r");
    if (fp == NULL) { // nao foi carregado o arquivo.
        printf ("O arquivo nao foi carregado");
    }
    else {
        for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                fscanf (fp, "%d", &(t->M[i][j])); //lendo um int e gravando na posição [i][j] da matriz
            }
        }
    }
}
void verificaLinha (Tabuleiro *t, int linha){ 
    for (int j=0; j<9; j++){
        for (int z=j+1; z<9; z++){
            if (t -> M[linha][j] == t ->M[linha][z] && t -> M[linha][j] != 0){
                printf ("Linha %d: (%d, %d) e (%d,%d)\n", linha+1, linha+1, j+1, linha+1, z+1);
            }
        }
    }

}
void verificaColuna (Tabuleiro *t, int coluna){
    for (int i=0; i<9; i++){
        for (int w=i+1; w<9; w++){
            if (t-> M[i][coluna] == t -> M[w][coluna] && t-> M[i][coluna] !=0){
                printf ("Coluna %d: (%d, %d) e (%d, %d)\n", coluna+1, i+1, coluna+1, w+1, coluna+1);
            }
        }
    }
}


void EhValido (Tabuleiro *t){  
    for (int i=0; i<9; i++){
        verificaLinha (t, i);
    }
    for (int j=0; j<9; j++){
        verificaColuna (t,j);
    }            
}

Celula* defineVazias (Tabuleiro t){
    return NULL;
}

int* valoresValidos (Tabuleiro t, Celula c){
     return NULL;
}