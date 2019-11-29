#include <stdio.h>
#include <stdlib.h>
#include "Information.h"

int main()
{
	Person P;

	printf("Please input your name: ");
	scanf_s("%s", &P.name, 8);
	printf("Please input your gender(0 for women,1 for man): ");
	scanf_s("%d", &P.age);
	printf("Please input your age: ");
	scanf_s("%d", &P.age);

	printf("\nHi! %s. ", P.name);
	if 
		(P.gender == 0) printf("You are a %d-year-old women.\n", P.age);
	else 
		printf("You are a %d-year-old men.\n", P.age);
	system("pause");
	return 0;
}