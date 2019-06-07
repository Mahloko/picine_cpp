/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:19:33 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/05 14:04:41 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::	Contact( void )
{ 
	this->_s[0] = &Contact::_firstName;
	this->_s[1] = &Contact::_lastName;
	this->_s[2] = &Contact::_nickname;
	this->_s[3] = &Contact::_login;
	this->_s[4] = &Contact::_postalAddress;
	this->_s[5] = &Contact::_emailAddress;
	this->_s[6] = &Contact::_phoneNumber;
	this->_s[7] = &Contact::_birthdayDate;
	this->_s[8] = &Contact::_favoriteMeal;
	this->_s[9] = &Contact::_underwearColor;
	this->_s[10] = &Contact::_darkestSecret;
	return ;
}

Contact::	~Contact( void ) { return ; }

std::string	Contact::_get(std::string Contact::*_s) const { return this->*_s; }

void		Contact::_set(std::string Contact::*_s, std::string str)
{
	this->*_s = str;
	return ;
}

void		Contact::contDets(Contact cont[], int numConts) const
{
	int	i;

	while (1)
	{
		std::cout << "Please enter the disired index : ";
		std::cin >> i;
		std::cout << std::endl;
		if (std::cin.good())
		{
			flushInput();
			if (i >= 0 && i < numConts)
				break ;
			std::cout << "Contact does not exist ";
		}
		else
		{
			std::cout << "Not an integer! ";
			flushInput();
		}
	}
	_disContDets(cont[i]);
	return ;
}

void			Contact::_disContDets(Contact cont) const
{
	int	i;

	i = -1;
	while (++i < 11)
		std::cout << contType(i) << cont._get(this->_s[i]) << std::endl;
	std::cout << std::endl;
	return ;
}

void			Contact::createContact()
{
	int			i;
	std::string str;

	i = -1;
	while (++i < 11)
	{
		std::cout << contType(i);
		getline(std::cin, str);
		this->_set(this->_s[i], str);
	}
	return ;
}

void			Contact::searchCont(Contact cont[], int numConts) const
{
	int		i;

	i = -1;
	std::cout<< '|' << std::setfill(' ') << std::setw(10) << "index";
	std::cout<< '|' << std::setfill(' ') << std::setw(10) << "first name";
	std::cout<< '|' << std::setfill(' ') << std::setw(10) << "last name";
	std::cout<< '|' << std::setfill(' ') << std::setw(10) << "nickname";
	std::cout << "|";
	while (++i < numConts)
	{
		std::cout << std::endl << "|         "<< i;
		searchPage(cont[i]._get(this->_s[0]), cont[i]._get(this->_s[0]).length());
		searchPage(cont[i]._get(this->_s[1]), cont[i]._get(this->_s[1]).length());
		searchPage(cont[i]._get(this->_s[2]), cont[i]._get(this->_s[2]).length());
		std::cout << "|";
	}
	std::cout << std::endl;
	contDets(cont, numConts);
	return ;
}