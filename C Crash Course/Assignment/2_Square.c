#include <stdio.h>

int square(){
    int a, b;

    printf("Enter a number :");
    scanf("%d", &a);

    b = a * a;
    return a, b;

}

int main(){
    int b, x;

    x = square(b);

    printf("Square is : %d", x);

    return 0;
}