#include <stdio.h>

int main(){
    
    int i, j;
    int *p, *q;

    i = 3;
    j = 5;

    p = &i;
    *q = &j; //erro de compilação, tentativa de atribuir um ponteiro ao valor de int
    p = &*&i;
    //i = (*&)j; //erro de compilação, syntax sem sentido por conta do (), *& tem que ser seguido de um ponteiro
    i = *&j;
    i = *&*&j;
    q = *p; //erro de compilação, tentativa de atribuir um valor int a um ponteiro
    i = (*p)++ + *q;

    
    return 0;
}