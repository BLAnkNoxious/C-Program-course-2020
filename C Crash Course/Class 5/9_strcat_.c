#include <stdio.h>
#include <string.h>

int main(){

    char destination[50] = "hello";
    char source[50] = "world";
    strcat(destination, source);

    printf("%s", destination);
}