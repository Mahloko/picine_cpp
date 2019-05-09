#include "PhoneBook.class.hpp"

int			main(void)
{
	Contact 	cont[8];
	PhoneBook	inst;
	std::string	cmd;
	int			index;

	index = 0;
	while (1) {
		cmd = prompt();
		if (cmd == "ADD") {
			if (cmd == "ADD" && index == 7)
				std::cout << "You have enough contacts..." << std::endl;
			else {
					cont[index++] = inst.addCont();
					std::cout  << "Contact Saved" << std::endl << std::endl;
				}
		}
		else if (cmd == "SEARCH")
			inst.searchCont(cont, index);
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}