#include <stdio.h>

int main(void){

    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("p = %p, x = %i, y = %i", p, x, *p);

    return 0;
}