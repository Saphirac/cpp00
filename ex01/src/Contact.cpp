/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 23:14:22 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/09 20:40:00 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

Contact::Contact()
{
	index = -1;
}

Contact::~Contact(void){}

void	Contact::_truncate(std::string field)
{
	if (field.length() <= 10)
	{
		for (unsigned long i = 0; i < (10 - field.length()); i++)
			std::cout << ' ';
		std::cout << field;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << field[i];
		std::cout << '.';
	}
}

void	Contact::print_all()
{
	std::cout << this->_first_name << '\n';
	std::cout << this->_last_name << '\n';
	std::cout << this->_nickname << '\n';
	std::cout << this->_number << '\n';
	std::cout << this->_darkest_secret << '\n';
}

void	Contact::print_for_search()
{
	std::cout << "         " << this->index << '|';
	Contact::_truncate(this->_first_name);
	std::cout << '|';
	Contact::_truncate(this->_last_name);
	std::cout << '|';
	Contact::_truncate(this->_nickname);
	std::cout << '\n';
}

int	Contact::add_first_name()
{
	std::string input;
	
	std::cout << "First name : ";
	std::getline(std::cin, input);
	if (input.empty())
		return (1);
	this->_first_name = input;
	return (0);
}

int	Contact::add_last_name()
{
	std::string input;
	
	std::cout << "Last name : ";
	std::getline(std::cin, input);
	if (input.empty())
		return (1);
	this->_last_name = input;
	return (0);
}

int	Contact::add_nickname()
{
	std::string input;
	
	std::cout << "Nickname : ";
	std::getline(std::cin, input);
	if (input.empty())
		return (1);
	this->_nickname = input;
	return (0);
}

int	Contact::add_number()
{
	std::string input;
	
	std::cout << "Number : ";
	std::getline(std::cin, input);
	if (input.empty())
		return (1);
	this->_number = input;
	return (0);
}

int	Contact::add_darkest_secret()
{
	std::string input;
	
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, input);
	if (input.empty())
		return (1);
	this->_darkest_secret = input;
	return (0);
}
