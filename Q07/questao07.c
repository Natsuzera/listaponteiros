#include <stdio.h>

int main(void){
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");

    for(i = 0 ; i <= 4 ; i++){
        printf("i = %d\n", i);
        printf("vet[%d] = %.1f\n", i, vet[i]);
        printf("*(f + %d) = %.1f\n", i, *(f+i));
        printf("&vet[%d] = %X\n", i, &vet[i]);
        printf("(f + %d) = %X\n", i, f+i);
        printf("\n");
    }
    
    return 0;    
}