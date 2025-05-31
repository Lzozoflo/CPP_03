/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 08:27:46 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

int main()
{
	std::string name1 = "Bob";
	ScavTrap	bob(name1);
	std::string name2 = "Jimmy";
	ClapTrap	jimmy(name2);


	jimmy.attack("bob");
	bob.guardGate();
	bob.attack("jimmy");
	jimmy.takeDamage(20);

	ScavTrap mike(bob);
	mike.guardGate();
	mike.takeDamage(9000);

	return 0;
}
