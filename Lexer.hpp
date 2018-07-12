// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Lexer.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/07/12 16:27:06 by dborysen          #+#    #+#             //
//   Updated: 2018/07/12 16:27:07 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LEXER_HPP
# define LEXER_HPP

# include <iostream>
# include <string>
# include <vector>

class Lexer
{
	public:
		enum operations
		{
			PUSH,
			POP,
			DUMP,
			ASSERT,
			ADD,
			SUB,
			MUL,
			DIV,
			MOD,
			PRINT,
			EXIT
		};

		enum final_table_states
		{
			OPERATION,
			TYPE,
			VALUE,
			ERROR
		};

		typedef struct	s_tokens
		{
			final_table_states	state;
			std::string			str;
		}				t_tokens;

		Lexer();
		~Lexer();

		void	splitOnTokens(std::vector<std::string> const &data);

	private:
		std::vector<t_tokens>	_tokens;

		Lexer(Lexer const &);

		Lexer	&operator=(Lexer const&);
};

#endif