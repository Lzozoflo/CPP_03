/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:19:19 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 09:08:53 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
	// {
		std::string		_Name;				//bob
	// }
	public:
	// {

		DiamondTrap( void );
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap &operator=( const DiamondTrap &other );
		~DiamondTrap( void );

		DiamondTrap( std::string name );
		void attack(const std::string &target);
		void whoAmI();


	// }
};

#endif
