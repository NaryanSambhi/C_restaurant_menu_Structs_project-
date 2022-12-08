//FOR MENUS MODIFY




//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////MAIN UPDATE MENU
//char printUpdateMenu(void)
//{
//	printf("\nTo choose a function, enter its label: \n");
//	printf("a) To edit How To Cook\n");
//	printf("b) To edit Ingredients\n");
//	printf("c) to edit Recipe\n");
//	printf("d) Quit\n");
//
//	char choice;
//	printf("\nEnter Choice: ");
//	scanf(" %c", &choice); //return to main input
//
//	return choice;
//}
////SUB UPDATE MENU FOR HOW TO COOK
//
//char printUpdateHowToCookMenu(void)
//{
//	printf("\nTo choose a function, enter its label: \n");
//	printf("a) Update/Change Preparation Time\n");
//	printf("b) Update/Change Cook Time\n");
//	printf("c) Update/Change Ready Time\n");
//	printf("d) Update/Change Temperature\n");
//	printf("e) Update/Change the Cooking Method\n");
//	printf("f) Quit\n");
//
//	char choice;
//	printf("\nEnter Choice: ");
//	scanf(" %c", &choice); //return to main input
//
//	return choice;
//}
////SUB UPDATE MENU FOR INGREDIENTS
//char printUpdateIngredientsMenu(void)
//{
//	printf("\nTo choose a function, enter its label: \n");
//	printf("a) Update/Change Name of Ingredients\n");
//	printf("b) Update/Change the Number of Ingredients\n");
//	printf("c) Quit\n");
//
//	char choice;
//	printf("\nEnter Choice: ");
//	scanf(" %c", &choice); //return to main input
//
//	return choice;
//}
//
////SUB UPDATE MENU FOR RECIPE
//
//char printUpdateRecipeMenu(void)
//{
//
//
//	printf("\nTo choose a function, enter its label: \n");
//	printf("a) Update/Change the Recipe Slot\n");
//	printf("b) Update/Change Recipe Name\n");
//	printf("c) Update/Change Price of the Recipe\n");
//	printf("d) Quit\n");
//
//	char choice;
//	printf("\nEnter Choice: ");
//	scanf(" %c", &choice); //return to main input
//
//	return choice;
//}
//
//
//
////SWITCH CASE FOR THE MAIN UPDATE MENU
//void updateRecipe(void)
//{
//
//	//MENU
//	bool continueProgram = true;
//	while (continueProgram) {
//
//		char choice = printUpdateMenu();
//		switch (choice)
//		{
//		case 'a': printUpdateHowToCookMenu();
//			break;
//		case 'b':printUpdateIngredientsMenu();
//			break;
//		case 'c': printUpdateRecipeMenu();
//			break
//		case 'd':
//			continueProgram = false;
//			break;
//		default:
//			printf("\ninvalid entry\n\n\n");
//			break;
//		}
//	}
//}