/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 12:27:22 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/24 10:52:56 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

/* why is it on the heap;  */


void*	serialization() {

	const char	alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string	s1;
	std::string s2;
	
	

	/* collect 8 alphanumerical characters */
	for (int i=0; i < 8; i++) {
		s1 += alphanum[arc4random_uniform(sizeof(alphanum))]; /* will return a uniformly distributed random number less than upper_bound */
		s2 += alphanum[arc4random_uniform(sizeof(alphanum))]; /* will return a uniformly distributed random number less than upper_bound */
	}

	std::cout << YELLOW <<"s1 after random fill: {        "<< s1 << RESET<< std::endl;
	std::cout << YELLOW <<"s2 after random fill: {        "<< s2 << RESET<< std::endl;

	/* unction returns a single 32-bit value. */

	const int	n = arc4random();
	std::cout << YELLOW <<"n after fill        : {         "<< n << RESET<< std::endl;

	/* we safe space on the heap under the char data we use new; */
	char*		data = new char[2 * sizeof(std::string) + sizeof(int)]();  
	std::cout << BLUE <<"•••••••••••••••••••••••••we made space on the heap:"<< data << RESET << "don't forget to delete it later we used new!"<< std::endl;

	/* 
		dest	-	pointer to the memory location to copy to
		src	-	pointer to the memory location to copy from
		count	-	number of bytes to copy
		Return value
		dest 
	*/
	std::cout << BLUE << "•••••••••••••••••••••••••We use memcpy to copy the data  " << RESET << std::endl;
	std::cout << "result of data after copy the addres: {           "<< memcpy(data, &s1, sizeof(s1)) << std::endl;
	std::cout << "result of data after copy the addres: {         	"<< memcpy(data + sizeof(s1) + sizeof(n), &s2, sizeof(s2)) << std::endl;
	std::cout << "result of data after copy the addres: {           "<< memcpy(data + sizeof(s1), &n, sizeof(n))<< std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	
	std::cout << BLUE <<"•••••••••••••••••••••••••we filled data because we used memcpy -> :"<< data << RESET << std::endl;
	

	return data;
}

Data*	deserialize(void* raw) {

	Data*	data = new Data();
	char*	raw_data = reinterpret_cast<char*>(raw);

	/* reinterpetation */

	data->s1 = *reinterpret_cast<std::string*>(raw_data); 
	data->s2 = *reinterpret_cast<std::string*>(raw_data + sizeof(std::string) + sizeof(int));
	data->n = *reinterpret_cast<int*>(raw_data + sizeof(std::string));

	return data;
}

int	main(void) {

    /*fill data */
	std::cout << BLUE << "We start with serialization " << RESET << std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	void *	data = serialization();

    std::cout << BLUE << "We will go to the deserialize function to reinterpet from void to string we expect the same result " << RESET << std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;
	Data*	des_data = deserialize(data);
	
	std::cout << YELLOW <<"res after deserialize string 1{           "<< des_data->s1 << std::endl;
	std::cout << YELLOW <<"res after deserialize string 2{           "<< des_data->s2 << std::endl;
	std::cout << YELLOW <<"res after deserialize 	    n{           "<< des_data->n << std::endl;

	std::cout << BLUE << "We should delete the space we used on the heap" << RESET << std::endl;
	std::cout << BLUE << "••••••••••••••••••••••••••• " << RESET << std::endl;

	delete[] reinterpret_cast<char*>(data);
	delete des_data;
	std::cout << BLUE << reinterpret_cast<char*>(data) <<"should be empty"<< RESET << std::endl;


	return 0;
}



