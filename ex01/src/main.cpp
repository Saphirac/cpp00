/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 03:49:28 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/04/25 14:11:42 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

int	main()
{
	std::string	input;
	Phonebook	book;
	
	std::cout << "> ";
	while(std::getline(std::cin, input))
	{
		if (input == "EXIT")
			return 0;
		else if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		std::cout << "> ";
	}
}
