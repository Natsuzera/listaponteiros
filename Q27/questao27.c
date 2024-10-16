#include <stdio.h>
#define TAM 10

int funcao1(int vetor[], int v){
    int i;
    for(i = 0; i < TAM; i++){
        if(vetor[i] == v){
            return i;
        }
    }
    return -1;
}

int funcao2(int vetor[], int v, int i, int f){
    int m = (i+f)/2;
    if(v == vetor[m]){
        return m;
    }
    if(i >= f){
        return -1;
    }
    if(v > vetor[m]){
        return funcao2(vetor, v, m+1, f);
    } else {
        return funcao2(vetor, v, i, m-1);
    }
}

int main(void){
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
    return 0;
}

//1 afirmação verdadeira, ambos as funções retornam o indice que encontrou o valor 15, ou seja 7
// como a impressão é %d - %d ficamos com 7-7

//2 afirmação falsa, no pior caso a função1 fara TAM interações, ou seja O(n), ja a função2 é uma busca binaria
// e fara O(log(n)) interações, ou seja, ela é bem mais rapida que a função1; apesar da limitação que requer que
// o vetor esteja ordenado