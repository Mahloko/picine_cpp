#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class	Contact
{
	public:

		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		login;
		std::string		postalAddress;
		std::string		emailAddress;
		std::string		phoneNumber;
		std::string		birthdayDate;
		std::string		favoriteMeal;
		std::string		underwearColor;
		std::string		darkestSecret;

		Contact( void );
		~Contact( void );
		std::string		get(std::string Contact::*s) const;
		void			set(std::string Contact::*s, std::string);
};

std::string	contType( int );
std::string	prompt( void );
void		searchPage(std::string, int);

#endif