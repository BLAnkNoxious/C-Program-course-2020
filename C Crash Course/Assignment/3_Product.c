#include <stdio.h>

int product(){
     int a, b , c, d;

    printf("Enter 1st number :");
    scanf("%d", &a);

    printf("Enter 2nd number :");
    scanf("%d", &b);

    printf("Enetr 3rd number :");
    scanf("%d", &c);

    d = a * b * c;
    return d;
}
int main(){
     int d, x;

     x = product(d);

    printf("Product is : %d", x);

    return 0;
}