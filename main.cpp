// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/07/12 11:35:29 by dborysen          #+#    #+#             //
//   Updated: 2018/07/12 11:35:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Avm.hpp"

//  1. READ DATA FROM FILE, PASSED LIKE PARAMETR / FROM STANDART OUTPUT
//  2. MAKE FINAL STATE TABLE FOR LEXER
//  3. SPLIT DATA IN TOKENS
//  4. VALIDATE DATA
//  5. SAVE OPERATIOANS IN STACK
//  6. DO OPERATIONS IN ORDER 

int main(int argn, char **argv)
{
    if (argn == 2)
    {
        Avm myAvm(argv[1]);
    }




    return (0);
}