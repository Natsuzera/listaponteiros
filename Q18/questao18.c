#include <stdio.h>
#include <windows.h>
/*
um ponteiro para função em C,é uma variável que armazena o endereço de uma função
assim como os ponteiros para dados armazenam endereços de variáveis.
Isso é possivel porque as funções possuem endereços fixos, tambem chamado de ponto de entrada ad função
o que é útil em diversas situações como:
passagem de funções como parâmetros, criação de arrays de funções ou implementação de callbacks.
*/

int soma(int a, int b){
    
    return a+b;
}

int subtracao(int a, int b){
    return a-b;
}

int multiplicacao(int a, int b){
    return a*b;
}

int divisao(int a, int b){
    if(b == 0){
        printf("Erro: Divisão por zero");
        return 0;
    }

    return a/b;

}

//exemplo com callback
int executarOperacao(int (*operacao)(int, int), int x, int y){
    return operacao(x ,y);
}

int main(void){
    SetConsoleOutputCP(CP_UTF8);
    //criando um ponteiro para função e determinando seus parametros
    //(*ptrFunc) cria o ponteiro com seu nome (int, int), determina o tipo de dados ou seja os parametros da função
    int (*ptrFunc)(int, int);
    //o ponteiro agora aponta para a função soma
    ptrFunc = soma;
    //chamando o ponteiro para função e armazenando o resultado
    int resultado = ptrFunc(7, 8);
    printf("O resultado da soma é: %d\n", resultado);

    //ultilizando por meio de callback
    //nesse metodo estou passando a função como parametro, ja que a função tem um ponteiro para função como parametro
    resultado = executarOperacao(soma, 7, 8);
    printf("A soma dos dois elementos é: %d\n", resultado);
    resultado = executarOperacao(subtracao, 6, 5);
    printf("A subtracao dos dois elementos é: %d\n", resultado);

    //ultilizando um array de funções
    //aqui estou criando um ponteiro para um array, onde cada elemento é uma função
    int (*operacoes[4])(int, int) = {soma, subtracao, multiplicacao, divisao};

    printf("A soma dos dois elementos é: %d\n", operacoes[0](7, 8));
    printf("A subtracao entre os dois elementos é: %d\n", operacoes[1](7, 8));
    printf("A multiplicação entre os dois elementos é: %d\n", operacoes[2](7, 8));
    printf("A divisão entre os dois elementos é: %d\n", operacoes[3](4, 2));
    
    
    
    return 0;
}