#include <stdio.h>
#include <math.h>

double squareRoot(){
    int a;
    float c;

    printf("Enter a number :");
    scanf("%d", &a);

    c = sqrt(a);
    return c;
}

int main(){
    float c, x;

    x = squareRoot(c);

    printf("Square root is : %f", x);

    return 0;
}