/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:16:46 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 16:30:49 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include "Zombie.hpp"

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce();
        void    setName(std::string);
        void    setType(std::string);
    private:
        std::string _type;
        std::string _name;
};

#endif