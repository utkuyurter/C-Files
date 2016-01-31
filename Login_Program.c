#include <stdlib.h>
#include <stdio.h>

int main()
{
	int password = 1234 , username = 123456 , passwordInput , usernameInput , trial = 1; /*Initialize variables*/
	
	printf("username:") ; /*Takes username input from user*/
	scanf("%i" , &usernameInput) ;
		
	printf("password:"); /*Takes password input from user*/
	scanf("%i" , &passwordInput) ;
	
	while(passwordInput != password || usernameInput != username) /*If input values are not equal to initialized variable values, program warns 
	the user in the following loop and gives 3 attempts*/
	{
		printf("\nInvalid credentials , program terminates after 3 failed attempts.\nNumber of failed attempts:%i\n\n" , trial) ;
		
		printf("username:") ;
		scanf("%i" , &usernameInput) ;
		
		printf("password:");
		scanf("%i" , &passwordInput) ;
		
		trial ++ ; /*Number of failed attempts is incremented each time user inputs an invalid username or password*/
		
		if (trial == 3 && (passwordInput != password || usernameInput != username)) /*When the number of failed attempts reaches 3, program terminates*/
		{
			printf("\nInvalid credentials , program terminates after 3 failed attempts.\nNumber of failed attempts:%i\n\nYou cannot access the system. The program terminates!" , trial) ;
			exit(1) ; /*Exits the program*/
		}
	}

	if (passwordInput == password && usernameInput == username) /*When both username and password are correct, the previous loop exits and 
	program enters another loop that requires the user to input a new password*/
	{
		printf("\nSuccesful first login! Please change your password immediately.\n") ;
	
		while (passwordInput == password || passwordInput < 1000 || passwordInput > 9999) /*This loop repeats until the user enters a new password that is different from the temporary
	one and is a 4-digit integer value*/
		{
			printf("New password must be 4-digit long and different from the temporary password.\n\nNew Password:") ;
			scanf("%i" , &passwordInput) ;	
		}
		printf("You have changed your password succesfully! Please re-login.\n\n") ; /*If the new password meets the requirements, the program accepts it and sets the value 
		of 'password' as the input value. After that, the program asks the user to re-login.*/
		password = passwordInput ;
	} 
	
	printf("username:") ;  /*Asks the user to re-enter value of 'username'*/
	scanf("%i" , &usernameInput) ;
		
	printf("password:") ; /*Asks the user to enter new value of 'password'*/
	scanf("%i" , &passwordInput) ;
	
	trial = 1 ; /*Global variable 'trial' is set to 1 to be used in the next loop*/
	
	while(passwordInput != password || usernameInput != username) /*This loop repeates until the user enters username and new value of password correctly.*/
	{
		printf("\nInvalid credentials , program terminates after 3 failed attempts.\nNumber of failed attempts:%i\n\n" , trial) ;

		printf("username:") ;
		scanf("%i" , &usernameInput) ;
		
		printf("password:");
		scanf("%i" , &passwordInput) ;
		
		trial ++ ;	/*Number of failed attempts is incremented each time user inputs an invalid username or password*/
		
		if (trial == 3 && (passwordInput != password || usernameInput != username)) /*When the number of failed attempts reaches 3, program terminates*/
		{
			printf("\nInvalid credentials , program terminates after 3 failed attempts.\nNumber of failed attempts:%i\n\nYou cannot access the system. The program terminates." , trial) ;
			exit(1) ;
		}	
	}
	printf("\nAccess is granted!!!") ;	/*When user enters both username and password correctly, the login succeeds and program terminates.*/
	
	return 0;
}
