#include "Recipe.h"
#include "generalFunctions.h"
#include "MainFunctions.h"
#include <stdio.h>


#define FIRST_RECIPE_NUM 1  //to define where first recipe starts (instead of 0)

// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katarina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  Get Recipe from User


/////////// GET RECIPE ///////////

//get input and put into struct


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
void GetCookMethod(RECIPE arr[], int num)
{
    //enum COOKINGMETHOD { bake, grill, microwave, frying } cookingmethod; //add more here 

}

void GetCookAll(RECIPE arr[], int num)
{





}