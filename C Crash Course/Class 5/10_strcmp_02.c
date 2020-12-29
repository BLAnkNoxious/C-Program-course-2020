#include <stdio.h>
#include <string.h>

int main(){

    char str1[50] = "Hello";
    char str2[50] = "hello";
    /*
    if str2's word is smaller than str1(hello or hi)
    then output is -1
    */
    int result = strcmp(str1, str2);

    printf("%d", result);
}