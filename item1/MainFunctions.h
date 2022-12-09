#pragma once
#include "Recipe.h"

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
//																					   //
//						HEADER FILE FOR MAIN FUNCTIONS								   //
//																					   //
// --------------------------------------------------------------------------------------


//MAIN functions for the menu // 
void searchRecipe(RECIPE arr[], int num);

void displayAllRecipes(RECIPE arr[], int num);

void recipeRange(RECIPE arr[], int num); //unimplemented

void displaySingleRecipe(RECIPE arr[], int num);

void addRecipe(RECIPE arr[], int num);

void deleteRecipe(RECIPE arr[], int num);

void updateRecipe(RECIPE arr[], int num); //implemented but not working 

void modifyCook(RECIPE arr[], int recipe);

void modifyRecipe(RECIPE arr[], int num);

void modifyIngredients(RECIPE arr[], int num);
