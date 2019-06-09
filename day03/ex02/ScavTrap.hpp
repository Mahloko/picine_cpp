/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 07:17:06 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 13:18:34 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap();

        ScavTrap&   operator=(ScavTrap const & rhs);
        
        void        challengeNewcomer(std::string const & target);
};

#endif