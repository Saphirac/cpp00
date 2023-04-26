/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 04:12:53 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/04/26 03:16:19 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class	Phonebook {
private:
	Contact repertory[8];
public:
	Phonebook(){};
	~Phonebook(){};
	
	void	add_contact();
	void	search_contact();
};

#endif 
