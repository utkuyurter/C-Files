#include <stdio.h> 
#include <stdlib.h>

int main() 

{
	int number ;
	int number2 ;
	
	
	printf("Please enter a number:") ;
	scanf("%d" , &number) ;
	
	printf("Please enter another number:") ;
	scanf("%d" , &number2) ;
	
	float avarage = (number + number2) / 2 ;
	
	printf("The avarage of the two numbers is %.2f" , avarage) ;
	
	if (avarage >= 100) 
	{
		printf("\nThis is so big!") ;
	}
	
	else if (avarage <= 0) 
	{
		printf("\nThis is so small!") ;
	}
	
	else
	{
		printf("\nThis is okay") ;
	}
	
	return 0 ;
}
