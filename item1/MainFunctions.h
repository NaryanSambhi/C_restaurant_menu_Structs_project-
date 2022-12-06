#pragma once

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
//																					   //
//						HEADER FILE TO MAIN FUNCTIONS								   //
//																					   //
// --------------------------------------------------------------------------------------






//MAIN

//other 
void listTaken(RECIPE arr[], int num);


//bools
bool NoRecipes(RECIPE arr[], int num);
bool FullRecpies(RECIPE arr[], int num);

//prints
void printRecipeSimple(RECIPE arr[], int num);
void printRecipeHowTo(RECIPE arr[], int num);
void printRecipeIngredients(RECIPE arr[], int num);



//main
void searchRecipe(RECIPE arr[], int num);

void displayAllRecipes(RECIPE arr[], int num); //x

void recipeRange(RECIPE arr[], int num);

void displaySingleRecipe(RECIPE arr[], int num);

void addRecipe(RECIPE arr[], int num);

void deleteRecipe(RECIPE arr[], int num); //x

void updateRecipe(RECIPE arr[], int num);