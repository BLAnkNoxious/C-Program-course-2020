#include <stdio.h>


int main(){

    int a = 25;
    int b;
    int c;
    int *ptrb=&b;
    int *ptrc=NULL;
    int *ptra=&a;

    printf("%d\n", &a);
    printf("%d\n", ptra);
    printf("%d\n", *ptra);
    printf("%d\n", &b);
    printf("%d\n", ptrb);
    printf("%x\n", ptra);
    printf("%p\n", ptra);
    printf("%x\n", &ptra);
    printf("%d\n", ptrc);

    return 0;
}