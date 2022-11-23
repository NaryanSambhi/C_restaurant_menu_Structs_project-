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
//																					   //
// --------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>
#include "menu.h"


int main(void)
{
//create or open file of recipes

//search for file
	//if no file create file

	//if file open or load file contents

//menu 
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printmenu();

		switch (choice)
		{
		case 'a':
			printf("\nunimplemented\n\n\n");
			//search recipes function
			break;
		case 'b':
			printf_s("\nunimplemented\n\n\n");
			//display all recipes functions
			break;
		case 'c':
			printf_s("\nunimplemented\n\n\n");
			//range of recipes
			break;
		case 'd':
			printf_s("\nunimplemented\n\n\n");
			//display single recipe
			break;
		case 'e':
			printf_s("\nunimplemented\n\n\n");
			//add reciple
			break;
		case 'f':
			printf_s("\nunimplemented\n\n\n");
			//delete recipe
			break;
		case 'g':
			printf_s("\nunimplemented\n\n\n");
			//update existing recipe 
			break;
		case 'h':
			continueProgram = false; //breaks loop
			break;
		default:
			printf("\ninvalid entry\n\n\n"); 
			break;
		}
	}
	
	//save to file 

	//close file

	//free memory 

	//exit
		//exit messages to confirm good exit 
	printf_s("\nThank you for using our menu manager\n");
}