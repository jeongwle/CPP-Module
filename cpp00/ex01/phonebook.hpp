/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:54:19 by jeongwle          #+#    #+#             */
/*   Updated: 2021/07/16 21:42:10 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
class phonebook{
    std::string    first;
    std::string    last;
    std::string    nick;
    std::string    phone;
    std::string    secret;
    int     idx;
    public:
    phonebook();
    ~phonebook();
    void    add(char *str);
};



#endif