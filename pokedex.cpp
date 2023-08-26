#include <iostream>

int getInput() {
	std::cout << "Enter a pokedex number from 1-6" << std::endl;
	int num{ };
	std::cin >> num;
	return num;
}

void displayPokemon(int num) {
    switch (num) {
    case 1:
        std::cout << "Mewtwo";
        break;
    case 2:
        std::cout << "Sneasel";
        break;
    case 3:
        std::cout << "Gyarados";
        break;
    case 4:
        std::cout << "Tyranitar";
        break;
    case 5:
        std::cout << "Raikou";
        break;
    case 6:
        std::cout << "Steelix";
        break;
    case 11:
        std::cout << "Missingno";
        break;
    default:
        std::cout << "Error!";
        break;
    }
}

int main() {
	displayPokemon(getInput());
	return 0;
}