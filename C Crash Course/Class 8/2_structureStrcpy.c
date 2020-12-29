#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	struct book{
		int isbn;
		char name[20];
		char publisher_name[30];
		int year;
	};
	struct book book1 = {1233, "Physics", "Oxford", 2013};
	struct book book2 = {1563, "Chemistry", "Cambridge", 2020};
	
	//using strcpy
	struct book book3;
	book3.isbn = 1340;
 	strcpy(book3.name, "Assamese");
   	strcpy(book3.publisher_name, "Hiren Gohain");
   	book3.year = 2019; 
  	//
  	
	printf("Book1 ISBN: %d\n", book1.isbn);
	printf("Book1 Name: %s\n", book1.name);
	printf("Book1 Publisher Name: %s\n", book1.publisher_name);
	printf("Book1 Year: %d\n\n", book1.year);
	
	printf("Book2 ISBN: %d\n", book2.isbn);
	printf("Book2 Name: %s\n", book2.name);
	printf("Book2 Publisher Name: %s\n", book2.publisher_name);
	printf("Book2 Year: %d\n\n", book2.year);
	
	printf("Book3 ISBN: %d\n", book3.isbn);
	printf("Book3 Name: %s\n", book3.name);
	printf("Book3 Publisher Name: %s\n", book3.publisher_name);
	printf("Book3 Year: %d\n", book3.year);

	return 0;
}