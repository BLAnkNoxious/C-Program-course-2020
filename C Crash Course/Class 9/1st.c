#include <stdio.h>
#include <stdlib.h>

signed int b = 20;
int main(){
    int n, k;
    scanf("%d", &n);
    int*ptr = (int*)malloc(n * sizeof(int)); //sizeof operator
    /*if(ptr == NULL){
        printf("Memory not allowed");
    }
    else {
        printf("Memory allocation successfull")
    }*/
}