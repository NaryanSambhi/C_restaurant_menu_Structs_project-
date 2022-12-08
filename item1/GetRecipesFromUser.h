#pragma once

#include "Recipe.h"

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
//																					   //
//						HEADER FILE FOR GET RECIPE FUNCTIONS						   //
//																					   //
// --------------------------------------------------------------------------------------


/////////// GET RECIPE ///////////

void GetRecipeName(RECIPE arr[], int recipe);
void GetPrice(RECIPE arr[], int num);
void GetMealType(RECIPE arr[], int num);

void GetRecipeAll(RECIPE arr[], int num);

/////////// GET INGREDIENTS ///////////

void GetIngredients(RECIPE arr[], int num);

/////////// GET COOK ///////////

void GetPrepTime(RECIPE arr[], int num);
void GetCookTime(RECIPE arr[], int num); 
void GetReadyTime(RECIPE arr[], int num);
void GetTemprature(RECIPE arr[], int num); 
void GetCookMethod(RECIPE arr[], int num);
void GetCookMethod(RECIPE arr[], int recipe);

void GetCookAll(RECIPE arr[], int num);

//GetAll

void GETALL(RECIPE arr[], int num);