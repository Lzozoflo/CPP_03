/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/30 15:44:02 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::string name1 = "Bob";
	ScavTrap	bob(name1);
	std::string name2 = "Jimmy";
	FragTrap	finn("finn");
	ClapTrap	jimmy(name2);


	jimmy.attack("bob");
	bob.guardGate();
	bob.takeDamage(10);
	finn.highFivesGuys();
	bob.attack("jimmy");
	return 0;
}
