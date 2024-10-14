#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void soma_vetores(int *vetA, int *vetB, int *vetResultado, int n);

int main(void){
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Digite a quantidade de elementos de cada vetor: \n");
    scanf("%d", &n);
    int *ptr1 = (int *)malloc(sizeof(int)*n);
    int *ptr2 = (int *)malloc(sizeof(int)*n);
    int *resultado = (int *)malloc(sizeof(int)*n);
    

    for(int i = 0; i<n; i++){
        printf("Digite o %dº elemento do vetor A: \n", i+1);
        scanf("%d", &ptr1[i]);
    }
    for(int i = 0; i<n; i++){
        printf("Digite o %dº elemento do vetor B: \n", i+1);
        scanf("%d", &ptr2[i]);
    }

    soma_vetores(ptr1, ptr2, resultado, n);
    printf("O vetor de resultados da soma é: \n");
    printf("[ ");
    for(int i = 0; i<n; i++){
        printf("%d ", resultado[i]);
    }
    printf("]\n");

    free(ptr1);
    free(ptr2);
    free(resultado);
    return 0;
}

void soma_vetores(int *vetA, int *vetB, int *vetResultado, int n){
    
    for(int i = 0; i<n; i++){
        *(vetResultado + i) = *(vetA + i) + *(vetB+i); 
    }
    
}