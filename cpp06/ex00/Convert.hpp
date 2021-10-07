/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:01:18 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/07 17:41:47 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <cstdlib>
# include <climits>
# include <sstream>


class Convert{
private :
    std::string _argv;
    double _doubleValue;
public :
    Convert();
    ~Convert();
    Convert(std::string argv);
    Convert(const Convert& copy);
    Convert& operator=(const Convert& convert);
    void convertArgv(void);
    bool isChar(std::string argv);
    bool isInt(std::string argv);
    bool isFloat(std::string argv);
    bool isDouble(std::string argv);
    void printAll(double doubleValue);
};

#endif