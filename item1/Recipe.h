#pragma once

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  Recipe Struct header file

#include "ingredients.h"
#include "HowToCook.h"

// typedef struct to store the recipes, and the otehr two structs Ingredients, and cooking 
typedef struct recipe {
	char* recipeName;
	INGREDIENTS ingredients;
	COOK cook;

	enum MEAL {Breakfast, Lunch, Dinner} meal; 
}RECIPE;