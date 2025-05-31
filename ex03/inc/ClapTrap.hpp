/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:04:22 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 09:05:52 by fcretin          ###   ########.fr       */
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
	protected:
	// {

		std::string		_Name;				//bob
		unsigned int	_HitPoint;			//10
		unsigned int	_EnergyPoint;		//10

		unsigned int	_AttackDamage;		//0


		/*----utils----*/

		void	writeRedName( std::string str1, std::string str2 );
		void	writeAttack( std::string str1, const std::string& target );
		static void	writeConstructorCall( std::string str1 );
		static void	writeDestructorCall( std::string str1 );
		// }
		public:
		// {

		/*---------------constructor------Canonical-------destructor----------------*/

		ClapTrap( void );
		ClapTrap( const ClapTrap &other );
		ClapTrap &operator=( const ClapTrap &other );
		~ClapTrap( void );


		/*---------------constructor-------------destructor----------------*/

		ClapTrap( const std::string name );



		/*----func----*/

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	// }
};


#endif
