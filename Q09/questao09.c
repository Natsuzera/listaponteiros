#include <stdio.h>

int main(void){
    
    int mat[4], *p, x;
    p = mat + 1;
    printf("%x\n", p);
    p = mat;
    printf("%x\n", p);
    //todas as operações acimas são validas, mas a operação abaixo não é exatamente valida ou pode não ser o que se espera
    //visto que não inicializamos o array mat, então o valor de mat é indefinido, logo o valor de mat + 1 é indefinido
    //uma forma de corrigir isso seria inicializar o array mat como por exemplo mat[4] = {1,2,3,4};
    x = (*mat);
    printf("%d\n", x);

    
    return 0;
}