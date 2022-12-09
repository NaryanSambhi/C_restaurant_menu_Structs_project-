#define _CRT_SECURE_NO_WARNINGS
#include "Recipe.h"
#include "generalFunctions.h"
#include "MainFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
	//grab first name using safe gets
	printf("\nPlease enter the name of the recipe: ");
	
	scanf("%s", arr[num].recipeName);

	if (strlen(arr[num].recipeName) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}
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
	bool continueProgram = true;
	while (continueProgram) {

		char choice = PrintMealTypeMenu();
		switch (choice)
		{
		case 'a': arr[num].type = breakfast;
				  continueProgram = false;
			break;
		case 'b':arr[num].type = lunch;
			   	 continueProgram = false;
			break;
		case 'c': arr[num].type = dinner;
				  continueProgram = false;
			break;
		default:
			printf("\ninvalid entry\n\n\n");
			break;
		}
	}
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
	/*
	for (int i = 0; i < num; i++)
		arr[num].ingredients[i][i].status = false; //resets status in case of modify or new recipes
	*/



//get limit which the user would input themselves 
	int userLimit;
	printf("Enter the number of ingredients for the recipe (maximum of %d): ", MAXNUMBEROFINGREDIENTS);

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
	

//gets ingredient name loop
// 
	//uses the number defined by the user to prompt them to input their ingredeints
	printf("Enter %d ingredents for the ingredients list:\n\n", userLimit);
	for (int i = 0; i < userLimit; i++)
	{   
		//user enters their specific ingredients and it is using safe gets to store the value 
		printf("Enter the name of ingredient: ");
		scanf("%s", arr[num].ingredients[i][i].name);

		if (strlen(arr[num].ingredients[i][i].name) > (MAX - OFFSET)) //checking for garbage
		{															//-1 includes NULL terminator
			printf("\n\nOVERFLOW ERROR\n\n");
			exit(EXIT_FAILURE);
		}
		//sets the status equal to true
		arr[num].ingredients[i][i].status = true;

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

//gets the cooking method from the user 
void GetCookMethod(RECIPE arr[], int num)
{
	//grab first name
	printf("Please enter cooking method used: ");
	scanf("%s", arr[num].cook.method);

	if (strlen(arr[num].cook.method) > MAX - OFFSET) //checking for garbage
	{															//-1 includes NULL terminator
		printf("\n\nOVERFLOW ERROR\n\n");
		exit(EXIT_FAILURE);
	}

	//discard new line for fgets
	int c;
	((c = getchar()) != '\n' && c != EOF); //ensure new line and white space from scanf isnt added to fgets functions
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
