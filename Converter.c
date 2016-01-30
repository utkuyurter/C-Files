//Author: Utku Yurter
#include <stdio.h>  
#include <stdlib.h>

int main() /* Starting Point of the program*/
{
	float celcius , fahrenheit , centimeters , inches , subSelection , mainSelection ;  /* Define variables */
	  
	printf("<Please choose the converter type>\nPress 1 for length converter and hit 'Enter'\nPress 2 for temperature converter and hit 'Enter'\nYour Selection:") ;
	scanf("%f" , &mainSelection) ; /* Scan and assign the user input to variable 'mainSelection'*/

	if (mainSelection == 1) /*If the value of the variable 'mainSelection' is 1, this statement is executed*/
	{
		printf("\n<Please choose the length conversion method>\n") ;
		printf("Press 1 for centimeters --> inches and hit 'Enter'\nPress 2 for inches --> centimeters and hit 'Enter'\nYour Selection:") ;
		scanf("%f" , &subSelection) ; /*Scans user input and assigns the value to variable 'selection'*/
		
		if (subSelection == 1) /* If the value of the variable 'subSelection' is 1, this statement will be executed*/
		{
			printf("\nEnter the value in centimeters:") ;
			scanf("%f" , &centimeters) ;
			inches = centimeters * 0.39370 ;
			printf("\n%.5f centimeters = %.5f inches" , centimeters , inches) ;	
		}
	    else if (subSelection == 2) /* If the value of the variable 'subSelection' is 2, this statement will be executed*/
	    {
	    	printf("\nEnter the value in inches:") ;
	    	scanf("%f" , &inches) ;
	    	centimeters = inches / 0.39370 ;
	    	printf("\n%.5f inches = %.5f centimeters" , inches , centimeters) ;
		}
		else /*Warns the user if an invalid input is entered*/
		{
			printf("\nPlease make a valid selection !") ;
		}
	}
	else if (mainSelection == 2) /*If the value of the variable 'mainSelection' is 2, this statement is executed*/
	{
		printf("\n<Please choose the temperature conversion method>\n") ;
		printf("Press 1 for celcius --> fahrenheit and hit 'Enter'\nPress 2 for fahrenheit --> celcius and hit 'Enter'\nYour Selection:") ;
		scanf("%f" , &subSelection) ;
		
		if (subSelection == 1) /* If the value of the variable 'subSelection' is 1, this statement will be executed*/
		{ 
			printf("\nEnter the value in celcius:") ;
			scanf("%f" , &celcius) ;
			fahrenheit = (celcius * 1.8) + 32 ;
			printf("\n%.5f celcius = %.5f fahrenheit" , celcius , fahrenheit) ; 
		} 
		else if (subSelection == 2) /* If the value of the variable 'subSelection' is 2, this statement will be executed*/
		{
			printf("\nEnter the value in fahrenheit:") ;
			scanf("%f" , &fahrenheit) ;
			celcius = (fahrenheit - 32) / 1.8 ;
			printf("\n%.5f fahrenheit = %.5f celcius" , fahrenheit , celcius) ; 
		}
		else /*Warns the user if an invalid input is entered*/
		{
			printf("\nPlease make a valid selection!") ;
		}
	}
	else /*Warns the user if an invalid input is entered*/
	{
		printf("\nPlease make a valid selection!") ;
	}
	return 0 ; /*Exit point of the program*/
}
