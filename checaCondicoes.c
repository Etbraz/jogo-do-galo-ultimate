//
// Created by pc on 13/04/2022.
//
#include "checaCondicoes.h"

# define N 3


char* linha(char **p, int linha)
{
    int i, j;

    char* pecas[N-1]={};

    for(j = 0; j < N; j++){
        pecas[j] = getPos(p, linha,j);
    }


    return pecas;
}

char coluna(char **p, int coluna)
{
    char* pecas[N-1]={};

    int i, j;

        for (i = 0; i < N; ++i) {
            pecas[i] = p[i][coluna];
        }

    return pecas;
}


char diagP(char **p)
{
    int i, j;
    char* pecas[N]; // peças na diagonal principal

    int vit = 0; // indica se ouve vitória 0 para não 1 para sim;

    for(i = 0; i < N-1 ; i++){
        pecas[i] = p[i][i];
    }
    return pecas ;
}

char* diagS(char **p){
    int i, j;
    char pecas[N]; // peças na diagonal secundária
    for(i = 0, j = N ; i < N ; i++, j--){
        pecas[0] = p[i][j];
    }
    return pecas;
}

int vitoria(char **p, int pos){
    int i;
    int vezes = 0;          // numero de vezes uma peça aparece

    char pecasC[N] = {}; // pecas nas colunas
    char pecasL[N] = {}; // peças nas linhas
    char pecasP[N] = {}; // peças na diagonal principal
    char pecasS[N] = {}; // peças na diagonal secundária
    printf(pos);

    for(i = 0; i < N; i++ ){

        if(pecas[i] == X){
            vezes ++;
            if(vezes == N){
                return 1;
            }
        }

        if(pecas[i] == O){
            vezes ++;
            if(vezes == N){
                return 1;
            }
        }

    }

}
