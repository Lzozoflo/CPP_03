/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/03 13:09:37 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int main()
{
	std::string name1 = "Bob";
	ClapTrap	bob(name1);
	std::string name2 = "Jimmy";
	ClapTrap	jimmy(name2);

	bob.attack("jimmy");
	jimmy.takeDamage(0);
	bob.attack("jimmy");
	jimmy.beRepaired(30);
	jimmy.takeDamage(9000);
	jimmy.beRepaired(30);
	jimmy.takeDamage(0);
	return 0;
}
