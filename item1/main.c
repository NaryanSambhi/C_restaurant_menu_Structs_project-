// PROG71985 - F22 
// GROUP PROJECT - DEC 2022
// 
// Naryan Sambhi, Katrina Lurkic, Muhammad Asim
// 
// Goal: 
// Our goal is to a recipe cooking manager for a local cafe
// 
//

#include <stdio.h>
#include <stdbool.h>
#include "menu.h"


int main(void)
{
//create or open file of recipes




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
			continueProgram = false;
			break;
		default:
			printf("\ninvalid entry\n\n\n");
			break;
		}
	}
	//exit messages to confirm good exit 

	//save to file 

	//close file

	//free memory 
}