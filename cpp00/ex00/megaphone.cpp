/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:53:52 by jeongwle          #+#    #+#             */
/*   Updated: 2021/07/16 17:54:03 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class megaphone{
    char    print;
    public :
    megaphone();
    ~megaphone();
    void    print_argv(char *str);
};

megaphone::megaphone(){
    print = 0;
}

megaphone::~megaphone(){
    std::cout << "\n";
}

void    megaphone::print_argv(char *str){
    int i;

    i = 0;
    while (str[i])
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            print = str[i] - 32;
            std::cout << print;
        }
        else
        {
            std::cout << str[i];
        }
        i++;
    }
}

int main(int argc, char **argv){
    megaphone mega;
    int i;

    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while (i < argc)
        {
            mega.print_argv(argv[i]);
            i++;
        }
    }
    return (0);
}
