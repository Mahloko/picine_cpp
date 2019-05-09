#include "Contact.class.hpp"

Contact::	Contact( void ) { return ; }

Contact::	~Contact( void ) { return ; }

void		Contact::set(std::string Contact::*s, std::string str)
{
	this->*s = str;
	return ;
}

std::string	Contact::get(std::string Contact::*s) const { return this->*s; }