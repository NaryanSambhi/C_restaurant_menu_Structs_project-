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
				printRecipeHowTo(arr, i);
				printRecipeIngredients(arr, i);
			}
			else
				continue; //may be redundent

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


//////////////////////////////////////////////////////////

	GetRecipeAll(arr, recipe);

	GetIngredients(arr, recipe);

	GetCookAll(arr, recipe);


//CONFRIM
	printf("\n\nCONFIRM DETAILS:\n");

	printRecipeSimple(arr, recipe);

	printRecipeIngredients(arr, recipe);


	printRecipeHowTo(arr, recipe);


//////////////////////////////////////////////////////////


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

//DISPLAY COMPLEX INFROMATION FOR SINGLE SELECTED RECIPE
	printRecipeSimple(arr, recipe);
	printRecipeHowTo(arr, recipe);
	printRecipeIngredients(arr, recipe);

}

void updateRecipe(RECIPE arr[], int num) 
{
	printf("\nupdate recipes function here\n");

	//menu to pick which recipe to update
		//if not taken reject 
	
	//choose what struct data to overwrite

	//confirm
}

void recipeRange(RECIPE arr[], int num) 
{
	printf("\nrecipe range function here\n");
}