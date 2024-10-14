#include <stdio.h>

int main(void){
    
    float aloha[10], coisas[10][5], *pf, value = 2.2;

    int i = 3;

    aloha[2] = value; // 2.2
    scanf("%f", &aloha); //compila porem não faz sentido pois aloha é um vetor de floats e quando uso &aloha estou passando o
    //aloha = "value"; invalido pois aloha é um vetor de floats
    printf("%f", aloha[0]);
    coisas[4][4] = aloha[3];
    //coisas[5] = aloha; // invalido
    //pf = value; invalido pois pf é um ponteiro de float e value é um float
    pf = aloha; // valido pois pf é um ponteiro de float e aloha é um vetor de floats e todo vetor é um ponteiro para o primeiro elemento

    return 0;
}