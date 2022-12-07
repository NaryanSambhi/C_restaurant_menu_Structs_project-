#pragma once

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
//																					   //
//								RECIPE STRUCT HEADER FILE							   //
//																					   //
// --------------------------------------------------------------------------------------



#include <stdbool.h>

// typedef struct to store the recipes, and the other two structs Ingredients, and cooking 

#define MAX 20

//how to cook
typedef struct cook 
{
	int preptime;
	int cooktime;
	int readytime;
	int temp;
	char method[MAX];
}COOK;

//ingredients
typedef struct ingredients 
{
	char name[MAX];
	int num;
}INGREDIENTS;

//recipe top layer struct
typedef struct recipe 
{
//upper level
	int id; //numer of item in list of slots 0-5
	char recipeName[MAX];
	float price; 
	enum TYPE {breakfast, lunch, dinner} type;


	bool status; //acts as a flag to when slot is written in or not

//lower level
	//INGREDIENTS ingredients;
	COOK cook;

}RECIPE;