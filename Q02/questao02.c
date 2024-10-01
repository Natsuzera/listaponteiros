#include <stdio.h>

int main(void){

    int i=5, *p;
    p = &i;
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);

    //se i ocupa o endereço 4094 na memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho.
    //p = 4094
    //p+1 = 4096
    //*p+2 = 7 pois *p recebe o conteudo de i que é 5 e soma 2
    //**&p = 5 pois **&p é o mesmo que i
    //3**p = 15 pois *p é 5 e multiplica por 3
    //**&p+4 = 9 pois **&p é 5 e soma 4

    return 0;
}