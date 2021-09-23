/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:14:33 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/22 20:13:20 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain{
private :
    std::string _Ideas[100];
public :
    Brain();
    ~Brain();
    Brain(const Brain& copy);
    Brain&  operator=(const Brain& brain);
    std::string getIdea(int num) const;
    void    setIdea(int num, std::string idea);
    std::string itoa(int num);
};

#endif
