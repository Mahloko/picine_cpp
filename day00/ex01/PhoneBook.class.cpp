#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void )
{
	this->s[0] = &Contact::firstName;
	this->s[1] = &Contact::lastName;
	this->s[2] = &Contact::nickname;
	this->s[3] = &Contact::login;
	this->s[4] = &Contact::postalAddress;
	this->s[5] = &Contact::emailAddress;
	this->s[6] = &Contact::phoneNumber;
	this->s[7] = &Contact::birthdayDate;
	this->s[8] = &Contact::favoriteMeal;
	this->s[9] = &Contact::underwearColor;
	this->s[10] = &Contact::darkestSecret;
	return ;
}

PhoneBook::~PhoneBook( void ) {	return ; }

Contact	PhoneBook::addCont()
{
	int			i;
	std::string	str;
	Contact		cont;
	
	i = -1;
	while (++i < 11) {
		std::cout << contType(i);
		getline(std::cin, str);
		cont.set(this->s[i], str);
	}
	return cont;
}

void	PhoneBook::searchCont(Contact cont[], int numConts) const
{
	int		i;

	i = -1;
	std::cout << "|     index|first name| last name|  nickname|";
	while (++i < numConts) {
		std::cout << std::endl << "|         "<< i;
		searchPage(cont[i].get(this->s[0]), cont[i].get(this->s[0]).length());
		searchPage(cont[i].get(this->s[1]), cont[i].get(this->s[1]).length());
		searchPage(cont[i].get(this->s[2]), cont[i].get(this->s[2]).length());
	}
	std::cout << "|" << std::endl;
	contDets(cont, numConts);
	return ;
}

void	PhoneBook::contDets(Contact cont[], int numConts) const
{//look into cin methods
	int	i;

	i = -1;
	while (1)
		if (!(i >= 0 && i < numConts))
		{
			std::cout << "Please enter the disired index" << std::endl;
			std::cin >> i;
			}
		else
			break ;
	disContDets(cont[i]);	
	return ;
}

void		PhoneBook::disContDets(Contact cont) const
{
	int	i;

	i = -1;
	while (++i < 11)
		std::cout << contType(i) << cont.get(this->s[i]) << std::endl;
	std::cout << std::endl;
	return ;
}