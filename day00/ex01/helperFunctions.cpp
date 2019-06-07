/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperFunctions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:20:25 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/05 13:27:33 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void                searchPage(std::string dets, int len)
{
    if (len > 10)
        dets.replace(9, len, 1, '.');
    std::cout<< '|' << std::setfill(' ') << std::setw(10) << dets;
    return ;
}

std::string         prompt( void )
{
    std::string cmd;

    std::cout << "Please enter one of the following commands";
	std::cout << std::endl << "ADD || SEARCH || EXIT" << std::endl;
    getline(std::cin, cmd);
    return cmd;
}

std::string         contType(int t)
{
    if (t == 0)
        return "First Name      : ";
    else if (t == 1)
        return "Last Name       : ";
    else if (t == 2)
        return "Nickname        : ";
    else if (t == 3)
        return "Login           : ";
    else if (t == 4)
        return "Postal Address  : ";
    else if (t == 5)
        return "Email Address   : ";
    else if (t == 6)
        return "Phone number    : ";
    else if (t == 7)
        return "Birthday Date   : ";
    else if (t == 8)
        return "favorite Meal   : ";
    else if (t == 9)
        return "Underwear Color : ";
    return "Darkest Secret  : ";
}

void        flushInput()
{ 
    	    std::cin.clear();
        	std::cin.ignore(INT_MAX, '\n'); // NB: preferred method for flushing cin
}