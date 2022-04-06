#include <stdio.h>
#include <stdlib.h>
#include "tabuleiro.h"

int main (int argc, char* argv[]) {
    if (argc != 2){ //para verificar se tem mais de dois argumentos
        printf ("Passou número de argumento inválido"); 
    }
    else {
        Tabuleiro tabuleiroDoJogo; //cria uma matriz [9][9]
        TabuleiroInicializa (argv[1] , &tabuleiroDoJogo); //preenche a matriz com os valores do arquivo
        EhValido (&tabuleiroDoJogo); 

    
    }
    return 0;   
}