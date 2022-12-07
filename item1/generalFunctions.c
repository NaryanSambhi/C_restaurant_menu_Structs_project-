
#define _CRT_SECURE_NO_WARNINGS

#define FIRST_RECIPE_NUM 1  //to define where first recipe starts (instead of 0)



// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  menu function file

#include <stdlib.h>

/////////////// MENUS ///////////////

#include <stdio.h>
#include "Recipe.h"
#include <string.h>


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




/////////// MAIN SUPPORTING FUNCTIONS ///////////

void listTaken(RECIPE arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true) //taken
			printf(" %d  ", arr[i].id + FIRST_RECIPE_NUM);
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
	if (scanf("%d", &input) != 1 || input > num || input <= 0)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

	return input;
}

/*
//get string
void GetUserInputForRecipe(RECIPE arr[], int numrecipe) {

	//void get recipename
	char recipename[NAMELEN];

	printf("Enter the name for the recipe: ");

	fgets(recipename, NAMELEN, stdin);

	if (strlen[arr[recipename].recipename] > MAX - OFFSET) {

		printf("Overflow error");
		exit(EXIT_FAILURE);
	}

	//function call of the remove new line where it will remove the new line created by fgets 
	removeNewLine(recipename);

	printf("\n");

}
// removes the newline created by fgets
void removeNewLine(char input[]) {

	// loops thorugh the length of the string that is inputed, then takes that newline and makes it into a null terminator, thus forcing c to end the null terminator and not display it 
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == '\n') {
			input[i] = '\0';
		}
	}
}
*/
