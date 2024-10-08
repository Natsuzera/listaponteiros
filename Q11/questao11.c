#include <stdio.h>

/*
*primeiro erro é que a variável s não foi inicializada, logo ela aponta para um endereço de memória indefinido
*o segundo erro é que foi atribuido valor x e nome dentro da própria declaração da struct, isso não é permitido em C
*o correto seria fazer a atribuição dos valores de x e nome dentro da função main


struct teste{
  int x = 3;
  char nome[] = "jose";
};

main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->nome);
}
*/


//correção do código
//primeiro importamos as bibliotecas necessárias
#include <string.h>
#include <stdlib.h>


struct teste{
  int x;
  char nome[10]; //aqui é necessário definir o tamanho do array, pois o compilador precisa saber o tamanho do array para alocar memória para ele
};

int main(void){
    
    //agora inicializamos a variável s, alocando memória para ela
    //o (struct teste *) é um cast para o tipo struct teste, pois malloc retorna um ponteiro void
    //entretanto em C não é necessário fazer o cast, pois o cast é feito implicitamente, mas é uma boa prática fazer o cast e torna o codigo mais legivel

    struct teste *s = (struct teste*) malloc(sizeof(struct teste));
    //verificamos se a memória foi alocada corretamente, não é estritamente necessário, mas é uma boa prática
    if (s == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        return 1;
    }
    //atribuimos valores para x e nome
    s->x = 3;
    strcpy(s->nome, "jose");
    //continua igual ao original
    printf("%d\n", s->x);
    printf("%s\n", s->nome);
    //liberamos a memória alocada pelo malloc
    free(s);
    
    return 0;
}

