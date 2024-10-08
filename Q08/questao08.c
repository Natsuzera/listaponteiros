#include <stdio.h>

int main(void){
    
    int pulo[5] = {1,2,3,4,5};

    //para imprimir o valor do terceiro elemento do vetor pulo podemos usar a seguinte notação:
    // *(pulo + 2) o "*" é necessario pois se fizemos apenas (pulo + 2) o resultado será o endereço de memória do terceiro elemento do vetor
    // e não o valor do terceiro elemento do vetor, isso se da porque o nome de um vetor é um ponteiro para o primeiro elemento do vetor
    printf("%d\n", *(pulo + 2));
    
    return 0;
}