#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;
    int c;

    c = a + b++;

    printf("Addition of a and b is %d\n", c);
    printf("Value of b is %d", b);
}