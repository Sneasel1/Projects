#include <iostream>

int readNumber() {
	int num{ };
	std::cout << "Enter an integer" << std::endl;
	std::cin >> num;

	return num;
}

void writeAnswer(int num) {
	std::cout << "The answer is " << num << std::endl;
}

int main() {
	int x{ readNumber() };
	int y{ readNumber() };
	writeAnswer(x + y);

	return 0;
}