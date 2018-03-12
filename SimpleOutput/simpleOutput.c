#include <stdio.h>

int main() 
{
	char name[100];
	char username[100];
	int age;

	printf("Enter your name: ");
	// array variables do not need & in scanf, because scanf provides a memory address of the variable being used, therefore, having an & for an array would be redundant.
    scanf("%s", name);

	printf("Enter your username: ");
	scanf("%s", username);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Your name is %s, your username is %s, and your age is %d.\n", name, username, age);	
	return 0;
}


