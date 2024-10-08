#include <stdio.h>

int f(int a, int *pb, int **ppc){
    int b, c;
    **ppc += 1;
    c = **ppc; 
    *pb += 2; 
    b = *pb; 
    a += 3; 
    return a + b + c;

}


int main(void){
    int c, *b, **a;
    c = 5;
    b = &c;
    a = &b;
    printf("%d\n", f(c, b, a));
        
    return 0;
}


/*

a é o ponteiro para o ponteiro b, ou seja, ppc = a.
b aponta para c, ou seja, pb = b.
O valor de c é 5 e é passado como o argumento a na função.
Dentro da função f:

**ppc += 1:
ppc é um ponteiro duplo, ou seja, ppc = a.
*ppc é b, que aponta para c. Então, **ppc é o valor de c, que inicialmente é 5.
A expressão **ppc += 1 incrementa o valor de c em 1, alterando c de 5 para 6.
c = **ppc:
Novamente, **ppc é o valor de c (que agora é 6 após o incremento).
O valor de c local (na função f) é agora 6.

*pb += 2:
pb é o ponteiro para c. Assim, *pb é o valor de c, que agora é 6.
*pb += 2 incrementa o valor de c em mais 2, alterando c de 6 para 8.
b = *pb:
b é uma variável local da função f. Ela recebe o valor de *pb, que é o valor de c atualizado, ou seja, 8.

a += 3:
a foi passado com valor 5 na chamada da função.
Agora a é incrementado em 3, portanto o novo valor de a é 5 + 3 = 8.

Finalmente, a função retorna a + b + c, ou seja, 8 + 8 + 6 = 22.

*/