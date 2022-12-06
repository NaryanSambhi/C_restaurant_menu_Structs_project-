#include "Recipe.h"
#include "generalFunctions.h"
#include <stdio.h>


#define FIRST_RECIPE_NUM 1  //to define where first recipe starts (instead of 0)


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

}