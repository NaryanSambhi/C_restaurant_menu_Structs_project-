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

#define MAX 20
#define MAXNUMBEROFINGREDIENTS 10

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
	bool status;

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
	INGREDIENTS ingredients[MAXNUMBEROFINGREDIENTS][MAX];
	COOK cook;

}RECIPE;