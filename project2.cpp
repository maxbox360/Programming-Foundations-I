//-------------------------------------------
// Purpose: Input/Output experience
// Author: Max Sanderlin
//-------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

// Global User Input Variables
int meatInput, veggieInput, pastaInput, potatoInput, chocolateInput, fruitInput;
float budgetInput;

void userInput(){

	// Meat input
	cout << "How much do you enjoy meat on a scale of 1 to 100?\n";
	cin >> meatInput;
	while(meatInput < 1 || meatInput > 100){
		cout << "My apologies that is an invalid response.\n";
		cout << "How much do you enjoy meat on a scale from 1 to 100?\n";
		cin  >> meatInput;
	}

	// Veggie Input
	cout << "How much do you enjoy vegetables on a scale of 1 to 100?\n";
	cin >> veggieInput;
	while(veggieInput < 1 || veggieInput > 100){
		cout << "My apologies that is an invalid response.\n";
		cout << "How much do you enjoy vegetables on a scale from 1 to 100?\n";
		cin >> veggieInput;
	}

	// Pasta Input
	cout << "How much do you enjoy pasta on a scale of 1 to 100?\n";
	cin >> pastaInput;
	while(pastaInput < 1 || pastaInput > 100){
		cout << "My apologies that is an invalid response.\n";
		cout << "How much do you enjoy pasta on a scale from 1 to 100?\n";
		cin >> pastaInput;
	}

	// Potato Input
	cout << "How much do you enjoy potatoes on a scale of  1 to 100?\n";
	cin >> potatoInput;
	while(potatoInput < 1 || potatoInput > 100){
		cout << "My apologies taht is an invalid response.\n";
		cout << "How much do you enjoy potatoes on a scale from 1 to 100?\n";
		cin >> potatoInput;
	}

	// Chocolate Input
	cout << "How much do you enjoy chocolate on a scale of 1 to 100?\n";
	cin >> chocolateInput;
	while(chocolateInput < 1 || chocolateInput > 100){
		cout << "My apologies that is an invalid response.\n";
		cout << "How much do you enjoy chocolate on a scale of 1 to 100?\n";
		cin >> chocolateInput;
	}

	// Fruit Input
	cout << "How much do you enjoy fruit on a scale of 1 to 100?\n";
	cin >> fruitInput;
	while(fruitInput < 1 || fruitInput > 100){
		cout << "My apologies that is an invalid response.\n";
		cout << "How much do you enjoy fruit on a scale of 1 to 100?\n";
		cin >> fruitInput;
	}

	cout << "What is your budget for the evening?\n";
	cin >> budgetInput;
	
	cout << "Very good. We will make this information and bring out your most optimized meal!\n";
}


int main(){

	// Variables to store answers and check which items to serve
	string appetizer, mainCourse, dessert = " ";
	bool appBool 		= true;
	bool mainCourseBool     = true;
	bool dessertBool        = true;
	int appPrice        =  5;
	int mainCoursePrice = 10;
	int dessertPrice    =  5;

	// Welcome!
	cout << "Welcome to Max's Restaurant!" 				<< endl;
	cout << "Here the chef will make a surprise meal for you";
	cout << "based on your answers to the questions below!" 	<< endl;
	cout << "Enjoy your meal!" 					<< endl;

	userInput();

	// Appetizer Input
	if(budgetInput > 15){
		if(meatInput < 10 && veggieInput < 10){
			appetizer = "Garlic Bread\n";
		}else if(meatInput > veggieInput){
			appetizer = "Chicken Wings\n";
		}else if(meatInput < veggieInput){
			appetizer = "Garden Salad\n";
		}
	}else{
		appetizer = "N/A";
		appBool = false;
	}

	// Main Course Input
	if(budgetInput > 10){
		if(meatInput < 10 && potatoInput < 10 && pastaInput < 10 && veggieInput < 10){
			mainCourse = "Cheese Omelet\n";
		}else if(meatInput > veggieInput){
			if(potatoInput > pastaInput){
				mainCourse = "Steak and Baked Potato\n";
			}else{
				mainCourse = "Spaghetti and Meat Sauce\n";
			}
		}else if(meatInput < veggieInput){
			mainCourse = "Pasta Primavera\n";
		}
	}else{
		mainCourse = "N/A";
		mainCourseBool = false;
	}	

	return 0;
}
