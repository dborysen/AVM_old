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
# include "Lexer.hpp"

class Avm
{
	public:
		Avm();		
		Avm(std::string file_name);
		~Avm();

	private:
		std::string					_fileName;
		std::vector<std::string>	_myData;
		Lexer						_lexer;

		Avm(Avm const &other);		
		
		void		read_data();
		void		show_data();
		Avm const	&operator=(Avm const &other);
};


#endif