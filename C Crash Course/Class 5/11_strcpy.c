#include <stdio.h>
#include <string.h>

int main(){

    char str1[50] = "Old values";
    char str2[50] = "New values";
    strcpy(str1, str2);

    printf("%s", str1);
}