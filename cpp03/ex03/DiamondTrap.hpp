/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:08 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 18:47:53 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap{
private:
    std::string _Name;
    DiamondTrap();
public :
    ~DiamondTrap();
    DiamondTrap(const std::string name);
    DiamondTrap(const DiamondTrap& copy);
    DiamondTrap&    operator=(const DiamondTrap& trap);
    void    attack(std::string const& target);
    std::string getName() const;
    virtual void    whoAmI(void);
};

#endif
