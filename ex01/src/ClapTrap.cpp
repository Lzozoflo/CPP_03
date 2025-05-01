/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:04:13 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/30 15:36:31 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"


/*---------------constructor------Canonical-------destructor----------------*/


ClapTrap::ClapTrap( void ) :
_Name("Bob"), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << BLUE << "Constructor ClapTrap Default is Called" << RESET << std::endl;
}


ClapTrap::ClapTrap( const ClapTrap &other ) :
_Name(other._Name), _HitPoint(other._HitPoint), _EnergyPoint(other._EnergyPoint), _AttackDamage(other._AttackDamage)
{
	std::cout << BLUE << "Constructor ClapTrap Copy is Called" << RESET << std::endl;
}


ClapTrap &ClapTrap::operator=( const ClapTrap &other )
{
	std::cout << BLUE << "Operator ClapTrap '=' is Called" << RESET << std::endl;
	if (this != &other){
		this->_Name = other._Name;
		this->_HitPoint = other._HitPoint;
		this->_EnergyPoint = other._EnergyPoint;
		this->_AttackDamage = other._AttackDamage;
	}
	return	*this;
}


ClapTrap::~ClapTrap( void )
{
	std::cout << YELLOW << this->_Name << " Destructor ClapTrap is Called" << RESET << std::endl;
}


/*---------------constructor------Canonical-------destructor----------------*/



/*---------------constructor-------------destructor----------------*/


ClapTrap::ClapTrap( const std::string name ) :
_Name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{std::cout << BLUE << "Constructor ClapTrap Name is Called" << RESET << std::endl;}


/*---------------constructor-------------destructor----------------*/


/*----func----*/


const std::string &ClapTrap::getName() const
{
	return (this->_Name);
}


void ClapTrap::setName( const std::string &name)
{
	this->_Name = name;
}


void ClapTrap::attack(const std::string& target)
{
	switch (this->_EnergyPoint)
	{
		case 0:
			std::cout << RED << this->_Name << " does not have enough energy points to attack" << RESET << std::endl;
			break;
		default:
			std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing "<<  _AttackDamage <<" points of damage!" << std::endl;
			this->_EnergyPoint--;
			break;
	}
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint == 0){
		std::cout << RED << "You dont need to attack him again he Was Dead!" << RESET << std::endl;
	}else if (this->_HitPoint <= amount){
		std::cout << "Fatal Damage " << this->_Name << " was dead" << std::endl;
		this->_HitPoint = 0;
	}else{
		this->_HitPoint -= amount;
		std::cout << "Taken Damage Hp:" << this->_HitPoint << std::endl;
	}
}


void ClapTrap::beRepaired(unsigned int amount)
{
	switch (this->_EnergyPoint)
	{
	case 0:
		std::cout << RED << this->_Name << " does not have enough energy points to eat bolt" << RESET << std::endl;
		break;
	default:
		std::cout << "ClapTrap " << _Name << " eats some bolt and get " << amount << " of HitPoint" << std::endl;
		this->_HitPoint += amount;
		this->_EnergyPoint--;
		break;
	}
	if (this->_HitPoint >= 9000){
		std::cout << RED << "It's Over 9000!" << RESET << std::endl;
		this->_HitPoint = 10;
		std::cout << this->_Name << " can't be over that 10 HitPoint" << std::endl;
	}else if (this->_HitPoint > 10){
		this->_HitPoint = 10;
		std::cout << this->_Name << " can't be over that 10 HitPoint" << std::endl;
	}
}
