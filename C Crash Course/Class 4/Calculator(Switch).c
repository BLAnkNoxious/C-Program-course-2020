#include <stdio.h>

int main(){

    int a, b, c;
    char o;

    printf("enter the first number, second number:");
    scanf("%d%d", &a, &o, &b);

    printf("enter the operator:");
    scanf("%c" &c);

    switch(o) {
        case '+':
            c = a + b;
            printf("Addition of a and b is: %d", c);
            break;

        case '-':
            c = a - b;
            printf("Subtraction of a and b is: %d", c);
            break;

        case '*':
            c = a * b;
            printf("Multiplication of a and b is: %d", c);
            break;

        case '/':
            c = a / b;
            printf("Division of a and b is: %d", c);
            break;

       

        default:
        printf("Enter a valid operator.");
        break;
    }
}