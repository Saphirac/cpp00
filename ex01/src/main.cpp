/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 03:49:28 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/04/25 21:32:54 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

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
			book.add_contact();
		else if (input == "SEARCH")
			book.search_contact();
		std::cout << "> ";
	}
	return 0;
}
