#include "Recipe.h"
#include "generalFunctions.h"
#include "MainFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	fgets(arr[recipe].recipeName, MAX, stdin);

	if (strlen(arr[recipe].recipeName) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[recipe].recipeName[strcspn(arr[recipe].recipeName, "\n")] = 0;
}


/////////// GET INGREDIENTS ///////////

//get input and put into struct


/////////// GET COOK ///////////

void GetPrepTime(RECIPE arr[], int num)
{
}

void GetCookTime(RECIPE arr[], int num)
{
}
void GetReadyTime(RECIPE arr[], int num)
{
   

}
void GetTemprature(RECIPE arr[], int num)
{
 

}

void GetCookMethod(RECIPE arr[], int recipe)
{
	//grab first name
	printf("\nPlease enter cooking method: ");
	fgets(arr[recipe].cook.method, MAX, stdin);

	if (strlen(arr[recipe].cook.method) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[recipe].cook.method[strcspn(arr[recipe].cook.method, "\n")] = 0;
}

void GetCookAll(RECIPE arr[], int num)
{





}