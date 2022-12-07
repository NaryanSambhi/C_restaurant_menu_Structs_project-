// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
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
#include "PrintMenus.h"

#define MENUSIZE 6 //LIMITED TO 6 INPUTS PER MEAL SECTION (AIMED FOR CULINARY BUSINESSES)


//FUNCTION
void breakfast(void)
{

	FILE* fp;
	size_t size = sizeof(RECIPE);

	RECIPE breakfast[MENUSIZE] = { 0 };

//if no contents detected:

	if ((fp = fopen("breakfastMenu.dat", "r")) == NULL)
	{
		for (int i = 0; i < MENUSIZE; i++) //creating 12 (empty) seats
		{
			breakfast[i].status = false; //false == empty / false == 0
			breakfast[i].id = i; //id of position
		}
	}
	else //else, if file detected, read status of seats and close
	{
		fread(breakfast, size, MENUSIZE, fp);
		fclose(fp);
	}


//MENU 
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printmenuBreakfast();

		switch (choice)
		{
		case 'a': searchRecipe(breakfast, MENUSIZE);
			break;
		case 'b': displayAllRecipes(breakfast, MENUSIZE);
			break;
		case 'c': recipeRange(breakfast, MENUSIZE);
			break;
		case 'd': displaySingleRecipe(breakfast, MENUSIZE);
			break;
		case 'e': addRecipe(breakfast, MENUSIZE);
			break;
		case 'f': deleteRecipe(breakfast, MENUSIZE);
			break;
		case 'g': updateRecipe(breakfast, MENUSIZE);
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
		fwrite(breakfast, size, MENUSIZE, fp);
		fclose(fp);
	}

}