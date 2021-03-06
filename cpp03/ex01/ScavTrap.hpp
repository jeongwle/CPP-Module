/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:54:05 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 19:01:15 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& copy);
    ~ScavTrap();
    ScavTrap&   operator=(const ScavTrap& trap);
    void    attack(std::string const& target);
    void    guardGate();
};

#endif