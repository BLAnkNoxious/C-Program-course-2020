#include <stdio.h>

void printstar(int n){

    int i;

    for(i=0;i<n;i++ ){
    printf("%c", '*');
    }
}


int main(){
    
    printstar(10);
    return 0;

}