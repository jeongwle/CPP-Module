/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:16:04 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:16:07 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
class Zombie{
    private:
    std::string _name;
    public:
    Zombie();
    ~Zombie();
    void    announce();
    Zombie* newZombie(std::string name);
    void    randomChump(std::string name);
};
#endif
