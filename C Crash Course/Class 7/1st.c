#include <stdio.h>


int main(){

    int a = 25;
    int *ptra=&a;

    printf("%d\n", &a);
    printf("%d\n", ptra);
    printf("%d\n", *ptra);

    return 0;
}