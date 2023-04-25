/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 23:14:22 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/04/25 23:36:12 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.cpp"

void	truncate(std::string field)
{
	if (field.len() < 10)
	{
		for (i = 0; i < 10 - field.len(); i++)
			std::cout << ' ';
		std::cout << field;
	}
	else
	{
		for (i = 0; i < 9; i++)
			std::cout << field[i];
		std::cout << '.';
	}
}

void	print_all()
{
	std::cout << this->_first_name << '\n';
	std::cout << this->_last_name << '\n';
	std::cout << this->_nickname << '\n';
	std::cout << this->_number << '\n';
	std::cout << this->_darkest_secret << '\n';
}

void	print_for_search()
{
	std::cout << "         " << this->index << '|';
	truncate(this->_first_name);
	std::cout << '|';
	truncate(this->_last_name);
	std::cout << '|';
	truncate(this->_nickname);
	std::cout << '\n';
}

void	add_first_name(char *input)
{
	char	*input;
	
	std::cout << "First name : ";
	std::getline(std::cin, input);
	this->_first_name = input;
}

void	add_last_name(char *input)
{
	char	*input;
	
	std::cout << "Last name : ";
	std::getline(std::cin, input);
	this->_last_name = input;
}

void	add_nickname(char *input)
{
	char	*input;
	
	std::cout << "Nickname : ";
	std::getline(std::cin, input);
	this->_nickname = input;
}

void	add_number(char *input)
{
	char	*input;
	
	std::cout << "Number : ";
	std::getline(std::cin, input);
	this->_number = input;
}

void	add_darkest_secret(char *input)
{
	char	*input;
	
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, input);
	this->_darkest_secret = input;
}
