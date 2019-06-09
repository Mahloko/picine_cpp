/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:49:48 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 16:37:02 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class   NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(void);
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap(void);
        
        NinjaTrap&   operator=(NinjaTrap const & rhs);
        void         ninjaShoebox(ClapTrap const & src);
        void         ninjaShoebox(NinjaTrap const & src);
        void         ninjaShoebox(ScavTrap const & src);
        void         ninjaShoebox(FragTrap const & src);
};

#endif