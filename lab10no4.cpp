#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
	int BookID; 
	char BookTitle[50]; 
} ComputerBook; 

void DisplayData(struct Books ComputerBook){ 
	printf("Book ID : %d \n",ComputerBook.BookID); 
	printf("Book Title : %s \n",ComputerBook.BookTitle); 
} 

int main() { 
	printf("Enter Book ID : ");      
	scanf("%d",&ComputerBook.BookID); 
	printf("Enter Book Title : ");   
	scanf("%s",ComputerBook.BookTitle); 
	DisplayData(ComputerBook);
	return 0; 
} 

