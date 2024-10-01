#include <stdio.h>

int main(){

    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    printf("a) \n");
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor); //20

    /* (b) */
    printf("b) \n");
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp); //29.0

    /* (c) */
    printf("c) \n");
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux); //devem imprimir P

    /* (d) */
    printf("d) \n");
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux); //deve imprimir e

    /* (e) */
    printf("e) \n");
    p3 = nome;
    printf("%c \n", *p3); //deve imprimir P pois p3 aponta para o primeiro caractere de nome

    /* (f) */
    printf("f) \n");
    p3 = p3 + 4;
    printf("%c \n", *p3); //deve imprimir e pois p3 aponta para o quinto caractere de nome

    /* (g) */
    printf("g) \n");
    p3--;
    printf("%c \n", *p3); //deve imprimir t pois p3 aponta para o quarto caractere de nome

    /* (h) */
    printf("h) \n");
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade); //deve imprimir 31 pois p4 aponta para o primeiro elemento do vetor

    /* (i) */
    printf("i) \n");
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade); //deve imprimir 45 pois p5 aponta para o segundo elemento do vetor

    /* (j) */
    printf("j) \n");
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade); //deve imprimir 27 pois p4 aponta para o terceiro elemento do vetor

    /* (l) */
    printf("l) \n");
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade); //deve imprimir 31 pois p4 aponta para o primeiro elemento do vetor

    /* (m) */
    printf("m) \n");
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5); //deve imprimir 45 pois p5 aponta para o segundo elemento do vetor

    /* (n) */
    printf("n) \n");
    p5++;
    printf("%d \n", *p5); //deve imprimir 27 pois p5 aponta para o terceiro elemento do vetor


    return 0;
}