#define _CRT_SECURE_NO_WARNINGS

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
// Main Functions file

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "generalFunctions.h"
#include "MainFunctions.h"
#include "Recipe.h"
#include "printFunctions.h"
#include "GetRecipesFromUser.h"
#include "PrintMenus.h"

//display recipes


/////////// MAIN ///////////


void displayAllRecipes(RECIPE arr[], int num)
{

	//RETURN IF NO RECIPES FOUND
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\nNo Recipes detected\n");
		return;
	}
	//else
	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true) //if recipe slot flagged as taken, print data
		{								//this avoids printing old data from deleted recipes
			printRecipeSimple(arr, i);
		}
	}

}

void searchRecipe(RECIPE arr[], int num)
{
	//grab user input
	char temp[MAX] = { '\0' };

	printf("\nInput recipe name: ");
	scanf("%s", temp);

	//incase customer searched with lowercase name
	temp[0] = toupper(temp[0]);

	//stop overflow
	if (strlen(temp) > MAX)
	{
		printf("\nOVERFLOW ERROR");
		exit(EXIT_FAILURE);
	}
	//else
	//search for name from recipes
	for (int i = 0; i < num; i++)
	{
		if ((strcmp(arr[i].recipeName, temp) == 0))  //if found return
		{
			printf("\nRecipe Found\n");
			printRecipeSimple(arr, i);

			//ask for complex info?
			printf("\nWould you like to print the recipes information?\n");
			printf("\nEnter 'y' to confirm or 'n' to cancel: ");

			char ch = getchar();
			if (ch == 'y')
			{
				PRINTALL(arr, i);
			}
			return;
		}
	}
	printf("\nRecipe Not Found\n");
}


//manage recipes
void addRecipe(RECIPE arr[], int num)
{
	//check if there are recipe slots available
	bool full = FullRecpies(arr, num);
	if (full == true)
	{
		printf("\nAll recipe slots occupied");
		return;
	}

	//list recipe slots that can be written into
	listEmpty(arr, num);

	printf("\n\nPlease select a free menu slot to assign the recipe: ");

	//grab input
	int recipe = NumOnly(arr, num);
	if (arr[recipe].status == true)
	{
		printf("\nRecipe already assigned in selected slot \n\n");
		return;
	}


	//get recipes
	GETALL(arr, recipe);

	//CONFRIM
	printf("\n\nCONFIRM DETAILS:\n");

	//print
	PRINTALL(arr, recipe);

	//get input
	printf("\n\n\nEnter 'y' to confirm or 'n' to cancel: ");

	char ch = getchar();
	if (ch == 'y')
	{
		printf("\nRecipe Created\n\n");
		arr[recipe].status = true; //flag status to taken 
	}
	else
		printf("\nRecipe Creation Cancelled\n\n");

}

void deleteRecipe(RECIPE arr[], int num)
{
	//check if there are recipe slots taken yet
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\nNo recipes assigned yet\n");
		return;
	}

	printf("Please choose which recipe to delete \n");
	listTaken(arr, num); //lists taken recipes that can be deleted

	printf("\n");
	//grab input
	int recipe = NumOnly(arr, num);
	if (arr[recipe].status == false)
	{
		printf("\nRecipe slot already empty\n");
		return;
	}

	///CONFIRM
	printf("\n\nCONFIRM DETAILS:\n");

	printRecipeSimple(arr, recipe);

	//get input
	printf("\nEnter 'y' to confirm or 'n' to cancel: ");
	char ch = getchar();
	if (ch == 'y')
	{
		printf("\nRecipe Deleted\n");
		arr[recipe].status = false; //flag seat status to empty -> does not delete data, only flags for overwriting  
	}
	else
		printf("\nDeletion Cancelled\n");

}

void displaySingleRecipe(RECIPE arr[], int num)
{

	//RETURN IF NO RECIPES FOUND
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\nNo Recipes detected\n");
		return;
	}

	//displays all simple recipes to chose more info on:
	displayAllRecipes(arr, num);

	printf("\n\nPlease select a recipe to print full recipe data");

	//grab which recipe to view more information on: 
	int recipe = NumOnly(arr, num);
	if (arr[recipe].status == false)
	{
		printf("\nRecipe slot is empty\n");
		return;
	}

	//print complex info
	PRINTALL(arr, recipe);

}

void updateRecipe(RECIPE arr[], int num)
{
	printf("\nupdate recipes function here\n");

	displaySingleRecipe(arr, num);
	//MENU
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateMenu();
		switch (choice)
		{
		case 'a': modifyCook(arr, num);
			break;
		case 'b':modifyIngredients(arr, num);
			break;
		case 'c': modifyRecipe(arr, num);
			break;
		case 'd':
			continueProgram = false;
			break;
		default:
			printf("\ninvalid entry\n\n\n");
			break;
		}
	}

}

void modifyCook(RECIPE arr[], int num)
{
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateHowToCookMenu();
		switch (choice)
		{
		case 'a': GetPrepTime(arr, num);  //--------------------
			break;						//						|
		case 'b': GetCookTime(arr, num);  //----------------
			break;//										|	|
		case 'c': GetReadyTime(arr, num);//----------------------------> all these have issues...when we selecct from this menu it doesnt work
			break;//										|	|
		case 'd': GetTemprature(arr, num);//----------------
			break;//											|
		case 'e': GetCookMethod(arr, num);//--------------------
			break;
		case 'f':
			continueProgram = false;
			break;
		default:
			printf("\ninvalid entry\n\n\n");
			break;
		}
	}
}

void modifyRecipe(RECIPE arr[], int num)
{
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateRecipeMenu();
		switch (choice)
		{
		case 'a': GetMealType(arr, num);
			break;
		case 'b': GetRecipeName(arr, num);
			break;
		case 'c': GetPrice(arr, num);
			break;
		case 'd':
			continueProgram = false;
			break;
		default:
			printf("\ninvalid entry\n\n\n");
			break;
		}
	}
}

void modifyIngredients(RECIPE arr[], int num)
{

	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateIngredientsMenu();
		switch (choice)
		{
		case 'a': GetIngredients(arr, num);
			break;
		case 'b':
			continueProgram = false;
			break;
		default:
			printf("\ninvalid entry\n\n\n");
			break;
		}
	}

}

void recipeRange(RECIPE arr[], int num)
{   //gets user input for a type of meal (breakfast, lunch, dinner) and it will display only that type of recipe 
	printf("\nrecipe range function here\n");
}