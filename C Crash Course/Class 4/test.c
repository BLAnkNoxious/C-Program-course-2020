#include <stdio.h>


int main(){
    int a , b, c;
    char o;

    printf("enter the 1st number:");
    scanf("%d", &a);

    printf("enter the operator:");
    scanf(" %c", &o);

    /*
    while ((getchar()) != '\n');
    */    

    printf("enter the 2nd number:");
    scanf("%d", &b);

    switch (o)
    {
    case '+':
        c = a + b;
        printf("Addition of and b is: %d", c);
        break;

    case '-':
        c = a - b;
        printf("Subtraction of and b is: %d", c);
        break;

    case '*':
        c = a * b;
        printf("Multiplication of and b is: %d", c);
        break;

    case '/':
        c = a / b;
        printf("Division of and b is: %d", c);
        break;
    
    default:
    printf("enter a valid operator");
        break;
    }
    return 0;
}