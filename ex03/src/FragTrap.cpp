/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:19:53 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 08:54:15 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*---------------constructor------Canonical-------destructor----------------*/


FragTrap::FragTrap( void ) : ClapTrap()
{
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
	std::cout << BLUE << "Constructor FragTrap is Called" << RESET << std::endl;
}


FragTrap::FragTrap( const FragTrap &other )
{
	setName(other.getName());
	_HitPoint = other._HitPoint;
	_EnergyPoint = other._EnergyPoint;
	_AttackDamage = other._AttackDamage;
	std::cout << BLUE << "Constructor FragTrap Copy is Called" << RESET << std::endl;
}


FragTrap &FragTrap::operator=( const FragTrap &other )
{
	if (this != &other){
		setName(other.getName());
		_HitPoint = other._HitPoint;
		_EnergyPoint = other._EnergyPoint;
		_AttackDamage = other._AttackDamage;
	}
	std::cout << BLUE << "Constructor FragTrap '=' is Called" << RESET << std::endl;
	return (*this);
}


FragTrap::~FragTrap( void )
{
	std::cout << YELLOW << getName() << " Destructor FragTrap is Called" << RESET << std::endl;
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---------------constructor-------------destructor----------------*/


FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
	std::cout << BLUE << "Constructor ScavTrap name is Called" << RESET << std::endl;

}


/*---------------constructor-------------destructor----------------*/

/*----func----*/


void FragTrap::attack(const std::string &target)
{
	switch (this->_EnergyPoint)
	{
	case 0:
		std::cout << RED << this->getName() << " does not have enough energy points to attack" << RESET << std::endl;
		break;
	default:
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing "<<  this->_AttackDamage <<" points of damage!" << std::endl;
		this->_EnergyPoint--;
		break;
	}
}


void FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " highfive some ramdom ClapTrap" << std::endl;
}


/*----func----*/
