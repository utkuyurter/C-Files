#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i = 0, j = 25 ;
	
	
	char array[] = {'a' , 'b', 'c' , 'd', 'e', 'f', 'g', 'h' , 'i' , 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w'
	, 'x', 'y', 'z'} ;
	
	//printf("%c" , array[24]) ;
	
	
	for ((i = 0) && (j = 25) ; (i <= 25) && (j >= 0) ;  (j--) &&  (i++) )
	{
		printf("\n%c%c" , array[i] , array[j]) ;
	}
	
	
	
	return 0;
}
