#include <stdio.h>
#include <string.h>

int main(){

    char destination[50] = "hello";
    char source[50] = " world";
    strcat(source, destination);

    printf("%s", source);
}