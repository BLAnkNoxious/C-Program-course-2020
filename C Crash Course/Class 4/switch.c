#include <stdio.h>

int main(){
    char operator;
    double a, b;

    printf("Enter an operator: ");
    scanf("%c", &operator);

    printf("Enter two number: ");
    scanf("%lf %lf",&a, &b);

    switch (operator)
    {
    case '+':
        printf("%.11f + %.11f = %.11f", a, b, a+b);
        break;

        case '-':
        printf("%.11f - %.11f = %.11f", a, b, a-b);
        break;

        case '*':
        printf("%.11f * %.11f = %.11f", a, b, a*b);
        break;

        case '/':
        printf("%.11f / %.11f = %.11f", a, b, a/b);
        break;

        
    
    default:
        printf("Error! operator is not correct");
        break;
    }
    return 0;
}