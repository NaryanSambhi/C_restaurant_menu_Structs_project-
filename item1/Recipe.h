#pragma once

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
//																					   //
//								RECIPE STRUCT HEADER FILE							   //
//																					   //
// --------------------------------------------------------------------------------------



#include <stdbool.h>

// typedef struct to store the recipes, and the otehr two structs Ingredients, and cooking 

#define MAX 20

//how to cook
typedef struct cook {
	int preptime;
	int cooktime;
	int readytime;
	int temp;
	enum COOKINGMETHOD { bake, grill, microwave, frying } cookingmethod; //add more here 
}COOK;

//ingredients
typedef struct ingredients {
	char name[MAX];
	int num;
}INGREDIENTS;

//recipe top layer struct
typedef struct recipe {

	int id; //numer of item in list of slots 0-5
	char recipeName[MAX];
	int price; 
	bool status; //acts as a flag to when slot is written in or not

	INGREDIENTS ingredients;
	COOK cook;

}RECIPE;