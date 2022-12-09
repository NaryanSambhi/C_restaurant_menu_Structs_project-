#define _CRT_SECURE_NO_WARNINGS
#include "Recipe.h"
#include "generalFunctions.h"
#include "MainFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OFFSET 2 //includes null, etc
#define MAXNUMBEROFINGREDIENTS   10 // used for the get ingredients 


// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  Get Recipes from User

/////////// GET RECIPE ///////////

//gets the recipe name from the user 
void GetRecipeName(RECIPE arr[], int num)
{
	//grab first name using fgets
	printf("\nPlease enter the name of the recipe: ");
	fgets(arr[num].recipeName, MAX, stdin);

	if (strlen(arr[num].recipeName) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[num].recipeName[strcspn(arr[num].recipeName, "\n")] = 0;
}

//gets the price from the user 
void GetPrice(RECIPE arr[], int num)
{
	printf("\nInsert a number for the price:  ");
	while (scanf("%f", &arr[num].price) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions
}

//get type of meal (Breakfast, Lunch, Dinner) from the user 
void GetMealType(RECIPE arr[], int num)
{
	printf("\nSelect a following type for your recipe: \n");
	printf("a) breakfast\n");
	printf("b) lunch\n");
	printf("c) dinner\n");

	//user input to pick which type of meal 
	char ch = getchar();
	while (ch != 'a' && ch != 'b' & ch != 'c')
	{
		ch = getchar();
		printf("\ninvalid input, please re-enter: ");
		ch = getchar(); //asked twice to avoid printing message twice when user is inputing

	}
	//depending on the user input in the menu it wil type the choice to the enum
	if (ch == 'a')
		arr[num].type = breakfast;
	if (ch == 'b')
		arr[num].type = lunch;
	if (ch == 'c')
		arr[num].type = dinner;

	printf("\n");
}


//all of the get recipe functions to display to the user 
void GetRecipeAll(RECIPE arr[], int num)
{
	GetRecipeName(arr, num);
	GetPrice(arr, num);
	GetMealType(arr, num);
}

/////////// GET INGREDIENTS ///////////

//gets the ingredients inputed by the user 
void GetIngredients(RECIPE arr[], int num)
{   
//get limit which the user would input themselves 
	int userLimit;
	printf("Enter the number of ingredients for the recipe: ");

//garbage check to be sure the user input is valid y being in a range and also not a character
	while (scanf("%d", &userLimit) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}
	if (userLimit > MAXNUMBEROFINGREDIENTS || userLimit <= 0)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}
	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions


//fgets ingredient name loop
// 
	//uses the number defined by the user to prompt them to input their ingredeints
	printf("Enter %d ingredents for the ingredients list: \n", userLimit);
	for (int i = 0; i < userLimit; i++)
	{   //user enters their specific ingredients and it is using fgets to store the value 
		printf("Enter the name of ingredient: ");

		fgets(arr[num].ingredients[i][i].name, MAX, stdin);

		if (strlen(arr[num].ingredients[i][i].name) > MAX - OFFSET) //checking for garbage
		{															//-1 includes NULL terminator
			printf("\n\nOVERFLOW ERROR\n\n");
			exit(EXIT_FAILURE);
		}
		//sets the status equal to true
		arr[num].ingredients[i][i].status = true;

		//gets rid of the extra line created by fgets
		arr[num].ingredients[i][i].name[strcspn(arr[num].ingredients[i][i].name, "\n")] = 0;

	}
	
}

/////////// GET COOK ///////////

//gets the number inputed by the user 
void GetPrepTime(RECIPE arr[], int num)
{
	printf("Insert minutes for the prep-time: ");
	while (scanf("%d", &arr[num].cook.preptime) != 1)
	{   //the user inputs a character it will exit the program
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

//gets the input from the user for the get ready time 
void GetReadyTime(RECIPE arr[], int num)
{
	printf("Insert minutes for the ready in time: ");
	while (scanf("%d", &arr[num].cook.readytime) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

//gets the cooktime from the user 
void GetCookTime(RECIPE arr[], int num)
{
	printf("Insert minutes for the cook time: ");
	while (scanf("%d", &arr[num].cook.cooktime) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

//gets the temperature from the user 
void GetTemprature(RECIPE arr[], int num)
{
	printf("Insert degrees for the temprature: ");
	while (scanf("%d", &arr[num].cook.temp) != 1)
	{
		printf("Invalid Input Error \n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions

}

//gets tehe cooking method from the user 
void GetCookMethod(RECIPE arr[], int recipe)
{
	//grab first name
	printf("Please enter cooking method used: ");
	fgets(arr[recipe].cook.method, MAX, stdin);

	if (strlen(arr[recipe].cook.method) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//gets rid of new line from fgets
	arr[recipe].cook.method[strcspn(arr[recipe].cook.method, "\n")] = 0;
}

//gets all the cook functions
void GetCookAll(RECIPE arr[], int num)
{
	GetPrepTime(arr, num);
	GetReadyTime(arr, num);
	GetCookTime(arr, num);
	GetTemprature(arr, num);
	GetCookMethod(arr, num);
}



///GET ALL////

void GETALL(RECIPE arr[], int num)
{
	GetRecipeAll(arr, num);
	printf("\n");
	GetIngredients(arr, num);
	printf("\n");
	GetCookAll(arr, num);
}
