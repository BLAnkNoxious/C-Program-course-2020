#include <stdio.h>

int main(){

    int i, number, sum = 0;
    myLabel:
    
    for (int i = 1; i <= 10; i++) {
        printf("Enter the number %d :", i);
        scanf("%d", &number);

        if(number < 0){
            goto myLabel;
        }
        if(number > 50){
            continue;
        }

        sum += number;

    }
    printf("Sum = %d", sum);
}