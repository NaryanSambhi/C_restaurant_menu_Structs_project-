#pragma once
// --------------------------------------------------------------------------------------
// PROG71985 - F22																	   //
// GROUP PROJECT - DEC 2022															   //
//																					   //
// Naryan Sambhi, Katrina Lukic, Muhammad Asim										   //
// --------------------------------------------------------------------------------------
//  How to cook Nested into recipe Struct header file
//	
// How to cook																	   
//		-cook time INT																   
//		-prep time INT																   
//		-ready in time INT															   
//		-temprature INT																   
//		-cooking method ENUM		


///the typedef struct is to store the cooking values 

typedef struct cook {
	int preptime;
	int cooktime;
	int readytime;
	int temp;
	enum COOKINGMETHOD {bake, grill, microwave, frying} cookingmethod; //add more here 
}COOK;
