/*
* Date: 02-03-2021
* Programmer: Joshua Shem Carpio
* Purpose: This program is an updated version of the cola machine. It can take in change and
*		   prompt the user to input the right amount of currency if they did not do so.
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>

class vendingMachine {
private:
	//calculation variables
	double money;
	double change;

	//drinks
	double coca_Cola = 2.50;
	double sprite = 2.50;
	double pepsi = 2.00;
	double gatorade = 1.50;
	double water = 1.00;

public:
	//functions
	void colaChange();
	void spriteChange();
	void pepsiChange();
	void gatoradeChange();
	void waterChange();
};

//cola function
void vendingMachine::colaChange() {
	std::cout << "\nPlease input $: ";
	while (true)
	{
		std::cin >> money;
		if (money >= coca_Cola)
			break;
		else
		{
			std::cout << "\nYou have insufficient currency." << std::endl;
			std::cout << "Please input the right amount: ";
		}
	}
	change = (money - coca_Cola);
	std::cout << "\nYour change is: $" << change << "\n" << std::endl;
}

//sprite function
void vendingMachine::spriteChange() {
	std::cout << "\nPlease input $: ";
	while (true) 
	{
		std::cin >> money;
		if (money >= sprite)
			break;
		else
		{
			std::cout << "\nYou have insufficient currency." << std::endl;
			std::cout << "Please input the right amount: ";
		}
	}
	change = (money - sprite);
	std::cout << "\nYour change is: $" << change << "\n" << std::endl;
}

//gatorade function
void vendingMachine::gatoradeChange() {
	std::cout << "\nPlease input $: ";
	while (true)
	{
		std::cin >> money;
		if (money >= gatorade)
			break;
		else
		{
			std::cout << "\nYou have insufficient currency." << std::endl;
			std::cout << "Please input the right amount: ";
		}
	}
	change = (money - gatorade);
	std::cout << "\nYour change is: $" << change << "\n" << std::endl;
}

//pepsi function
void vendingMachine::pepsiChange() {
	std::cout << "\nPlease input $: ";
	while (true)
	{
		std::cin >> money;
		if (money >= pepsi)
			break;
		else
		{
			std::cout << "\nYou have insufficient currency." << std::endl;
			std::cout << "Please input the right amount: ";
		}
	}
	change = (money - pepsi);
	std::cout << "\nYour change is: $" << change << "\n" << std::endl;
}

//water function
void vendingMachine::waterChange() {
	std::cout << "\nPlease input $: ";
	while (true)
	{
		std::cin >> money;
		if (money >= water)
			break;
		else
		{
			std::cout << "\nYou have insufficient currency." << std::endl;
			std::cout << "Please input the right amount: ";
		}
	}
	change = (money - water);
	std::cout << "\nYour change is: $" << change << "\n" << std::endl;
}

int main() {

	//object for the vendingMachine class
	vendingMachine count;

	//variable to store the value being inputed from user
	
	for (int num = 0; num != 6; num++) {
		//Menu/Machine
		std::cout << "      Vending Machine    " << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "1. Coca Cola $2.50" << std::endl;
		std::cout << "2. Sprite $2.50" << std::endl;
		std::cout << "3. Pepsi $2.00" << std::endl;
		std::cout << "4. Gatorade $1.50" << std::endl;
		std::cout << "5. Water $1.00" << std::endl;
		std::cout << "6. Leave the Machine" << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "Pick your choice of drink by inputting a number: ";
		std::cin >> num;

		//choices 
		if (num == 1)
		{
			std::cout << "\nCola is $2.50";
			count.colaChange();
		}
		else if (num == 2)
		{
			std::cout << "\nSprite $2.50";
			count.spriteChange();
		}
		else if (num == 3)
		{
			std::cout << "\nPepsi $2.00";
			count.pepsiChange();
		}
		else if (num == 4)
		{
			std::cout << "\nGatorade $1.50";
			count.gatoradeChange();
		}
		else if (num == 5)
		{
			std::cout << "\nWater $1.00";
			count.waterChange();
		}
		else if (num == 6)
		{
			exit(0);
		}

		}
	return 0;
}