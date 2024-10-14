#include <stdio.h>
#include <stdlib.h>
/*
void criandoMemoryLeak() {
    int *ptr = (int *)malloc(sizeof(int) * 10);  // Aloca memória para 10 inteiros
    if (ptr == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    // Uso da memória alocada (simulação)
    for (int i = 0; i < 10; i++) {
        ptr[i] = i * 2;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    // Memory leak: a memória alocada com malloc não é liberada
}

int main() {
    criandoMemoryLeak();  // Chama a função que cria o memory leak
    return 0;
}
*/

//corrigindo possiveis problemas de memory leak

void resolvendoMemoryLeak(){
    int *ptr = (int *)malloc(sizeof(int)*10);

    if(ptr == NULL){
        printf("Erro ao alocar memoria \n");
        return;
    }

    for(int i = 0; i<10; i++){
        ptr[i]= i*2;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    //liberando a memoria anteriormente alocada
    free(ptr);


}


int main(void){
    
    resolvendoMemoryLeak();
    return 0;
}