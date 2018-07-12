// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Avm.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/07/12 12:25:37 by dborysen          #+#    #+#             //
//   Updated: 2018/07/12 12:25:37 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Avm.hpp"

Avm::Avm() {}

Avm::Avm(std::string file_name) : _fileName(file_name), _myData()
{
	read_data();
	show_data();
}

Avm::~Avm() {}

void	Avm::read_data()
{
	std::ifstream fin;

	fin.open(_fileName);
	try
	{
		if (fin.is_open() == false)
			throw std::logic_error("ERROR: can't open current file");
		std::string tmpStr;
		while (fin.eof() == false)
		{
			tmpStr = "";
			getline(fin, tmpStr);
			_myData.push_back(tmpStr);
		}
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	fin.close();
}

void	Avm::show_data()
{
	for (auto data : _myData)
	{
		std::cout << data << std::endl;
	}
}