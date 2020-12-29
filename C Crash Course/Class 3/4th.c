#include <stdio.h>

int main(){
    int a = 11;
    int b = 5;
    int c;

    c = a + ++b;

    printf("Addition of a and b is %d", c);
}