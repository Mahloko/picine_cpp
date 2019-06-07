/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:19:45 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/05 13:27:11 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact
{
	public:
		Contact( void );
		~Contact( void );
		void			disDets(Contact) const;
		void			contDets(Contact cont[], int) const;
		void			searchCont(Contact cont[], int numConts) const;
		void			createContact();
	
	private:
		std::string	Contact::*	_s[11];
		std::string				_firstName;
		std::string				_lastName;
		std::string				_nickname;
		std::string				_login;
		std::string				_postalAddress;
		std::string				_emailAddress;
		std::string				_phoneNumber;
		std::string				_birthdayDate;
		std::string				_favoriteMeal;
		std::string				_underwearColor;
		std::string				_darkestSecret;
		void					_disContDets(Contact) const;
		std::string				_get(std::string Contact::*s) const;
		void					_set(std::string Contact::*s, std::string);
};

std::string	contType( int );
std::string	prompt( void );
void		searchPage(std::string, int);
void        flushInput();

#endif