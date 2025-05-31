/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:19:53 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 09:03:43 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*---------------constructor------Canonical-------destructor----------------*/


FragTrap::FragTrap( void ) : ClapTrap()
{
	writeConstructorCall("FragTrap Default");
	this->_HitPoint = 100;
	this->_AttackDamage = 30;
}


FragTrap::FragTrap( const FragTrap &other )
{
	writeConstructorCall("FragTrap Copy");
	this->_Name = other._Name;
	this->_HitPoint = other._HitPoint;
	this->_EnergyPoint = other._EnergyPoint;
	this->_AttackDamage = other._AttackDamage;
}


FragTrap &FragTrap::operator=( const FragTrap &other )
{
	std::cout << BLUE << "operator FragTrap '=' is Called" << RESET << std::endl;
	if (this != &other){
		this->_Name = other._Name;
		this->_HitPoint = other._HitPoint;
		this->_EnergyPoint = other._EnergyPoint;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}


FragTrap::~FragTrap( void )
{
	writeDestructorCall("FragTrap ");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---------------constructor-------------destructor----------------*/


FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
	writeConstructorCall("FragTrap name");
	this->_HitPoint = 100;
	this->_EnergyPoint = 100;
	this->_AttackDamage = 30;
}


/*---------------constructor-------------destructor----------------*/

/*----func----*/


void FragTrap::attack(const std::string &target)
{
	switch (this->_EnergyPoint)
	{
	case 0:
		this->writeRedName("FragTrap ", " does not have enough energy points to attack");
		break;
	default:
		writeAttack("FragTrap ", target);
		this->_EnergyPoint--;
		break;
	}
}


void FragTrap::highFivesGuys(void)
{
	std::cout << this->_Name << " highfive some ramdom ClapTrap" << std::endl;
}


/*----func----*/
