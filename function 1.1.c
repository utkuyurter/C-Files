#include <stdio.h>
#include <stdlib.h>

float convertcentis (float centis);

int main()
{
	float centis;
	float inches;
	
	printf("please enter the value in centimeter:");
	scanf("%f", &centis);
	inches=convertcentis(centis);
	printf("%.2f centimeter is equal to %.2f inches\n", centis,inches);
	
	return 0;
}

float convertcentis (float centis)
{
	return (centis*0.39);
}
