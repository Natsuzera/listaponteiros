#include <stdio.h>

int main(void){
    
    int vet[] = {4,9,13};
    int i;
    for(i = 0; i < 3; i++){
        printf("%d ", *(vet + i));
    }
    //o resultado esperado é 4 9 13
    //pois vet é um ponteiro para o primeiro elemento do vetor vet, então vet + i é um ponteiro para o i-ésimo elemento do vetor vet
    // e o * é necessário para acessar o valor do i-ésimo elemento do vetor vet
    for(i=0; i<3; i++){
        printf("%X ", vet + i);
    }
    //o resultado esperado é o endereço de memória de cada elemento do vetor vet
    
    return 0;
}