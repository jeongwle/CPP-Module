/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:24 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 18:22:16 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
protected:
    FragTrap();
public:
    FragTrap(const std::string name);
    FragTrap(const FragTrap& copy);
    ~FragTrap();
    FragTrap&   operator=(const FragTrap& trap);
    void    highFivesGuys(void);
};

#endif
