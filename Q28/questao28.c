#include <stdio.h>

char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
char **b[] = {a + 3, a + 2, a + 1, a};
char ***c = b;

int main() {
    printf("%s ", **++c);
    printf("%s ", *--*++c + 3);
    printf("%s ", *c[-2] + 3);
    printf("%s ", *c[-1]);
    printf("%s ", c[-1][-1] + 1);
    printf("%s\n", *(*(c-1)-1)+1);
    return 0;
}
