/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:20:36 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/05 13:54:12 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int			main(void)
{
	Contact 	cont[8];
	int			index;
	PhoneBook	inst;
	std::string	cmd;

	index = 0;
	while (1)
	{
		cmd = prompt();
		if (cmd == "ADD")
		{
			if (cmd == "ADD" && index == 8)
				std::cout << "You have enough contacts..." << std::endl;
			else
			{
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