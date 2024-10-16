#include <stdio.h>
#include <stdlib.h>

//o vazamento de memoria ocorre quando, alocamos memoria atravez do malloc, e esquecemos de liberar novamente
//podendo ocorrer que essa memoria encha, acarretando em diversos problemas;
//das alternativas apresentadas, a que apresenta o erro especifico de memory leak é a C
//pois a liberação de memoria free(s) pode não ocorrer devido ao if que verifica se o size>50 retornando -1
//caso essa condição seja verdadeira, a liberação de memoria não ocorre;

int f(char *data){
    void *s;
    s = malloc(50);
    int size = strlen(data);
    if(size>50){
        return -1;
    }
    free(s);
    return 0;
}