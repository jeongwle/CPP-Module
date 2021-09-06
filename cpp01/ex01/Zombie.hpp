/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:16:51 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:16:53 by jeongwle         ###   ########.fr       */
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
    Zombie* zombiehorde(int N, std::string name);
};
#endif
