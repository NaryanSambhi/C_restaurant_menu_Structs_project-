
// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
//																					   //
//						BREAKFAST MEAL MENU FUNCTION FILE							   //
//																					   //
// --------------------------------------------------------------------------------------



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "Recipe.h"
#include "MainFunctions.h"
#include "generalFunctions.h"


#define MENUSIZE 6 //LIMITED TO 6 INPUTS PER MEAL SECTION (AIMED FOR CULINARY BUSINESSES)


//FUNCTION
void lunch(void)
{

	FILE* fp;
	size_t size = sizeof(RECIPE);

	RECIPE lunch[MENUSIZE] = { 0 };

	//if no contents detected:

	if ((fp = fopen("lunchMenu.dat", "r")) == NULL)
	{
		for (int i = 0; i < MENUSIZE; i++) //creating 12 (empty) seats
		{
			lunch[i].status = false; //false == empty / false == 0
			lunch[i].id = i; //id of position
		}
	}
	else //else, if file detected, read status of seats and close
	{
		fread(lunch, size, MENUSIZE, fp);
		fclose(fp);
	}


	//MENU 
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printmenuLunch();

		switch (choice)
		{
		case 'a': searchRecipe(lunch, MENUSIZE);
			break;
		case 'b': displayAllRecipes(lunch, MENUSIZE);
			break;
		case 'c': recipeRange(lunch, MENUSIZE);
			break;
		case 'd': displaySingleRecipe(lunch, MENUSIZE);
			break;
		case 'e': addRecipe(lunch, MENUSIZE);
			break;
		case 'f': deleteRecipe(lunch, MENUSIZE);
			break;
		case 'g': updateRecipe(lunch, MENUSIZE);
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
	if ((fp = fopen("lunchMenu.dat", "w")) == NULL)
		printf("SAVE FAILURE");
	else //write to file
	{
		fwrite(lunch, size, MENUSIZE, fp);
		fclose(fp);
	}

}