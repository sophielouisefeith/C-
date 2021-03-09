/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: merelmourik <merelmourik@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:53:04 by merelmourik   #+#    #+#                 */
/*   Updated: 2020/09/03 11:39:21 by merelmourik   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy {
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy(const Enemy &copy);

		Enemy &operator=(const Enemy &current);
	
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
	
	private:
		std::string _type;
		int			_hp;	
} ;
		
#endif
