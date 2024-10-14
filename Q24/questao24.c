#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void multMatrizes(int **matriz1, int **matriz2, int **matriz3, int linhasA, int colunasA, int colunasB){

    for(int i = 0; i<linhasA; i++){
        for(int j = 0; j<colunasB; j++){
            for(int k = 0; k<colunasA; k++){
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}




int main(void){
    SetConsoleOutputCP(CP_UTF8);

    int linhas1, colunas1, linhas2, colunas2;

    printf("Primeira matriz: \n");
    printf("Digite o número de linhas: \n");
    scanf("%d", &linhas1);
    printf("Digite o número de colunas: \n");
    scanf("%d", &colunas1);

    printf("Segunda matriz: \n");
    printf("Digite o número de linhas: \n");
    scanf("%d", &linhas2);
    printf("Digite o número de colunas: \n");
    scanf("%d", &colunas2);

    if(colunas1 != linhas2){
        printf("Impossível multiplicar as matrizes\n");
        return 0;
    }

    int **matrizA = (int **)malloc(sizeof(int *)*linhas1);
    int **matrizB = (int **)malloc(sizeof(int *)*linhas2);

    //alocando as colunas da matrizA
    for(int i = 0; i<linhas1; i++){
        matrizA[i] = (int *)malloc(sizeof(int)*colunas1);
    }

    //alocando as colunas da matrizB
    for(int i = 0; i<linhas2; i++){
        matrizB[i] = (int *)malloc(sizeof(int)*colunas2);
    }

    printf("Digite os valores da primeira matriz: \n");
    for(int i = 0; i<linhas1; i++){
        for(int j = 0; j<colunas1; j++){
            printf("Digite o valor da posição [%d][%d]: \n", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz: \n");
    for(int i = 0; i<linhas2; i++){
        for(int j = 0; j<colunas2; j++){
            printf("Digite o valor da posição [%d][%d]: \n", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }


    //alocando a matriz C
    //obs: a matriz C terá o número de linhas da matrizA e o número de colunas da matrizB
    //uma vez que iremos multiplicar a matrizA pela matrizB AxB;    
    int **matrizC = (int **)malloc(sizeof(int *)*linhas1);

    for(int i = 0; i<linhas1; i++){
        matrizC[i] = (int *)malloc(sizeof(int)*colunas2);
    }

    //iniciando a matrizC com zeros para evitar erros na função de multiplicação
    for(int i = 0; i<linhas1; i++){
        for(int j = 0; j<colunas2; j++){
            matrizC[i][j] = 0;
        }
    }

    multMatrizes(matrizA, matrizB, matrizC, linhas1, colunas1, colunas2);


    //imprimindo a matrizA
    printf("Imprimindo a matrizA\n");
    for(int i = 0; i<linhas1; i++){
        printf("[ ");
        for(int j = 0; j<colunas1; j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("]\n");
    }

    //imprimindo a matrizB
    printf("Imprimindo a matrizB\n");
    for(int i = 0; i<linhas2; i++){
        printf("[ ");
        for(int j = 0; j<colunas2; j++){
            printf("%d ", matrizB[i][j]);
        }
        printf("]\n");
    }

    //imprimindo a C=AxB
    printf("Imprimindo a matriz C=AxB\n");
    for(int i = 0; i<linhas1; i++){
        printf("[ ");
        for(int j = 0; j<colunas2; j++){
            printf("%d ", matrizC[i][j]);
        }
        printf("]\n");
    }
    

    
    for(int i = 0; i < linhas1; i++) {
        free(matrizA[i]); // Libera cada linha alocada
    }
    free(matrizA); // Libera o array de ponteiros

    // Liberando a matrizB
    for(int i = 0; i < linhas2; i++) {
        free(matrizB[i]); // Libera cada linha alocada
    }
    free(matrizB); // Libera o array de ponteiros

    // Liberando a matrizC
    for(int i = 0; i < linhas1; i++) {
        free(matrizC[i]); // Libera cada linha alocada
    }
    free(matrizC); // Libera o array de ponteirosfree(matrizA);

    return 0;
}