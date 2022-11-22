
// PROG71985 - F22
// Naryan Sambhi - DEC 2022
//
// menu function file

//prints menu header

#include <stdio.h>

char printmenu(void)
{
	printf_s("\n");
	printf_s("**********************************************\n");
	printf_s("**               Welcome to                 **\n");
	printf_s("**           Cafe Chat Noir Menu            **\n");
	printf_s("**********************************************\n");

	printf("\nTo choose a function, enter its label: \n");
	printf("a) Search Recipes\n");
	printf("b) Display All Recipes\n");
	printf("c) Display Range of Recipes\n");
	printf("d) Display Single Recipe\n");
	printf("e) Add Recipe\n");
	printf("f) Delete Recipe\n");
	printf("g) Update Existing Recipe\n");
	printf("h) Quit\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf_s(" %c", &choice); //return to main input

	return choice;
}

