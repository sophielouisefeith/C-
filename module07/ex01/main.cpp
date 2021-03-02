/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 13:31:57 by sfeith        #+#    #+#                 */
/*   Updated: 2021/03/02 16:46:08 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"


template< typename T >
void print( T const  & x ) { std::cout << x << std::endl; return; }
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main() {


     char array[4]= "hal";
    ::iter(array, 5, print);
    std::cout << std::endl;
    std::string	f[8] = {"Hello", "World", "Nice", "To", "Meet", "You", "In", "Here"};
    ::iter(f, 5, print);
    std::cout << std::endl;
    
    int tab[] = { 0, 1, 2, 3, 4 }; 
    Awesome tab2[5];
    iter( tab, 5, print );
    iter( tab2, 5, print );
    return 0;
}