#include <stdio.h>

//não tem saida, o codigo não compila, devido a tentativa de incrementar um valor constante
void main(){
  int const *x = 3;
  //printf("%d", ++(*x));
}