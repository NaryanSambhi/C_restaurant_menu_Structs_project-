#pragma once
#include "Recipe.h"

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
//																					   //
//						HEADER FILE TO GENERAL FUNCTIONS							   //
//																					   //
// --------------------------------------------------------------------------------------



////////// MENUS //////////

char printmenuBreakfast(void);

char printmenuLunch(void);

char printmenuDinner(void);

char printmenuMain(void);


////////// MAIN SUPPORTING FUNCTIONS //////////

//other 
void listTaken(RECIPE arr[], int num);

//bools
bool NoRecipes(RECIPE arr[], int num);
bool FullRecpies(RECIPE arr[], int num);


////////// SAFE GETS //////////

int NumOnly(int num);