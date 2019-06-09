/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:08:42 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 13:16:00 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);
        
        FragTrap&   operator=(FragTrap const & rhs);
        
        void        vaulthunter_dot_exe(std::string const & target);
        std::string getName(void) const;
};

// std::ostream	&operator<<(std::ostream & o, FragTrap const & i);

#endif