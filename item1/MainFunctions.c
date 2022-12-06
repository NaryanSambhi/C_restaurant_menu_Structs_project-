#define _CRT_SECURE_NO_WARNINGS

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
// Main Functions file

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "generalFunctions.h"
#include "generalFunctions.h"
#include "Recipe.h"

#define FIRST_RECIPE_NUM 1  //to define where first recipe starts (instead of 0)

//display recipes


/////////// FOR OTHERS ///////////

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

/////////// PRINT DATAS ///////////

	/*
//how to cook
typedef struct cook {
	int preptime;
	int cooktime;
	int readytime;
	int temp;
	enum COOKINGMETHOD { bake, grill, microwave, frying } cookingmethod; //add more here
}COOK;

//ingredients
typedef struct ingredients {
	char name[MAXLEN];
	int num;
}INGREDIENTS;

//recipe top layer struct
typedef struct recipe {

	int id; //numer of item in list of slots 0-5
	char recipeName[MAX];
	int price;
	bool status; //acts as a flag to when slot is written in or not

	INGREDIENTS ingredients;
	COOK cook;

}RECIPE;
	*/




void printRecipeSimple(RECIPE arr[], int num)
{
	printf("\n %d: %s, $%d", arr[num].id, arr[num].recipeName, arr[num].price);

	//any enum ids under here:  

}

void printRecipeHowTo(RECIPE arr[], int num)
{

	//ints 
	printf("\nPrep-time: %d", arr[num].cook.preptime);
	printf("\n\nCook-time: %d", arr[num].cook.cooktime);
	printf("\n\nReady-time: %d", arr[num].cook.readytime);
	printf("\n\nTemprature: %d", arr[num].cook.temp);


	//cook type
	if (arr[num].cook.cookingmethod == bake)
		printf("\n\nCooking Method: Bake");
	if (arr[num].cook.cookingmethod == grill)
		printf("\n\nCooking Method: Grill");
	if (arr[num].cook.cookingmethod == microwave)
		printf("\n\nCooking Method: Microwave");
	if (arr[num].cook.cookingmethod == frying)
		printf("\n\nCooking Method: Fry");

}

void printRecipeIngredients(RECIPE arr[], int num)
{
	printf("unfinished");//needs to be able to print array of ingridents
}

//void printRecipeComplex(RECIPE arr[], int num)



/////////// MAIN ///////////


void displayAllRecipes(RECIPE arr[], int num) 
{

//RETURN IF NO RECIPES FOUND
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\n\nNo Recipes detected\n\n");
		return;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			if (arr[i].status == true) //if recipe slot flagged as taken, print data
			{								//this avoids printing old data from deleted recipes
				printRecipeSimple(arr, i);
			}
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
				continue;

			return;
		}
	}
	printf("\nRecipe Not Found\n");
}


//manage recipes
void addRecipe(RECIPE arr[], int num) 
{
	printf("\nadd recipes function here\n\n\n");

	//check if there are recipe slots available
	bool full = FullRecpies(arr, num);
	if (full == true)
		printf("\nAll recipe slots occupied");
	else
	{


		//user picks a slot
			//display all available slots

		//pick slot

		//if slot is already occupied either reject or ask if user wants to overwrite slot

		//get recipe information function 



		//CONFRIM DETAILS
		//print confirm

		//print AllData function --> unimplement but will print all recipe data created

		/*
		//get input
		printf("\nEnter 'y' to confirm or 'n' to cancel: ");

		char ch = getchar();
		if (ch == 'y')
		{
			printf("\Recipe Created");
			//arr[recipe - 1].status = true; //flag status to taken 
		}
		else
			printf("\nAssignment Cancelled");
		*/
	}
}

void deleteRecipe(RECIPE arr[], int num) 
{
	//check if there are recipe slots taken yet
	bool emp = NoRecipes(arr, num);
	if (emp == true)
		printf("\nNo recipes assigned yet");
	else
	{
		listTaken(arr, num); //lists taken seats that can be deleted


		//user picks a slot
		int recipe;
		printf("\nPlease pick a taken Recipe slot: ");
		recipe = NumOnly(num);

		while (arr[recipe - FIRST_RECIPE_NUM].status == false) //ensures only taken recipes can be deleted to avoid garbage and breaking program
		{
			printf("\nRecipe is already empty\n");
			listTaken(arr, num);
			printf("\nPlease enter an occupied recipe slot that is displayed above: ");
			recipe = NumOnly(num);
		}

///CONFIRM

		printf("\n\nCONFIRM DETAILS:\n");
		printRecipeSimple(arr, recipe - FIRST_RECIPE_NUM);

		//get input
		printf("\nEnter 'y' to confirm or 'n' to cancel: ");

		char ch = getchar();
		if (ch == 'y')
		{
			printf("\nRecipe Deleted\n");
			arr[recipe - FIRST_RECIPE_NUM].status = false; //flag seat status to empty -> does not delete data, only flags for overwriting  
		}
		else
			printf("\nDeletion Cancelled\n");

	}
}

void displaySingleRecipe(RECIPE arr[], int num) 
{

//RETURN IF NO RECIPES FOUND
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\n\nNo Recipes detected\n\n");
		return;
	}
	//displays all simple recipes to chose more info on:
	displayAllRecipes(arr, num);

	//grab which recipe to view more information on: 
	int recipe;
	printf("\nPlease pick a Recipe to view more information on: ");
	recipe = NumOnly(num);

	while (arr[recipe - FIRST_RECIPE_NUM].status == false) //ensures only taken recipes can be viewed
	{
		printf("\nRecipe is empty\n");
		listTaken(arr, num);
		printf("\nPlease enter a valid recipe that is displayed above: ");
		recipe = NumOnly(num);
	}

//DISPLAY COMPLEX INFROMATION FOR SINGLE SELECTED RECIPE
	printRecipeSimple(arr, recipe - FIRST_RECIPE_NUM);
	printRecipeHowTo(arr, recipe - FIRST_RECIPE_NUM);
	printRecipeIngredients(arr, recipe - FIRST_RECIPE_NUM);

}

void updateRecipe(RECIPE arr[], int num) 
{
	printf("\nsearch recipes function here\n\n\n");

	//menu to pick which recipe to update
		//if not taken reject 
	
	//choose what struct data to overwrite

	//confirm
}

void recipeRange(RECIPE arr[], int num) 
{
	printf("\nrecipe range function here\n\n\n");
}