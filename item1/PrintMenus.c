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
#include "GetRecipesFromUser.h"

char printmenuMain(void)
{
	printf_s("\n");
	printf_s("**************************************\n");
	printf_s("**            Welcome to            **\n");
	printf_s("**         Cafe Menu Manager        **\n");
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


char PrintMealTypeMenu(void)
{
	printf("\nTo choose a function, enter its label: \n");
	printf("a) Breakfast\n");
	printf("b) Lunch\n");
	printf("c) Dinner\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf(" %c", &choice); //return to main input

	return choice;
}


/////////////// SUB CHOICE MENUS ///////////////

char printUpdateMenu(void)
{   
	printf("\nTo choose a function, enter its label: \n");
	printf("a) To edit How To Cook\n");
	printf("b) To edit Ingredients\n");
	printf("c) To edit Recipe\n");
	printf("d) Quit\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf(" %c", &choice); //return to main input

	return choice;
}


/////////////// MODIFY RECIPE MENUS ///////////////

char printUpdateHowToCookMenu(void)
{
	printf("\nTo choose a function, enter its label: \n");
	printf("a) Update/Change Preparation Time\n");
	printf("b) Update/Change Cook Time\n");
	printf("c) Update/Change Ready Time\n");
	printf("d) Update/Change Temperature\n");
	printf("e) Update/Change the Cooking Method\n");
	printf("f) Quit\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf(" %c", &choice); //return to main input

	return choice;
}

char printUpdateIngredientsMenu(void)
{
	printf("\nTo choose a function, enter its label: \n");
	printf("a) Update/Change the Ingredients\n");
	printf("b) Quit\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf(" %c", &choice); //return to main input

	return choice;
}

char printUpdateRecipeMenu(void)
{
	printf("\nTo choose a function, enter its label: \n");
	printf("a) Update/Change the Meal Type\n");
	printf("b) Update/Change Recipe Name\n");
	printf("c) Update/Change Price of the Recipe\n");
	printf("d) Quit\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf(" %c", &choice); //return to main input

	return choice;
}


/////////////// RANGE ///////////////

char printRangeMenu(void)
{
	printf("\nTo choose a function, enter its label: \n");
	printf("a) Display Breakfast menu\n");
	printf("b) Display Lunch menu\n");
	printf("c) Display Dinner menu\n");
	printf("d) Quit\n");

	char choice;
	printf("\nEnter Choice: ");
	scanf(" %c", &choice); //return to main input

	return choice;
}

void Breakfast(RECIPE arr[], int num)
{

	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true && arr[i].type == breakfast)
		{
			printRecipeSimple(arr, i);
		}
	}
}

void Lunch(RECIPE arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true && arr[i].type == lunch)
		{
			printRecipeSimple(arr, i);
		}
	}
}

void Dinner(RECIPE arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true && arr[i].type == dinner)
		{
			printRecipeSimple(arr, i);
		}
	}
}