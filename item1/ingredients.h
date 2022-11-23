#pragma once
#define MAXLEN     25


// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  Ingredients Nested into recipe Struct header file
//
// this struct is to store the array of Ingredients

typedef struct ingredients {
	char name[MAXLEN];
	int num;
}INGREDIENTS;
