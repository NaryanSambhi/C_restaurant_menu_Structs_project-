#define _CRT_SECURE_NO_WARNINGS


// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
//																					   //
// Goal:																			   //
// Our goal is to a recipe cooking manager for a local cafe							   //
//																					   //
// Our recipe manager is aimed at assisting managment and chefs with the storing	   //
// and creation of recipes for their nmenu											   //
//																					   //
// --------------------------------------------------------------------------------------
//																					   //
//REQURIEMENTS																		   //
//																				       //
// PRIORITY FEATURES:																   //
//  -Add recipes																	   //
//  -delete existing recipe															   //
//  -update existing recipe															   //
//  -display single recipe															   //
//  -display range of recipes														   //
//	-display all reciples															   //
//																					   //
//  -save to disc and pull data when opening										   //
//																					   //
//																					   //
// NON-PRIORITY FEATURES															   //
//	-user friendly UI																   //
//	-search by alphabetical															   //
//  -search by meal type (breakfast, etc)											   //
//																					   //
// --------------------------------------------------------------------------------------
//																					   //
// For this we must include:														   //
//	-A DATA file for our menu contents												   //
//	-Nested structs to hold the data of our recipes									   //
//																					   //
// A recipe will consists:															   //
//	-Name of item																	   //
//		-string																		   //
//  -Meal (breakfast, lunch, dinner)												   //
//																					   //
//  -Ingredients																	   //
//		-array of strings															   //
//																					   //
//	-How to cook																	   //
//		-cook time INT																   //
//		-prep time INT																   //
//		-ready in time INT															   //
//		-temprature INT																   //
//		-cooking method ENUM														   //
//--------------------------------------------------------------------------------------	

//18 slots
//6 breakfast
//6 lunch
//6 dinner

// three arrays or one array of 18?

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


#include "menu.h"
#include "Recipe.h"
#include "ingredients.h"
#include "HowToCook.h"

int main(void)
{
	struct RECIPE;

	FILE* fp;
	size_t size = sizeof(struct recipe);

//create array of recipes here

	//for loop, create 'slots'
	
//search for file

//create or open file of recipes
	if ((fp = fopen ("recipebook.dat", "rb")) == NULL);
	{
		//if no data, create data
	}
	//else
		//fread();
		//fclose(fp);

//menu 
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printmenu();

		switch (choice)
		{
		case 'a': searchRecipe();
			break;
		case 'b': displayAllRecipes();
			break;
		case 'c': recipeRange();
			break;
		case 'd': displaySingleRecipe();
			break;
		case 'e': addRecipe();
			break;
		case 'f': deleteRecipe();
			break;
		case 'g': updateRecipe();
			break;
		case 'h':
			continueProgram = false; 
			break;
		default:
			printf("\ninvalid entry\n\n\n"); 
			break;
		}
	}
	
	//save to file function here 
	if ((fp = fopen("recipebook.dat", "wb")) == NULL)
		printf("Can't save data to file");
	else
	{
		//printf("\n\ntest\n\n");
		
		//save to file
		// fwrite();
		// fclose(fp);
	}

	//exit messages to confirm good exit 
	printf("\nThank you very much for using our menu manager\n");
}