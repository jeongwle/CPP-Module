/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:04:57 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 20:31:37 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(){
    return ;
}

Replace::~Replace(){
    return ;
}

void    Replace::init(std::string filename, std::string s1, std::string s2){
    _filename = filename;
    _before = s1;
    _after = s2;
}

int    Replace::ft_replace(){
    std::ifstream fin(_filename);
    if (fin.fail())
    {
        std::cout << "No such a file" << std::endl;
        return (-1);
    }
    std::string line;
    std::ofstream fout(_filename.append(".replace"));
    while (!fin.eof()){
        std::getline(fin, line);
        while (line.find(_before) != std::string::npos){
            for (std::size_t i = 0; i < line.find(_before); i++){
                fout << line[i];
            }
            fout << _after;
            line.erase(0, line.find(_before) + _before.length());
        }
        fout << line << std::endl;
    }
    fout.close();
    fin.close();
    return (0);
}
