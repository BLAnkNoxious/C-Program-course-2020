#include <stdio.h>

int Difference(){
    int a, b , c;
    printf("Enter 1st number :");
    scanf("%d", &a);

    printf("Enter 2nd number :");
    scanf("%d", &b);

    c = a - b;
    return c;
}

int main(){
    int c, x;

    x = Difference(c);

    printf("Difference is %d:", x);
    return 0;
}