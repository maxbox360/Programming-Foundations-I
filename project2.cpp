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
}


int main(){

	return 0;
}
