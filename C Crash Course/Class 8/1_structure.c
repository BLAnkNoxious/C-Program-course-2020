#include <stdio.h>
#include <conio.h>

int main(){
    struct book
    {
        int id;
        char name[20];
        char publisher_name[30];
        int year;
    };
    struct book book1 = {
       1233,"Physics","Oxford",2014
     };

    struct book book2 = {
       1563,"Chemistry","Cambridge",2019
     };

     printf("\nBook details :\n\n");
     printf("Book1 ID : %d\n", book1.id);
     printf("Book1 Name : %s\n", book1.name);
     printf("Book1's Publisher Name : %s\n", book1.publisher_name);
     printf("Book1 Year : %d\n\n", book1.year);

      printf("Book2 ID : %d\n", book2.id);
     printf("Book2 Name : %s\n", book2.name);
     printf("Book2's Publisher Name : %s\n", book2.publisher_name);
     printf("Book2 Year : %d\n", book2.year);

     return 0;
}