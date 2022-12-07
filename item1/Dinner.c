
// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
//																					   //
//						DINNER MEAL MENU FUNCTION FILE							       //
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
void dinner(void)
{

	FILE* fp;
	size_t size = sizeof(RECIPE);

	RECIPE dinner[MENUSIZE] = { 0 };

	//if no contents detected:

	if ((fp = fopen("dinnerMenu.dat", "r")) == NULL)
	{
		for (int i = 0; i < MENUSIZE; i++) //creating 12 (empty) seats
		{
			dinner[i].status = false; //false == empty / false == 0
			dinner[i].id = i; //id of position
		}
	}
	else //else, if file detected, read status of seats and close
	{
		fread(dinner, size, MENUSIZE, fp);
		fclose(fp);
	}


	//MENU 
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printmenuDinner();

		switch (choice)
		{
		case 'a': searchRecipe(dinner, MENUSIZE);
			break;
		case 'b': displayAllRecipes(dinner, MENUSIZE);
			break;
		case 'c': recipeRange(dinner, MENUSIZE);
			break;
		case 'd': displaySingleRecipe(dinner, MENUSIZE);
			break;
		case 'e': addRecipe(dinner, MENUSIZE);
			break;
		case 'f': deleteRecipe(dinner, MENUSIZE);
			break;
		case 'g': updateRecipe(dinner, MENUSIZE);
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
	if ((fp = fopen("dinnerMenu.dat", "w")) == NULL)
		printf("SAVE FAILURE");
	else //write to file
	{
		fwrite(dinner, size, MENUSIZE, fp);
		fclose(fp);
	}

}