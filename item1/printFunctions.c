#include "Recipe.h"
#include <stdio.h>
#include "printFunctions.h"

#define MAXNUMBEROFINGREDIENTS 10

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
	printf("\n%d: %s, $%.2f", arr[num].id, arr[num].recipeName, arr[num].price);

	if (arr[num].type == breakfast)
		printf(" Breakfast");
	if (arr[num].type == lunch)
		printf(" Lunch");
	if (arr[num].type == dinner)
		printf(" Dinner");
}

void printRecipeHowTo(RECIPE arr[], int num)
{
	printf("\n\nHOW TO COOK:\n");
	printf("\nPrep-time: %d", arr[num].cook.preptime);
	printf("\nReadyIn time: %d", arr[num].cook.readytime);
	printf("\nCook time: %d", arr[num].cook.cooktime);
	printf("\nTemprature: %d", arr[num].cook.temp);
	printf("\nCookMethod: %s", arr[num].cook.method);
}

void printRecipeIngredients(RECIPE arr[], int num)
{
	
	printf("\n\nINGREDIENTS:\n");
	
	for (int i = 0; i < MAXNUMBEROFINGREDIENTS; i++)
	{
		if (arr[num].ingredients[i][i].status == true)
			printf("\n%s", arr[num].ingredients[i][i].name);
	}
}

///////ALL

void PRINTALL(RECIPE arr[], int num)
{
	printRecipeSimple(arr, num);
	printRecipeIngredients(arr, num);
	printRecipeHowTo(arr, num);
	printf("\n");
}
