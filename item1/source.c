
// ------------------------------------------------------------------------------------//
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
// REQURIEMENTS																		   //
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
//  -search by meal type (breakfast, lunch, Dinner, etc)				               //
//																					   //
// --------------------------------------------------------------------------------------


///////////// BUGS LOG /////////////

//MAJOR ISSUES
//MINOR ISSUES
//UNIMPLEMENTED

///////////// PROGRAM /////////////


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "Recipe.h"
#include "MainFunctions.h"
#include "PrintMenus.h"

#define MENUSIZE 24 //LIMITED AS AIMED FOR CULINARY BUSINESSES


//FUNCTION
int main(void)
{

	FILE* fp;
	size_t size = sizeof(RECIPE);

	RECIPE menu[MENUSIZE] = { 0 };

//if no contents detected:

	if ((fp = fopen("menu.dat", "r")) == NULL)
	{
		for (int i = 0; i < MENUSIZE; i++) //creating 12 (empty) seats
		{
			menu[i].status = false; //false == empty / false == 0
			menu[i].id = i; //id of position
		}
	}
	else //else, if file detected, read status of seats and close
	{
		fread(menu, size, MENUSIZE, fp);
		fclose(fp);
	}


//MENU 
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printmenuMain();

		switch (choice)
		{
		case 'a': searchRecipe(menu, MENUSIZE);
			break;
		case 'b': displayAllRecipes(menu, MENUSIZE);
			break;
		case 'c': recipeRange(menu, MENUSIZE);
			break;
		case 'd': displaySingleRecipe(menu, MENUSIZE);
			break;
		case 'e': addRecipe(menu, MENUSIZE);
			break;
		case 'f': deleteRecipe(menu, MENUSIZE);
			break;
		case 'g': updateRecipe(menu, MENUSIZE);
			break;
		case 'h':
			continueProgram = false; 
			break;
		default:
			printf("\ninvalid entry\n"); 
			break;
		}
	}
	
	//save to file function here 
	if ((fp = fopen("breakfastMenu.dat", "w")) == NULL)
		printf("SAVE FAILURE");
	else //write to file
	{
		fwrite(menu, size, MENUSIZE, fp);
		fclose(fp);
	}

}