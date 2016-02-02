#include <stdlib.h>
#include <stdio.h>

float convertToInches(float num) ;

float convertToCentimeters(float num);


int main()
{
	
	float centimeters , inches , selection , result ;
	
	printf("Press 1 for centimeters --> inches\nPress 2 for inches --> centimeters\nSelection:") ;
	scanf("%f", &selection) ;
	
	if (selection == 1)
	{
		printf("Please enter the value in centimeters:") ;
		scanf("%f" , &centimeters) ;
	
		printf("%.2f centimeters is %.2f inches" , centimeters , convertToInches(centimeters)) ;
	}
	else if (selection == 2)
	{
		printf("Please enter the value in inches:") ;
		scanf("%f" , &inches) ;
		
		printf("%.2f inches is %.2f centimeters" , inches , convertToCentimeters(inches)) ;
	}
	else
	{
		printf("Please make a valid selection!") ;
	}
	
	return 0;
}

float convertToInches(float num)
{
	float result = num * 0.393701 ;
	
	return result ;
}

float convertToCentimeters(float num)
{
	
	float result = num * 2.54 ;
	
	return result;
}











