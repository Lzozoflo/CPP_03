/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:19:53 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/01 12:40:59 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*---------------constructor------Canonical-------destructor----------------*/


DiamondTrap::DiamondTrap( void )
{
	writeConstructorCall("DiamondTrap Default");
	this->_HitPoint = _HitPoint;
	this->_EnergyPoint = _EnergyPoint;
	this->_AttackDamage = _AttackDamage;
}


DiamondTrap::DiamondTrap( const DiamondTrap &other )
{
	writeConstructorCall("DiamondTrap Copy");
	this->_Name = other._Name;
	this->_HitPoint = other._HitPoint;
	this->_EnergyPoint = other._EnergyPoint;
	this->_AttackDamage = other._AttackDamage;
}


DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )
{
	std::cout << BLUE << "operator DiamondTrap '=' is Called" << RESET << std::endl;
	if (this != &other){
		this->_Name = other._Name;
		this->_HitPoint = other._HitPoint;
		this->_EnergyPoint = other._EnergyPoint;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}


DiamondTrap::~DiamondTrap( void )
{
	writeDestructorCall("DiamondTrap");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---------------constructor-------------destructor----------------*/


DiamondTrap::DiamondTrap( const std::string name ) :
ClapTrap(name + "_clap_name"),
_Name(name)
{
	writeConstructorCall("DiamondTrap Name");
	std::cout << this->_Name << std::endl;
	std::cout << this->_HitPoint << std::endl;
	std::cout << this->_EnergyPoint << std::endl;
	std::cout << this->_AttackDamage << std::endl;

	std::cout << ClapTrap::_Name << std::endl;

}


/*---------------constructor-------------destructor----------------*/

/*----func----*/


void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}




void DiamondTrap::whoAmI()
{
	std::cout << "Diamond name: " << this->_Name << " Claptrap name: " << ClapTrap::_Name << std::endl;
}

/*----func----*/
