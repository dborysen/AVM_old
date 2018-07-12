// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Avm.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/07/12 12:25:30 by dborysen          #+#    #+#             //
//   Updated: 2018/07/12 12:25:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AVM_HPP
# define AVM_HPP
# include <iostream>
# include <vector>
# include <string>
# include <fstream>
# include <stdexcept>

const int	PUSH = 0;
const int	POP = 1;
const int	DUMP = 2;
const int	ASSERT = 3;
const int	ADD = 4;
const int	SUB = 5;
const int	MUL = 6;
const int	DIV = 7;
const int	MOD = 8;
const int	PRINT = 9;
const int	EXIT = 10;

enum{hbjb, fgh,dsf};

class Avm
{
	public:
		Avm();		
		Avm(std::string file_name);
		~Avm();

	private:
		std::string					_fileName;
		std::vector<std::string>	_myData;

		Avm(Avm const &other);		
		void		read_data();
		void		show_data();
		Avm const	&operator=(Avm const &other);
};


#endif