#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(void){
    SetConsoleOutputCP(CP_UTF8);

    int linhas, colunas, planos;
    printf("Digite o numero de planos(Profundidade) da matriz tridimensional: \n");
    scanf("%d", &planos);
    printf("Digite o numero de linhas da matriz tridimensional: \n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz tridimensional: \n");
    scanf("%d", &colunas);

    int escolha;
    printf("Escolha qual plano da matriz tridimensional deseja imprimir: \n");
    scanf("%d", &escolha);
    
    if(escolha >= planos){
        printf("Plano inexistente\n");
        return 0;
    }

    //Alocando os planos da matriz tridimensional
    int ***matriz = (int ***)malloc(planos*sizeof(int **));
    for(int i = 0; i < planos; i++){
        matriz[i] = (int **)malloc(linhas*sizeof(int *));
        for(int j = 0; j < linhas; j++){
            matriz[i][j] = (int *)malloc(colunas*sizeof(int));
        }
    }

    //Preenchendo a matriz tridimensional
    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    for(int i = 0; i < planos; i++){
        for(int j = 0; j < linhas; j++){
            for(int k = 0; k < colunas; k++){
                matriz[i][j][k] = rand() % 2; // Preenchendo com 0 ou 1 aleatoriamente
            }
        }
    }

    //Imprimindo o plano escolhido
    printf("Plano escolhido:\n");
    for(int i = 0; i < linhas; i++){
        printf("[ ");
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[escolha][i][j]);
        }
        printf("]\n");
    }
    printf("\n");

    printf("Escolha qual elemento da matriz tridimensional deseja alterar: \n");
    int altLinha, altColuna, altPlano, valor;
    printf("Digite o plano do elemento: \n");
    scanf("%d", &altPlano);
    printf("Digite a linha do elemento: \n");
    scanf("%d", &altLinha);
    printf("Digite a coluna do elemento: \n");
    scanf("%d", &altColuna);
    printf("Digite o valor do elemento que deseja inserir: \n");
    scanf("%d", &valor);

    if(altPlano >= planos || altLinha >= linhas || altColuna >= colunas){
        printf("Elemento inexistente\n");
        return 0;
    }

    printf("Plano escolhido antes da alteração:\n");
    for(int i = 0; i < linhas; i++){
        printf("[ ");
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[altPlano][i][j]);
        }
        printf("]\n");
    }
    printf("\n");

    matriz[altPlano][altLinha][altColuna] = valor;

    printf("Plano escolhido após a alteração:\n");
    for(int i = 0; i < linhas; i++){
        printf("[ ");
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[altPlano][i][j]);
        }
        printf("]\n");
    }

    
    //Liberando a memória alocada
    for(int i = 0; i < planos; i++){
        for(int j = 0; j < linhas; j++){
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }
    free(matriz);

    
    return 0;
}