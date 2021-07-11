#include <iostream>

int getnumber(int number)
{
	std::cout << "Geben Sie die " << number << ".Zahl ein!\n";
	int input = 0;
	std::cin >> input;
	return input;
}

void solutionprint(int solution)
{
	std::cout << "Das Ergbenis beträgt " << solution << "!\n\n";
}

void byemessage()
{
	std::cout << "Good bye!\n\n";
}

int addition()
{
	int number_1 = getnumber(1);
	int number_2 = getnumber(2);
	return number_1 + number_2;
}

int subtraction()
{
	int number_1 = getnumber(1);
	int number_2 = getnumber(2);
	return number_1 - number_2;
}

int multiplication()
{
	int zahl_1 = getnumber(1);
	int zahl_2 = getnumber(2);
	return zahl_1 * zahl_2;
}

int division()
{
	int zahl_1 = getnumber(1);
	int zahl_2 = getnumber(2);
	return zahl_1 / zahl_2;
}

void menu()
{
	bool keeprunning = true;
	while (keeprunning) {
		int input = 0;
		std::cout 
			<< "(1)Addition\n"
			<< "(2)Subtraktion\n"
			<< "(3)Multiplikation\n"
			<< "(4)Division\n"
			<< "(5)Quit\n";
		std::cout << "Input: ";
		std::cin >> input;
		switch (input) {
		case 1: solutionprint(addition()); break;
		case 2: solutionprint(subtraction()); break;
		case 3: solutionprint(multiplication()); break;
		case 4: solutionprint(division()); break;
		case 5: byemessage(); keeprunning = false; break;
		default: std::cout << "Invalid Input!\n"; break;	
		}
	}
}

int main() 
{
	menu();

	return 0;
}