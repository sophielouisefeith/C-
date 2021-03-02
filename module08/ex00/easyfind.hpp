/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:41:06 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 14:41:17 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

 
#include <iostream>
#include <list>

class NoRange : public std::exception{
	public:
		NoRange() throw () {};
		~NoRange() throw() {};
		NoRange(const NoRange &) throw() {};
		NoRange &operator=(const NoRange &) throw() {return *this;}
		const char *what() const throw(){
			return ("The given number doesn't occure in this container.");
		}
} ;

template <typename T>
void easyfind(T &container, int i)
{
	std::list<int>::const_iterator it = container.begin();
	std::list<int>::const_iterator ite = container.end();
	int j = 0;
	while (it != ite){
		if (*it == i)
			break;
		it++;
		j++;
	}
	if (it == ite)
		throw NoRange();
	else
		std::cout << "The first occurence of " << i << " is at index: " << j << "." << std::endl;
	return ;
}