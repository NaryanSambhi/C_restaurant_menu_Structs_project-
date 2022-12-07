#include "Recipe.h"
#include <stdio.h>
#include "printFunctions.h"

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
// Print Functions file

/////////// PRINT DATAS ///////////


void printRecipeSimple(RECIPE arr[], int num)
{
	//print
	printf("\n%d: %s, $%d", arr[num].id, arr[num].recipeName, arr[num].price);

	//any enum ids under here:  

}

void printRecipeHowTo(RECIPE arr[], int num)
{
	//print
	printf("\nPrep-time: %d", arr[num].cook.preptime);
	printf("\n\nCook-time: %d", arr[num].cook.cooktime);
	printf("\n\nReady-time: %d", arr[num].cook.readytime);
	printf("\n\nTemprature: %d", arr[num].cook.temp);
	printf("\n\nCookMethod: %s", arr[num].cook.method);
}

void printRecipeIngredients(RECIPE arr[], int num)
{
	printf("unfinished");//needs to be able to print array of ingridents
}

//void printRecipeComplex(RECIPE arr[], int num)
