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


///the second typedef struct is to store the student ids and has the struct studentname nested inside of it 


typedef struct cook {
	int preptime;
	int cooktime;
	int readytime;
	int temp;
	enum cookingmethod {bake, boil, grill, microwave, roasting, frying}; //add more here 
}COOK;
