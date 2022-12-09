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
#include "printFunctions.h" 

//the main menu the user sees with all the required options 
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

//menu for the type of recipe
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

//menu for the user to update the recipe
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

//menu for the user to update the cook part of the recipe 
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

//menu for the user to update the ingredients 
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

//menu for the user to update the recipe 
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

//menu to display the range inputed by the user 
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

//function that prints only the breakfast type of the menu
void Breakfast(RECIPE arr[], int num)
{

	for (int i = 0; i < num; i++)
	{   
		if (arr[i].status == true && arr[i].type == breakfast) //if statement checks if the status is true (therefore there is an item slot)
		{                                                      //also the if statement checks if the type is Breakfast
			printRecipeSimple(arr, i); //prints the simple recipe menu
		}
	}
}

//function that only prints the Lunch type of the menu 
void Lunch(RECIPE arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true && arr[i].type == lunch)//if statement checks if the status is true (therefore there is an item slot)
                                                   //also the if statement checks if the type is Lunch
		{
			printRecipeSimple(arr, i);
		}
	}
}

//function that only prints the Dinner type of the menu
void Dinner(RECIPE arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true && arr[i].type == dinner)//if statement checks if the status is true (therefore there is an item slot)
			                                               //also the if statement checks if the type is dinner
		{
			printRecipeSimple(arr, i);
		}
	}
}