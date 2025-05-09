/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:19:19 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 11:17:44 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
	// {
		bool _GateKeeper;
	// }
	public:
	// {

		ScavTrap( void );
		ScavTrap( const ScavTrap &other );
		ScavTrap &operator=( const ScavTrap &other );
		~ScavTrap( void );

		ScavTrap( std::string name );
		void attack(const std::string &target);
		void guardGate( void );
	// }
};

#endif
