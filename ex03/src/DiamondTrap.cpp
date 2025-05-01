/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:19:53 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 08:55:58 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*---------------constructor------Canonical-------destructor----------------*/


DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap()
{
	_HitPoint = FragTrap::_HitPoint;
	_EnergyPoint = ScavTrap::_EnergyPoint;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << BLUE << "Constructor DiamondTrap is Called" << RESET << std::endl;
}


DiamondTrap::DiamondTrap( const DiamondTrap &other )
{
	setName(other.getName());
	_HitPoint = other._HitPoint;
	_EnergyPoint = other._EnergyPoint;
	_AttackDamage = other._AttackDamage;
	std::cout << BLUE << "Constructor DiamondTrap Copy is Called" << RESET << std::endl;
}


DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )
{
	if (this != &other){
		setName(other.getName());
		_HitPoint = other._HitPoint;
		_EnergyPoint = other._EnergyPoint;
		_AttackDamage = other._AttackDamage;
	}
	std::cout << BLUE << "Constructor DiamondTrap '=' is Called" << RESET << std::endl;
	return (*this);
}


DiamondTrap::~DiamondTrap( void )
{
	std::cout << YELLOW << getName() << " Destructor DiamondTrap is Called" << RESET << std::endl;
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---------------constructor-------------destructor----------------*/


DiamondTrap::DiamondTrap( const std::string name ) :
ClapTrap(name + "_clap_name"),
ScavTrap(name + "_clap_name"),
FragTrap(name + "_clap_name"),
_Name(name)
{

	_HitPoint = FragTrap::_HitPoint;
	_EnergyPoint = ScavTrap::_EnergyPoint;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << BLUE << "Constructor ScavTrap name is Called" << RESET << std::endl;

}


/*---------------constructor-------------destructor----------------*/

/*----func----*/


void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}



void DiamondTrap::whoAmI()
{

}

/*----func----*/
