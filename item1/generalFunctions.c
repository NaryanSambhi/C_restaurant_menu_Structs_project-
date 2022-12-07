
#define _CRT_SECURE_NO_WARNINGS

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  general function file

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Recipe.h"

/////////// MAIN SUPPORTING FUNCTIONS ///////////

//lists all recipes flagged as true (taken )
void listTaken(RECIPE arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true) //taken
			printf(" %d  ", arr[i].id);
	}
}
//lists all recipes flagged as false (empty)
void listEmpty(RECIPE arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == false) //empty
			printf(" %d  ", arr[i].id); 
	}
}


/////////// GENERAL BOOLS ///////////
bool NoRecipes(RECIPE arr[], int num)
{
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == false) //if a recipe is flagged as empty add to final count
			count++;
	}
	if (count == num)
		return true;
	else
		return false;

}

//bool for when full or empty logic is required
		//only used once, added for future reusability sake
bool FullRecpies(RECIPE arr[], int num)
{
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true) //if a recipe is flagged as taken add to final count
			count++;
	}
	if (count == num)
		return true;
	else
		return false;

}


/////////////// SAFE GETS ///////////////

//get num only

//ensures num input only 
int NumOnly(int num)
{
	int input;

	//hard rejecting garbage in -> could improve to ask for correct input
	if (scanf("%d", &input) != 1) 
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

	return input;
}


int GetTakenRecipe(RECIPE arr[], int num)
{
	int recipe;
	recipe = NumOnly(num);

	while (arr[recipe].status == false) //ensures only taken recipes can be accessed
	{
		printf("\nRecipe is empty\n");
		listTaken(arr, num);
		printf("\nPlease enter a valid recipe that is displayed above: ");
		recipe = NumOnly(num);
	}
}

int GetEmptyRecipe(RECIPE arr[], int num)
{
	int recipe;
	recipe = NumOnly(num);

	while (arr[recipe].status == true) //ensures only non-taken recipes can be accessed
	{
		printf("\nRecipe is taken\n");
		listEmpty(arr, num);
		printf("\nPlease enter a valid recipe that is displayed above: ");
		recipe = NumOnly(num);
	}
}
