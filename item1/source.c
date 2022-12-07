

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

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Meals.h"
#include "PrintMenus.h"

//main
int main(void)
{
	//menu
	bool continueProgram1 = true;
	while (continueProgram1)
	{
		char choice = printmenuMain();
		switch (choice)
		{
		case 'a': breakfast();
			break;
		case 'b': lunch();
			break;
		case 'c': dinner();
			break;
		case'q': continueProgram1 = false;
			break;
		default: printf("invalid");
			break;
		}
	}

	//exit message
	printf("\nThank you for using Menu Manager\n");
	exit(EXIT_SUCCESS);
}
