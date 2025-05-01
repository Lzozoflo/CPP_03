/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:04:22 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/30 07:40:16 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"



class ClapTrap
{
	private:
	// {

		std::string		_Name;				//bob
		unsigned int	_HitPoint;			//10
		unsigned int	_EnergyPoint;		//10
		unsigned int	_AttackDamage;		//0

	// }
	public:
	// {

		ClapTrap( void );								//Canonical
		ClapTrap( const ClapTrap &other );				//Canonical
		ClapTrap &operator=( const ClapTrap &other );	//Canonical
		~ClapTrap( void );								//Canonical

		ClapTrap( const std::string &name );

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	// }
};


#endif
