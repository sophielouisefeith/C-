/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 11:18:52 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/03/11 11:01:10 by sfeith        ########   odam.nl         */
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
    /* we don't use new and no pointer */
    Pony StackPony(" a flower", 144 );
    std::cout << "Her name is" << std::endl;
    StackPony.Sound();
    std::cout << "Her color is" << std::endl;
    StackPony.Colortype();
	std::cout << "Exit Pony on the Stack" << std::endl;
    
    
    
}

int main(void){
    std::cout << "Calling ponyOnTheHeap..\n\n" << std::endl;
    PonyOnTheHeap();
    
    std::cout << "Calling ponyOnTheStack..\n\n" << std::endl;
	PonyOnTheStack();
	return (0);
	
}