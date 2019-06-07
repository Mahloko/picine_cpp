/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:56:27 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 16:07:18 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
    int rad;
    int j;
    std::string zomName[4] = {"Timmy", "Persant", "Jim", "Anal"};
    std::string zomType[4] = {"Stalker", "Runner", "Walker", "Crawler"};
    _store = new Zombie*[N];
    
    j = 0;
    while (j < _N)
    {
        rad = rand() % 4;
        _store[j] = new Zombie();
        _store[j]->setName(zomName[rad]);
        _store[j]->setType(zomType[rad]);
        j++;
    }
}

ZombieHorde::~ZombieHorde() 
{
    int j;

    j = 0;
    while(j < _N)
        delete _store[j++];
    return ;
}

void    ZombieHorde::announce()
{
    int j;

    j = 0;
    while (j < _N)
        _store[j++]->announce();
    return ;
}