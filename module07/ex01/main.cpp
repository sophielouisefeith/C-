/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 13:31:57 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/26 15:09:06 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"


// int main(void){


//     char array[4]= "hal";
//     ::iter(array, 5, &display);
//     std::cout << std::endl;
//     std::string	f[8] = {"Hello", "World", "Nice", "To", "Meet", "You", "In", "Here"};
//     ::iter(f, 5, &display);
//     std::cout << std::endl;

//     Awesome(6);
//     return 0;


    
    
// }

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };


// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const  & x ) { std::cout << x << std::endl; return; }
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main() {
    int tab[] = { 0, 1, 2, 3, 4 }; 
    Awesome tab2[5];
    iter( tab, 5, print );
    iter( tab2, 5, print );
    return 0;
}