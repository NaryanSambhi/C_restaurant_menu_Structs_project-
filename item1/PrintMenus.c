#define _CRT_SECURE_NO_WARNINGS

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  menu functions file


/////////////// MAIN MENUS ///////////////

#include <stdio.h>


char printmenuMain(void)
{
	printf_s("\n");
	printf_s("**************************************\n");
	printf_s("**            Welcome to            **\n");
	printf_s("**         Cafe Menu Manager        **\n");
	printf_s("**************************************\n");

	printf("\nTo choose a function, enter its label: \n");
	printf("a) Breakfast\n");
	printf("b) Lunch\n");
	printf("c) Dinner\n");
	printf("q) Quit\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf(" %c", &choice); //return to main input

	return choice;
}

char printmenuBreakfast(void)
{
	printf_s("\n");
	printf_s("**************************************\n");
	printf_s("**            Welcome to            **\n");
	printf_s("**       Breakfast Menu Manager     **\n");
	printf_s("**************************************\n");

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
	scanf(" %c", &choice); //return to main input

	return choice;
}

char printmenuLunch(void)
{
	printf_s("\n");
	printf_s("**************************************\n");
	printf_s("**           Welcome to             **\n");
	printf_s("**        Lunch Menu Manager        **\n");
	printf_s("**************************************\n");

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
	scanf(" %c", &choice); //return to main input

	return choice;
}

char printmenuDinner(void)
{
	printf_s("\n");
	printf_s("**************************************\n");
	printf_s("**           Welcome to             **\n");
	printf_s("**       Dinner Menu Manager        **\n");
	printf_s("**************************************\n");

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
	scanf(" %c", &choice); //return to main input

	return choice;
}

/////////////// SUB CHOICE MENUS ///////////////



/////////////// MODIFY RECIPE MENUS ///////////////
