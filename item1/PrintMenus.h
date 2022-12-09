#pragma once

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
//																					   //
//						HEADER FILE FOR MENU FUNCTIONS							       //
//																					   //
// --------------------------------------------------------------------------------------



////////// MENUS //////////

//the main menu the user sees
char printmenuMain(void);

char PrintMealTypeMenu(void);


////////// MODIFY //////////

char printUpdateMenu(void);

char printUpdateHowToCookMenu(void);

char printUpdateIngredientsMenu(void);

char printUpdateRecipeMenu(void);


////////// RANGE //////////

char printRangeMenu(void);

void Breakfast(RECIPE arr[], int num);

void Lunch(RECIPE arr[], int num);

void Dinner(RECIPE arr[], int num);
