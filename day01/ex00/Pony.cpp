#include "Pony.hpp"

Pony::Pony(std::string str) : _pony(str)
{
    std::cout << this->_pony << " a is pony on the ";
    return ;
}

Pony::~Pony() 
{
    std::cout << this->_pony << " no longer exsits" << std::endl;
    return ;
}