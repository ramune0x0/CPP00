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
 
// とりあえず、何かが入力されたら* LOUD AND UNBEARABLE FEEDBACK NOISE *と出力する関数を作る
// 次に、コマンドラインから入力を受け取ってそのまま出力する関数を作る
// アルファベットの小文字が来たらその文字を大文字にする分岐を作る
int main(int argc,char **argv)
{ 
    if(argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
    else 
    {
        for(int i=1;i<argc;i++)
        {
            for(int j=0;argv[i][j];j++)
            {
                char c = argv[i][j];
                if(islower(c))
                    c = (char)toupper(c);
                std::cout << c;
            }          
        }
        std::cout << std::endl;
    }
    return 0;
}