#include "Recipe.h"
#include "generalFunctions.h"
#include "MainFunctions.h"
#include <stdio.h>
#include <stdlib.h>

#define FIRST_RECIPE_NUM 1  //to define where first recipe starts (instead of 0)
#define OFFSET 2 //includes null, etc


// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  Get Recipe from User


/////////// GET RECIPE ///////////

void GetRecipeName(RECIPE arr[], int recipe)
{
	//grab first name
	printf("\nPlease enter the name of the recipe: ");
	fgets(arr[recipe - FIRST_RECIPE_NUM].recipeName, MAX, stdin);

	if (strlen(arr[recipe - FIRST_RECIPE_NUM].recipeName) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[recipe - FIRST_RECIPE_NUM].recipeName[strcspn(arr[recipe - FIRST_RECIPE_NUM].recipeName, "\n")] = 0;
}


/////////// GET INGREDIENTS ///////////

//get input and put into struct


/////////// GET COOK ///////////

void GetPrepTime(RECIPE arr[], int num)
{
    printf("\nPlease enter prep-time: ");
    NumOnly(arr[num - FIRST_RECIPE_NUM].cook.preptime);
}
void GetCookTime(RECIPE arr[], int num)
{
    printf("\nPlease enter cook-time: ");
    NumOnly(arr[num - FIRST_RECIPE_NUM].cook.cooktime);
}
void GetReadyTime(RECIPE arr[], int num)
{
    printf("\nPlease enter ready-time: ");
    NumOnly(arr[num - FIRST_RECIPE_NUM].cook.readytime);
}
void GetTemprature(RECIPE arr[], int num)
{
    printf("\nPlease enter temprature: ");
    NumOnly(arr[num - FIRST_RECIPE_NUM].cook.temp);
}
void GetCookMethod(RECIPE arr[], int recipe)
{
	//grab first name
	printf("\nPlease enter cooking method: ");
	fgets(arr[recipe - FIRST_RECIPE_NUM].cook.method, MAX, stdin);

	if (strlen(arr[recipe - FIRST_RECIPE_NUM].cook.method) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[recipe - FIRST_RECIPE_NUM].cook.method[strcspn(arr[recipe - FIRST_RECIPE_NUM].cook.method, "\n")] = 0;
}

void GetCookAll(RECIPE arr[], int num)
{





}