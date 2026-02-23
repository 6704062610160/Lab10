#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
	int BookID; 
	char BookTitle[50]; 
} BBook; 

void DisplayData(struct Books *CBook){ 
	printf("Book ID : %d \n",(*CBook).BookID); 
	printf("Book Title : %s \n",CBook->BookTitle); 
} 

int main() { 
	printf("Enter Book ID : ");      
	scanf("%d",&BBook.BookID); 
	printf("Enter Book Title : ");   
	scanf("%s",BBook.BookTitle); 
	DisplayData(&BBook);
	return 0; 
} 

