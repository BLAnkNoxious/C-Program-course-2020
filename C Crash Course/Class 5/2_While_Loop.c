#include <stdio.h>

int main(){

    int n;
    
    int sum = 0;
    int i = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    /*
    for(int i = 1; i <= n; i++){
        sum = sum + (i*i);
    }
    */
   
    while ( i <= n) {
       sum = sum + (i*i);
       i++;
    }

    printf("Sum: %d", sum);
}