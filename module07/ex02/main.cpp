/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/26 15:23:44 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 15:27:06 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;

	
};

int main(void){



    return 0;
}