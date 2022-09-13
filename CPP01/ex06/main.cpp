#include "harl.hpp"

int find_index(std::string level) {
	int index = (level == "DEBUG") + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4;

	return index;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "invalid input." << std::endl;
		return (-1);
	}

	Harl harl;

	switch (find_index(argv[1])){
		case 1:
			harl.debug();
		case 2:
			harl.info();
		case 3:
			harl.warning();
		case 4:
			harl.error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}