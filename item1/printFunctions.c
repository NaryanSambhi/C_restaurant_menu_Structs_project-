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
	printf("\n %d: %s, $%d", arr[num].id, arr[num].recipeName, arr[num].price);

	//any enum ids under here:  

}

void printRecipeHowTo(RECIPE arr[], int num)
{

	//ints 
	printf("\nPrep-time: %d", arr[num].cook.preptime);
	printf("\n\nCook-time: %d", arr[num].cook.cooktime);
	printf("\n\nReady-time: %d", arr[num].cook.readytime);
	printf("\n\nTemprature: %d", arr[num].cook.temp);


	//cook type
	if (arr[num].cook.cookingmethod == bake)
		printf("\n\nCooking Method: Bake");
	if (arr[num].cook.cookingmethod == grill)
		printf("\n\nCooking Method: Grill");
	if (arr[num].cook.cookingmethod == microwave)
		printf("\n\nCooking Method: Microwave");
	if (arr[num].cook.cookingmethod == frying)
		printf("\n\nCooking Method: Fry");

}

void printRecipeIngredients(RECIPE arr[], int num)
{
	printf("unfinished");//needs to be able to print array of ingridents
}

//void printRecipeComplex(RECIPE arr[], int num)
