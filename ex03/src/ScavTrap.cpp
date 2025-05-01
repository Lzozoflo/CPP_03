/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:23:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 08:54:20 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*---------------constructor------Canonical-------destructor----------------*/


ScavTrap::ScavTrap( void ) : ClapTrap()
{
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
	std::cout << BLUE << "Constructor ScavTrap is Called" << RESET << std::endl;
}


ScavTrap::ScavTrap( const ScavTrap &other )
{
	setName(other.getName());
	_HitPoint = other._HitPoint;
	_EnergyPoint = other._EnergyPoint;
	_AttackDamage = other._AttackDamage;
	std::cout << BLUE << "Constructor ScavTrap Copy is Called" << RESET << std::endl;
}


ScavTrap &ScavTrap::operator=( const ScavTrap &other )
{
	if (this != &other){
		setName(other.getName());
		_HitPoint = other._HitPoint;
		_EnergyPoint = other._EnergyPoint;
		_AttackDamage = other._AttackDamage;
	}
	std::cout << BLUE << "Constructor ScavTrap '=' is Called" << RESET << std::endl;
	return (*this);
}


ScavTrap::~ScavTrap( void )
{
	std::cout << YELLOW << getName() << " Destructor ScavTrap is Called" << RESET << std::endl;
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---------------constructor-------------destructor----------------*/


ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
	std::cout << BLUE << "Constructor ScavTrap name is Called" << RESET << std::endl;
}


/*---------------constructor-------------destructor----------------*/


/*----func----*/


void ScavTrap::attack(const std::string& target)
{
	switch (this->_EnergyPoint)
	{
	case 0:
		std::cout << RED << this->getName() << " does not have enough energy points to attack" << RESET << std::endl;
		break;
	default:
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing "<<  this->_AttackDamage <<" points of damage!" << std::endl;
		this->_EnergyPoint--;
		break;
	}
}


void	ScavTrap::guardGate( void )
{
	switch (this->_EnergyPoint)
	{
		case 0:
			std::cout << RED << this->getName() << " does not have enough energy points to attack" << RESET << std::endl;
			break;
		default:
			std::cout << "ScavTrap "<< this->getName() << " is now in Gate keeper mode." << std::endl;
			this->_EnergyPoint--;
			break;
	}
}


/*----func----*/
