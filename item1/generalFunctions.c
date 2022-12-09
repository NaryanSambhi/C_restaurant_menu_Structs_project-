
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
#include "printFunctions.h"

/////////// MAIN SUPPORTING FUNCTIONS ///////////

//lists all recipes flagged as true (taken)
void listTaken(RECIPE arr[], int num)
{   //loop count taken data
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true) //taken
			printf("%d  ", arr[i].id);
	}
}

//lists all recipes flagged as false (empty)
void listEmpty(RECIPE arr[], int num)
{   //loop count empty data
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == false) //empty
			printf("%d  ", arr[i].id); 
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
		return true; //if as many empty as there are slots return all empty
	else
		return false;

}

bool FullRecpies(RECIPE arr[], int num)
{
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true) //if a recipe is flagged as taken add to final count
			count++;
	}
	if (count == num) // if as many full as there are slots return all as full
		return true;
	else
		return false;

}


/////////////// SAFE GETS ///////////////

//get num only
int NumOnly(int num)
{
	int input;

	//hard rejecting garbage in -> could improve to ask for correct input
	if (scanf("%d", &input) != 1 )
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}
	//if the userinput is above the size of the menu or under zero then it will exit the program 
	if (input > MENUSIZE - 1 || input < 0) //-1 to account for 0 in array
	{ 

		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for getchar
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space isnt added to getchar prompts

	return input;
}