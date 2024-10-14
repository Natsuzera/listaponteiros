#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float ordenar(float *arr, int n){
    int temp;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){
    SetConsoleOutputCP(CP_UTF8);
    printf("Digite o tamanho do vetor: \n");
    int n;
    scanf("%d", &n);
    
    float *ptr = (float *)malloc(sizeof(float)*n);
    //inicializando o vetor para evitar erro com valores indeterminados
    for(int i = 0; i<n; i++){
        printf("Digite o %dº valor \n", i+1);
        scanf("%f", &ptr[i]);
    }
    printf("Vetor digitado: \n");
    printf("[ ");
    for(int i =0; i<n; i++){
        printf("%.2f ", ptr[i]);
    }
    printf("]\n");

    //chamando a função para ordenar o vetor
    ordenar(ptr, n);

    printf("Vetor ordenado: \n");
    printf("[ ");
    for(int i =0; i<n; i++){
        printf("%.2f ", ptr[i]);
    }
    printf("]\n");
    
    free(ptr);
    return 0;
}