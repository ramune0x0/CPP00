/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haru <haru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:55:30 by haru              #+#    #+#             */
/*   Updated: 2025/11/25 17:00:44 by haru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char** argv)
{
    if (argc < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else{
        for (int i = 1; i < argc; i++){
            for (int j = 0; argv[i][j] != '\0'; j++){
                char c = argv[i][j];
                if (std::islower(c)!=0){
                    c = (char)std::toupper(c);
                }
                std::cout << c;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
