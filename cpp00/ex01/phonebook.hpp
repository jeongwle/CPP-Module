/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:54:19 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/05 21:10:52 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
class phonebook{
    private:
    std::string    first;
    std::string    last;
    std::string    nick;
    std::string    phone;
    std::string    secret;
    public:
    phonebook();
    ~phonebook();
    void    add();
    void    swap(phonebook *book);
    void    search(phonebook *book, int count);
    void    print(const std::string str);
};



#endif