/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:44 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 19:01:04 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
protected:
    ScavTrap();
public:
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& copy);
    ~ScavTrap();
    ScavTrap&   operator=(const ScavTrap& trap);
    void    attack(std::string const& target);
    void    guardGate();
};

#endif
