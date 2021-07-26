/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 01:09:35 by jeongwle          #+#    #+#             */
/*   Updated: 2021/07/16 03:20:49 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>

// class megaphone {
//     char    print;
//     public :
//     megaphone();
//     ~megaphone();
//     void    print_sentence(char c);
//     void    print_noise();
// };

// megaphone::megaphone(){
//     print = 0;
// }
// megaphone::~megaphone(){
//     std::cout << "\n";    
// }
// void megaphone::print_sentence(char c){
//     if ('a' <= c && c <= 'z')
//     {
//         print = c - 32;
//         std::cout << print;
//     }
//     else
//     {
//         std::cout << c;
//     }
// }
// void megaphone::print_noise(){
//     std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
// }

// int main (int argc, char **argv){
//     megaphone mega;
//     int i;
//     int j;

//     if (argc == 1)
//     {
//         mega.print_noise();
//         return (0);
//     }
//     else
//     {
//         i = 1;
//         while (i < argc)
//         {
//             j = 0;
//             while (argv[i][j])
//             {
//                 mega.print_sentence(argv[i][j]);
//                 j++;
//             }
//             i++;
//         }
//     }
//     return (0);   
// }
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "ddd" << "\n";
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str(argv[i]);
            for (size_t j = 0; j < str.length(); j++)
            {
                str[j] = std::toupper(str[j]);
            }
            std::cout << str;
        }
        std::cout << std::endl;
    }
    return (0);
}