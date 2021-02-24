/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 11:18:52 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/21 13:08:15 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>


static void	PonyOnTheHeap(void) {
    
    std::cout << "Pony on the heap" << std::endl;
    Pony *HeapPony = new Pony(" Female name", 194135229 );
    std::cout << "Her name is" << std::endl;
    HeapPony->Sound();
    std::cout << "Her color is" << std::endl;
    HeapPony->Colortype();
    std::cout << "I'm about to get deleted, because im on the heap" << std::endl;
    delete HeapPony;
	std::cout << "Exit Pony on the heap" << std::endl;
    

}

static void PonyOnTheStack(void){
    
    std::cout << "Pony on the Stack" << std::endl;
    Pony *HeapPony = new Pony(" a flower", 144 );
    std::cout << "Her name is" << std::endl;
    HeapPony->Sound();
    std::cout << "Her color is" << std::endl;
    HeapPony->Colortype();
	std::cout << "Exit Pony on the Stack" << std::endl;
    
    
    
}

int main(void){
    std::cout << "Calling ponyOnTheHeap..\n\n" << std::endl;
    PonyOnTheHeap();
    
    std::cout << "Calling ponyOnTheStack..\n\n" << std::endl;
	PonyOnTheStack();
	return (0);
	
}