#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;
    int c, d, e;

    c = a <= b;
    d = a >= b;

    e = c&&d;

    printf("Value of e is %d\n", e);
}