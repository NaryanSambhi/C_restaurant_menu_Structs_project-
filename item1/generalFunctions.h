#pragma once
#include "Recipe.h"


// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
//																					   //
//						HEADER FILE FOR GENERAL FUNCTIONS							   //
//																					   //
// --------------------------------------------------------------------------------------



////////// MAIN SUPPORTING FUNCTIONS //////////

//other 
void listTaken(RECIPE arr[], int num);
void listEmpty(RECIPE arr[], int num);


//bools
bool NoRecipes(RECIPE arr[], int num);
bool FullRecpies(RECIPE arr[], int num);


////////// SAFE GETS //////////

int NumOnly(int num);
