/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:23:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 09:02:16 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


/*---------------constructor------Canonical-------destructor----------------*/


ScavTrap::ScavTrap( void ) : ClapTrap(), _GateKeeper(false)
{
	writeConstructorCall("ScavTrap Default");
	this->_EnergyPoint = 50;
}


ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other), _GateKeeper(other._GateKeeper)
{
	writeConstructorCall("ScavTrap Copy");
}


ScavTrap &ScavTrap::operator=( const ScavTrap &other )
{
	std::cout << BLUE << "operator ScavTrap '=' is Called" << RESET << std::endl;
	if (this != &other){
		this->_GateKeeper = other._GateKeeper;
		this->_Name = other._Name;
		this->_HitPoint = other._HitPoint;
		this->_EnergyPoint = other._EnergyPoint;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}


ScavTrap::~ScavTrap( void )
{
	writeDestructorCall("ScavTrap");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---------------constructor-------------destructor----------------*/


ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	writeConstructorCall("ScavTrap name");
	this->_GateKeeper = false;
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
}


/*---------------constructor-------------destructor----------------*/


/*----func----*/


void ScavTrap::attack(const std::string& target)
{
	if (this->_HitPoint== 0){
		this->writeRedName("ScavTrap ", " is KO (no hit point) so he can't attack...");
		return ;
	}
	switch (this->_EnergyPoint)
	{
		case 0:
			this->writeRedName("ScavTrap ", " does not have enough energy points to attack");
			break;
		default:
			this->_EnergyPoint--;
			writeAttack("ScavTrap ", target);
			break;
	}
}


void	ScavTrap::guardGate( void )
{
	if (this->_HitPoint == 0){
		this->writeRedName("ScavTrap ", " is KO (no hit point) so he can't be in Gate Keeper mode...");
		return ;
	}
	if (this->_GateKeeper == true){
		std::cout << "ScavTrap " << this->_Name << " is already in Gate keeper mode. (current energy: " << this->_EnergyPoint << ")" << std::endl;
		return ;
	}
	switch (this->_EnergyPoint)
	{
		case 0:
			this->writeRedName("ScavTrap ", " does not have enough energy points to protect Gate");
			break;
		default:
			this->_EnergyPoint--;
			this->_GateKeeper = true;
			std::cout << "ScavTrap "<< this->_Name << " is now in Gate keeper mode. (current energy: " << this->_EnergyPoint << ")" << std::endl;
			break;
	}
}


/*----func----*/
