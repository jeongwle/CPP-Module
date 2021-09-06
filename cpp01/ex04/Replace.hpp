/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:04:50 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/06 12:04:52 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <string>
# include <fstream>
# include <iostream>

class Replace{
    private :
    std::string _before;
    std::string _after;
    std::string _filename;
    public :
    Replace();
    ~Replace();
    void    init(std::string filename, std::string s1, std::string s2);
    int     ft_replace();
};

# endif
