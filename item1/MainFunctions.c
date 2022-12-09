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

//displays all the recipe for the user to pick from the list
void displayAllRecipes(RECIPE arr[], int num)
{
	
	//RETURN IF NO RECIPES FOUND
	bool empty = NoRecipes(arr, num);
	if (empty == true)
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

//searches for the specfic recipe based on the user input 
void searchRecipe(RECIPE arr[], int num)
{
	//grab user input
	char temp[MAX] = { '\0' };

	printf("\nInput recipe name: ");
	scanf("%s", temp);

	//incase customer searched with lowercase name
	temp[0] = toupper(temp[0]);

	//stop overflow and exits the program
	if (strlen(temp) > MAX)
	{
		printf("\nOVERFLOW ERROR");
		exit(EXIT_FAILURE);
	}
	
	//search for name from recipes
	for (int i = 0; i < num; i++)
	{
		if ((strcmp(arr[i].recipeName, temp) == 0))  //if found return
		{
			printf("\nRecipe Found:\n\n");
	
			PRINTALL(arr, i);
			
			return;
		}
	}
	printf("\nRecipe Not Found\n");
}


//manage recipes

//adds a recipe to the list
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

	//grab input from the user 
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
	else //if the user types n to cancel then it will cancel the process
		printf("\nRecipe Creation Cancelled\n\n");

}

//deletes a recipe that the user would have added in the previous function 
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
		// if the user decides not to delete a recipe this message would output
		printf("\nDeletion Cancelled\n");

}

// displays the single recipe 
void displaySingleRecipe(RECIPE arr[], int num)
{

	//RETURN IF NO RECIPES FOUND
	bool empty = NoRecipes(arr, num);
	if (empty == true)
	{
		printf("\nNo Recipes detected\n");
		return;
	}

	//displays all simple recipes to chose more info on:
	displayAllRecipes(arr, num);

	printf("\n\nPlease select a recipe to print full recipe data: ");

	//grab which recipe to view more information on: 
	int recipe = NumOnly(arr, num);
	if (arr[recipe].status == false)
	{
		printf("\nRecipe slot is empty\n");
		return;
	}

	//print complex info using the print all function
	PRINTALL(arr, recipe);

}

void recipeRange(RECIPE arr[], int num)
{

	//check if there are recipe slots taken yet
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\nNo recipes assigned yet\n");
		return;
	}

	//get recipe to modify
	printf("Please select which recipe range to view: \n");

	//start function
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printRangeMenu();
		switch (choice)
		{
		case 'a': Breakfast(arr, num);
			printf("\n");

			break;
		case 'b': Lunch(arr, num);
			printf("\n");
			break;
		case 'c': Dinner(arr, num);
			printf("\n");
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

////////////////// MODIFY //////////////////

//updates the recipe based on the user input 
void updateRecipe(RECIPE arr[], int num)
{
	//check if there are recipe slots taken yet
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\nNo recipes assigned yet\n");
		return;
	}

//get recipe to modify
	printf("Please select which recipe to modify by ID number: \n");

	displayAllRecipes(arr, num); //prints available recipes

	printf("\n\n");

	//grab input
	int recipe = NumOnly(arr, num);
	if (arr[recipe].status == false)
	{
		printf("\nRecipe slot empty\n");
		return;
	}

	PRINTALL(arr, recipe);

//start function
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateMenu();
		switch (choice)
		{
		case 'a': modifyCook(arr, recipe);
			break;
		case 'b':modifyIngredients(arr, recipe);
			break;
		case 'c': modifyRecipe(arr, recipe);
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

void modifyCook(RECIPE arr[], int recipe )
{
	recipe = 1;
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateHowToCookMenu();
		switch (choice)
		{
		case 'a': GetPrepTime(arr, recipe);  
			break;					
		case 'b': GetCookTime(arr, recipe);  
			break;
		case 'c': GetReadyTime(arr, recipe);
			break;								
		case 'd': GetTemprature(arr, recipe);
			break;										
		case 'e': GetCookMethod(arr, recipe); // not working
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


void modifyIngredients(RECIPE arr[], int recipe)
{
	recipe = 1;
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateIngredientsMenu();
		switch (choice)
		{
		case 'a': GetIngredients(arr, recipe);
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

void modifyRecipe(RECIPE arr[], int recipe)
{

	recipe = 1;

	bool continueProgram = true;
	while (continueProgram) {

		char choice = printUpdateRecipeMenu();
		switch (choice)
		{
		case 'a': GetMealType(arr, recipe); // not working
			break;
		case 'b': GetRecipeName(arr, recipe); // not working
			break;
		case 'c': GetPrice(arr, recipe); 
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