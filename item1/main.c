// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
//																					   //
// Goal:																			   //
// Our goal is to a recipe cooking manager for a local cafe							   //
//																					   //
// Our recipe manager is aimed at assisting managment and chefs with the storing	   //
// and creation of recipes for their nmenu											   //
//																					   //
// --------------------------------------------------------------------------------------
//																					   //
//REQURIEMENTS																		   //
//																				       //
// PRIORITY FEATURES:																   //
//  -Add recipes																	   //
//  -delete existing recipe															   //
//  -update existing recipe															   //
//  -display single recipe															   //
//  -display range of recipes														   //
//	-display all reciples															   //
//																					   //
//  -save to disc and pull data when opening										   //
//																					   //
//																					   //
// NON-PRIORITY FEATURES															   //
//	-user friendly UI																   //
//	-search by alphabetical															   //
//																					   //
// --------------------------------------------------------------------------------------
//																					   //
// For this we must include:														   //
//	-A DATA file for our menu contents												   //
//	-Nested structs to hold the data of our recipes									   //
//																					   //
// A recipe will consists:															   //
//	-Name of item																	   //
//		-string																		   //
//																					   //
//  -Ingredients																	   //
//		-array of strings															   //
//																					   //
//	-How to cook																	   //
//		-cook time INT																   //
//		-prep time INT																   //
//		-ready in time INT															   //
//		-temprature INT																   //
//		-cooking method ENUM														   //
//--------------------------------------------------------------------------------------	
// Items for the menu
// 
// The menu will have multiple options including breakfast, lunch, and Dinner dishes
// Also will have three drinks 
// 
// There will be three Breakfast Options
// 
// 1. Pancakes - Ingredients are flour, baking powder, sugar, salt, milk, butter, egg 
// How to cook is: 15 mins cook time, 5 mins prep time, ready in 20 mins, temperature is room temperature, cooking method is cooking 
// 
// 2. Spinach Omlette - Ingredients are eggs, spinach, cheese, onion powder, salt, pepper
// How to cook is: 15 mins cook time, 5 mins prep time, ready in 20 mins, temperature is room temperature, cooking method is cooking 
// 
// 3. Waffles - Ingredients are flour, salt, baking powder, sugar, eggs, milk, butter, vanilla 
// How to cook is: 10 mins cook time, 10 mins prep time, ready in 20 mins, temperature is room temperature, cookig method is cooking
// 
// Three Lunch Options 
// 
// 1. Chicken Salad - Ingredients are chicken, mayonaise, celery, almonds, basil, grapes
// How to cook is: 5 mins cook time, 5 mins prep time, ready in 10 mins, temperature is room temperature, cooking method is cooking
// 
// 2. Butternut squash Soup - Ingredients are butternut squash, yellow onions, garlic, sage, rosemary, ginger, olive oil, vegatable broth, black pepper
// How to cook is: 35 mins cook time, 10 mins prep time, ready in 45 mins, temperature is room tempeature, cooking method is cooking 
// 
// 3. Sandwiches - Ingredients are bread, mayonaise, chicken, lettuce, tomato
// How to cook is: 0 mins cook time, 5 mins prep time, ready in 5 mins, temperature is room temperature, cooking method is N/a 
// 
// Three Dinner options 
// 
// 1. Pasta (Spaghetti and Meatballs)- Ingredients are spaghetti, beef, bread crumbs, parsley, parmesian, egg, salt, garlic, olive oil, onion, black pepper, tomatoes
// How to cook is:40 mins cook time, 20 mins prep time, ready in 60 mins, temperature is 400F, cooking method is bake
// 
// 2. Roasted Chicken - Ingredients are chicken, salt, back pepper, onion powder, butter, celery
// How to cook is: 75 mins cook time, 15 mins prep time, ready in 90 mins, tempearture is 400F,cooking method is bake 
// 
// 3. Burger- Ingredients are egg, salt, black pepper, ground beef, bread crumbs, lettuce, tomaoto, ketchup, mustard, onions 
// How to cook is:15 mins cook time, 5 mins prep time, ready in 20 mins, tempeature is 410F, cooking method is grill 
// 	
// Three Drink Options
// 
// 1. Coffee - Ingredients are coffee beans, water, sugar, milk
// How to cook is: 2 mins cook time, 2 mins prep time, ready in 4 mins, temperature is low oven, cooking method is cooking
// 
// 2. Tea - Ingredients are tea leavesm water, sugar, milk 
// How to cook is: 2 mins cook time, 2 mins prep time, ready in 4 mins, tempeature is low oven, cooking mehtod is cooking 
// 
// 3. Orange Juice - Ingredients are oranges, water, sugar 
// How to cook is: 2 mins cook time, 2 mins prep time, ready in 4 mins, temperature is room temperature, cooking method is cooking 
// --------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>
#include "menu.h"


int main(void)
{
//create or open file of recipes

//search for file
	//if no file create file

	//if file open or load file contents

//menu 
	bool continueProgram = true;
	while (continueProgram) {

		char choice = printmenu();

		switch (choice)
		{
		case 'a':
			searchRecipe();
			//search recipes function
			break;
		case 'b':
			displayAllRecipes();
			//display all recipes functions
			break;
		case 'c':
			recipeRange();
			//range of recipes
			break;
		case 'd':
			displaySingleRecipe();
			//display single recipe
			break;
		case 'e':
			addRecipe();
			//add reciple
			break;
		case 'f':
			deleteRecipe();
			//delete recipe
			break;
		case 'g':
			updateRecipe();
			//update existing recipe 
			break;
		case 'h':
			continueProgram = false; //breaks loop
			break;
		default:
			printf("\ninvalid entry\n\n\n"); 
			break;
		}
	}
	
	//save to file function here 

	//close file function here 

	//free memory function here 

	//exit
		//exit messages to confirm good exit 
	printf_s("\nThank you very much for using our menu manager\n");
}