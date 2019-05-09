#include "Contact.class.hpp"

void                searchPage(std::string dets, int len)
{//re-visit setw
    int sub;

    sub = 0;
    std::cout << "|";
    if (len < 10) {
        sub = 10 - len;
        while (sub--)
            std::cout << " ";
        std::cout << dets;
    }
    else {
        while (sub < 9)
            std::cout << dets[sub++];
        std::cout << ".";
        }
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