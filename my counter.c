#include <stdio.h>
#include <stdlib.h>

int counter(int num , int end, int interval) ;

int main()
{
	int num , end , interval;
	
	
	printf("Please enter a starting number:") ;
	scanf("%i" ,&num);
	
	printf("Please enter the limit of the counter:") ;
	scanf("%i", &end) ;
	
	printf("PLease enter the interval:");
	scanf("%i", &interval) ;
	
	counter(num , end, interval) ;

	return 0;
	
}

int counter(int num , int end, int interval)
{
	for(num ; num <= end ; num = num + interval)
	{
		printf("%i\n" , num) ;
	}
	
	return 0; 
}


