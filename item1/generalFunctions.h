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

//to display as a list the empty and taken menu items 
void listTaken(RECIPE arr[], int num);
void listEmpty(RECIPE arr[], int num);

//bools to assign eihter the recipes are full or empty 
bool NoRecipes(RECIPE arr[], int num);
bool FullRecpies(RECIPE arr[], int num);



////////// SAFE GETS //////////

//gets the user to input only numbers and a limit from 1-24
int NumOnly(int num);
