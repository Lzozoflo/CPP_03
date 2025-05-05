/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:04:13 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 11:54:16 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"


/*---------------constructor------Canonical-------destructor----------------*/


ClapTrap::ClapTrap( void ) :
_Name("Bob"), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	writeConstructorCall("ClapTrap Default");
}


ClapTrap::ClapTrap( const ClapTrap &other ) :
_Name(other._Name), _HitPoint(other._HitPoint), _EnergyPoint(other._EnergyPoint), _AttackDamage(other._AttackDamage)
{
	writeConstructorCall("ClapTrap Copy");
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
	writeDestructorCall("ClapTrap");
}


/*---------------constructor------Canonical-------destructor----------------*/



/*---------------constructor-------------destructor----------------*/


ClapTrap::ClapTrap( const std::string name ) :
_Name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	writeConstructorCall("ClapTrap Name");
}

/*---------------constructor-------------destructor----------------*/


/*----utils----*/


void ClapTrap::writeRedName( std::string str1, std::string str2 )
{
	std::cout << RED << str1 << this->_Name << str2 << RESET << std::endl;
}

void	ClapTrap::writeAttack( std::string str1, const std::string& target )
{
	std::cout	<< str1 << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage
				<< " points of damage! (current energy: " << this->_EnergyPoint << ")" << std::endl;
}

void	ClapTrap::writeConstructorCall( std::string str1 )
{
	std::cout << BLUE << "Constructor " << str1 << " is Called" << RESET << std::endl;
	// (void)str1;
}

void	ClapTrap::writeDestructorCall( std::string str1 )
{
	std::cout << YELLOW << "Destructor " << str1 << " is Called" << RESET << std::endl;
	// (void)str1;
}


/*----utils----*/


/*----func----*/




void ClapTrap::attack(const std::string& target)
{
	switch (this->_EnergyPoint)
	{
		case 0:
			this->writeRedName("ClapTrap ", " does not have enough energy points to attack");
			break;
		default:
			this->_EnergyPoint--;
			writeAttack("ClapTrap ", target);
			break;
	}
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= 9000){

		std::cout << RED << "Its over 9000! " << RESET << std::endl;

	}
	if (this->_HitPoint == 0){

		this->writeRedName("ClapTrap ", "You dont need to attack him again he Was Dead!");

	}else if (this->_HitPoint <= amount){

		std::cout << "Fatal Damage " << this->_Name << " was dead" << std::endl;
		this->_HitPoint = 0;

	}else{

		this->_HitPoint -= amount;
		std::cout << "Taken Damage Hp: " << this->_HitPoint << std::endl;

	}
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoint== 0){

		this->writeRedName("ClapTrap ", " is KO (no hit point) so he can't be repaired...");
		return ;

	}
	if (this->_EnergyPoint < 1){

		this->writeRedName("ClapTrap ", "Not enough energy point to eat bolt");
		return ;

	}
	while (this->_EnergyPoint >= 1 || amount == 0){

		this->_EnergyPoint--;
		std::cout	<< this->_Name << " has been repaired of 1 hit points. (current energy: " << this->_EnergyPoint << ")" << std::endl;
		this->_HitPoint += 1;
		amount--;

	}
	if (this->_EnergyPoint == 0 && amount != 0){

		std::cout	<< "Not enough energy point to eat more bolt" << std::endl;

	}
	std::cout	<< "(current hitpoint: " << this->_HitPoint << ")" << std::endl;
}


/*----func----*/
