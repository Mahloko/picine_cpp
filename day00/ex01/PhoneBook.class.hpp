#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class	PhoneBook
{
	public:
		std::string	Contact::*s[11];
		
		PhoneBook( void );
		~PhoneBook( void );
		Contact	addCont();
		void	contDets(Contact cont[], int) const;
		void	searchCont(Contact cont[], int) const;
		void	disContDets(Contact) const;
};

#endif