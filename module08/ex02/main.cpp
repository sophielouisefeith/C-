/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:48:06 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/02 14:48:34 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	std::cout << "Pushing the numbers 1 and  2 on the stack" << std::endl;
	mstack.push(1);
	mstack.push(2);

	std::cout << "Checking what the current top is right now (should be 2)" << std::endl ;
	std::cout << mstack.top() << std::endl; 
	std::cout << std::endl;
	
	std::cout << "Also pushing 3 to the stack and checking the size of the stack (should be 3)" << std::endl ;
	mstack.push(3); 
	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "Calling the iterator for begin and end (for end -1 to show that it refers to the end):" << std::endl ;
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	--ite;	
	std::cout << "The iterator for begin = " << *it << " and the one for end = " << *ite << std::endl ;
	std::cout << std::endl;

	std::cout << "Popping everything from the stack for a clean exit." << std::endl ;
	while (!mstack.empty()){
		std::cout << mstack.top() << std::endl ;
		mstack.pop();
	}
	std::cout << std::endl;

	MutantStack<int> stackie;
	std::cout << "Again pushing a few things on the stack with mstack: 17, 0, 5, 23" << std::endl ;
	mstack.push(17);
	mstack.push(0); 
	mstack.push(5); 
	mstack.push(23);
	std::cout << "And pushing a few things on the stack with stackie: 3, 8" << std::endl ;
	stackie.push(3); 
	stackie.push(8); 
	std::cout << std::endl;

	std::cout << "Now Swapping these with eachother and proving the swap by using size()" << std::endl ;
	mstack.swap(stackie);
	std::cout << "The size of mstack = " << mstack.size() << " and the size of stackie = " << stackie.size() << std::endl ; 
	std::cout << std::endl;
	
	std::cout << "And again a clean exit, this time using the iterators." << std::endl << "mstack: " << std::endl;
	MutantStack<int>::iterator it1 = mstack.begin(); 
	MutantStack<int>::iterator ite1 = mstack.end();
	while (it1 != ite1) {
		std::cout << mstack.top() << std::endl ;
		mstack.pop();
		it1++;
	}
	std::cout << std::endl;

	MutantStack<int>::iterator it2 = stackie.begin(); 
	MutantStack<int>::iterator ite2 = stackie.end();
	std::cout << "stackie:" << std::endl ;
	while (it2 != ite2) {
		std::cout << stackie.top() << std::endl ;
		stackie.pop();
		it2++;
	}
	return 0;
}
