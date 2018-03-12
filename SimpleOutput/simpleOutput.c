// A program that prompts the user for their name, their username, and their age, and then outputs it back.

#include <stdio.h>

int main() 
{
	char name[100];
	char username[100];
	int age;

	printf("Enter your name: ");
    	scanf("%s", name);

	printf("Enter your username: ");
	scanf("%s", username);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Your name is %s, your username is %s, and your age is %d.\n", name, username, age);	
	return 0;
}


