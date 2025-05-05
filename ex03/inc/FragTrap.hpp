/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:17:38 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 12:59:32 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap( void );								//Canonical
	public:
	// {

		FragTrap( const FragTrap &other );				//Canonical
		FragTrap &operator=( const FragTrap &other );	//Canonical
		~FragTrap( void );								//Canonical

		FragTrap( const std::string name );

		void attack(const std::string &target);
		void highFivesGuys(void);


	// }
};



#endif
