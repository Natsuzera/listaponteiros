#include <stdio.h>


int main(void) {
    char *char_ptr = (char *)4092; //char de 1 byte
    //como por padrão o int é de 4 bytes, foi tentando usar o int16_t que é de 2 bytes, mas por algum motivo não estava funcionando então
    //para fins didaticos, foi usado o short que é de 2 bytes
    short *int_ptr = (short *)4092; // short de 2 bytes
    float *float_ptr = (float *)4092; // float de 4 bytes
    double *double_ptr = (double *)4092; // double de 8 bytes

    printf("char x: %p\n", char_ptr);
    printf("char x+1: %p\n", (char_ptr + 1));
    printf("char x+2: %p\n", (char_ptr + 2));
    printf("char x+3: %p\n", (char_ptr + 3));

    printf("int x: %p\n", int_ptr);
    printf("int x+1: %p\n", (int_ptr + 1));
    printf("int x+2: %p\n", (int_ptr + 2));
    printf("int x+3: %p\n", (int_ptr + 3));

    printf("float x: %p\n", float_ptr);
    printf("float x+1: %p\n", (float_ptr + 1));
    printf("float x+2: %p\n", (float_ptr + 2));
    printf("float x+3: %p\n", (float_ptr + 3));

    printf("double x: %p\n", double_ptr);
    printf("double x+1: %p\n", (double_ptr + 1));
    printf("double x+2: %p\n", (double_ptr + 2));
    printf("double x+3: %p\n", (double_ptr + 3));

    return 0;
}