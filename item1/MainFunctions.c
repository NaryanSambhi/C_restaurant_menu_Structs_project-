
// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
// Main Functions file


//display recipes

#include "Recipe.h"
#include "stdio.h"

/////////// GENERAL BOOLS ///////////
bool NoRecipes(RECIPE arr[], int num)
{
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == false) //if a recipe is flagged as empty add to final count
			count++;
	}
	if (count == num)
		return true;
	else
		return false;

}


//bool for when full or empty logic is required
		//only used once, added for future reusability sake
bool FullRecpies(RECIPE arr[], int num)
{
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i].status == true) //if a recipe is flagged as taken add to final count
			count++;
	}
	if (count == num)
		return true;
	else
		return false;

}

/////////// PRINT DATAS ///////////

	/*
//how to cook
typedef struct cook {
	int preptime;
	int cooktime;
	int readytime;
	int temp;
	enum COOKINGMETHOD { bake, grill, microwave, frying } cookingmethod; //add more here
}COOK;

//ingredients
typedef struct ingredients {
	char name[MAXLEN];
	int num;
}INGREDIENTS;

//recipe top layer struct
typedef struct recipe {

	int id; //numer of item in list of slots 0-5
	char recipeName[MAX];
	int price;
	bool status; //acts as a flag to when slot is written in or not

	INGREDIENTS ingredients;
	COOK cook;

}RECIPE;
	*/


void printRecipeSimple(RECIPE arr[], int num)
{
	printf("\n %d: %s, $%d", arr[num].id, arr[num].recipeName, arr[num].price);

	//any enum ids under here:  

}

//void printRecipeComplex(RECIPE arr[], int num)



/////////// MAIN ///////////


void displayAllRecipes(RECIPE arr[], int num) 
{

//RETURN IF NO RECIPES FOUND
	bool emp = NoRecipes(arr, num);
	if (emp == true)
	{
		printf("\n\nNo Recipes detected\n\n");
		return;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			if (arr[i].status == true) //if seat flagged as taken, print data
			{								//this avoids printing old data from deleted seats
				printRecipeSimple(arr, i);
			}
		}
		//extra layer for show menu info

			//--> select recipe to see moredata on
				//print recipe item data

			// or exit 

	}

}

void searchRecipe(RECIPE arr[], int num) 
{
	printf("\nsearch all recipe function here\n\n\n");

	//grab user input into temp


	//toupper first letter to capital


	//if string is larger then max exit with error or reask input to avoid garbage

	//for loop to search for name

		//if strcmp recipe name, temp == 0 (if found) 
			//print recipe found
			//print recipe data
			//return



		//no passenger found
		//return 
}


//manage recipes
void addRecipe(RECIPE arr[], int num) 
{
	printf("\nadd recipes function here\n\n\n");

	//check if there are recipe slots available
	bool full = FullRecpies(arr, num);
	if (full == true)
		printf("\nAll recipe slots occupied");
	else
	{


		//user picks a slot
			//display all available slots

		//pick slot

		//if slot is already occupied either reject or ask if user wants to overwrite slot

		//get recipe information function 



		//CONFRIM DETAILS
		//print confirm

		//print AllData function --> unimplement but will print all recipe data created

		/*
		//get input
		printf("\nEnter 'y' to confirm or 'n' to cancel: ");

		char ch = getchar();
		if (ch == 'y')
		{
			printf("\Recipe Created");
			//arr[recipe - 1].status = true; //flag status to taken 
		}
		else
			printf("\nAssignment Cancelled");
		*/
	}
}

void deleteRecipe(RECIPE arr[], int num) 
{
	printf("\ndelete recipes function here\n\n\n");

	//check if there are recipe slots taken yet
	bool emp = NoRecipes(arr, num);
	if (emp == true)
		printf("\nNo recipes assigned yet");
	else
	{
		//list taken
			//user picks a slot

		//if slot is already empty either reject



		//confrim deletion function
		// print recipe data simple
	
			//if confirmed
				//arr[recipe - 1] = false //flags recipe for overwriting
			//else
				//print delte cancelled

	}
}

void displaySingleRecipe(RECIPE arr[], int num) 
{
	printf("\ndisplay single recipe function here\n\n\n");

	//will display complex recipe data

		//nest inside menu?

		//or ask which recipe data simple more information would like to be found
}

void updateRecipe(RECIPE arr[], int num) 
{
	printf("\nsearch recipes function here\n\n\n");

	//menu to pick which recipe to update
		//if not taken reject 
	
	//choose what struct data to overwrite

	//confirm
}

void recipeRange(RECIPE arr[], int num) 
{
	printf("\nrecipe range function here\n\n\n");
}