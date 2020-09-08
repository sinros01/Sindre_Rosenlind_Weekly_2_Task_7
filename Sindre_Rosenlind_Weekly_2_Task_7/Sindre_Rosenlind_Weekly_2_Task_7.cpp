#include <iostream>
#include <string>

int main() {
	char grade = ' ';
	std::cout << "What grade would you like in Programming 1?" << std::endl;
	std::cout << "Enter grade:";
	std::cin >> grade;

	switch (grade) {
	case 'A': case 'a':
		std::cout << "Outstanding" << std::endl;
		break;
	case 'B': case 'b':
		std::cout << "Very good" << std::endl;
		break;
	case 'C': case 'c':
		std::cout << "Good" << std::endl;
		break;
	case 'D': case 'd':
		std::cout << "Some flaws" << std::endl;
		break;
	case 'E': case 'e':
		std::cout << "Not very good..." << std::endl;
		break;
	case 'F': case 'f':
		std::cout << "Fail" << std::endl;
		break;
	default:
		std::cout << "That is not a grade!" << std::endl;
	}
	return 0;
}
