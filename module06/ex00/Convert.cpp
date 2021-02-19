/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 13:00:06 by sfeith        #+#    #+#                 */
/*   Updated: 2021/02/19 15:48:51 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _output(nullptr){  // put the output on zero

    std::cout << "constructor " << std::endl;
    return;
}

Convert::Convert(std::string const &output) : _output(output) {
    
    
    std::cout << BLUE << "Here we get the input: " << YELLOW << this->GetOutput()  <<  RESET << std::endl;  
    //return(*this);
}


//copy constructor

Convert::Convert(Convert const & copy){
    
    std::cout << " Copy constructor is called ----- convert" 
    <<  std::endl;
    *this = copy;
}

Convert &Convert:: operator=(const Convert & rsh){
    
    std::cout << " Assignation is called ----- Output"  << std::endl;
    if(this != &rsh){  // if rsh is not filled 
        this->_output = rsh.GetOutput();  // why the . we fill the right side . with the result of getName
    }
    
    return *this;
}

Convert::~Convert(){

    std::cout << "deconstructor " << std::endl;
    return;
}

std::string Convert::GetOutput() const {

    return this->_output;

}

/* inf  nan infirnity  The NaN outputs are used to identify undefined or non-representable */
/*outputs for floating-point elements, such as the square root of negative numbers or the result of 0/0.*/

Convert* Convert::toChar(){
    std::stringstream	safe;
    char c;
    safe << _output;
    safe >> c;
    std::cout << " We want to convert " << YELLOW <<GetOutput() << RESET <<" to  a char "  << std::endl;
    if(_output.size() == 1 && !isdigit(_output[0])){
        if (isprint(c))
		    std::cout << "char: " << '\'' << c << '\'' << std::endl;
        else 
		    std::cout << "char: Non displayable" << std::endl;
    }
    else if(_output == "nan" || _output == "+inf" || _output == "-inf" || \
		_output.find('.') != std::string::npos)
		std::cout << "char: impossible" << std::endl;
    else 
        try{
            //int const	i = static_cast<int const>(c);
            int c = std::stoi(_output);
            if (c >= -128 && c < 128) (std::isprint(c)) ?
                std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl :
                std::cout << "char: Non displayable" << std::endl;
            else std::cout << "char: impossible" << std::endl ;
        }  
    catch (std::exception &e) { std::cout << "char: impossible" << std::endl; }
    return this;
}

Convert* Convert::toInt(){


    std::cout << " We want to convert " << YELLOW <<GetOutput() << RESET <<" to  a int "  << std::endl;
    return this;
    
}


Convert* Convert::toDouble(){


    std::cout << " We want to convert " << YELLOW <<GetOutput() << RESET <<" to  a Double "  << std::endl;
    return this;
    
}

Convert* Convert::toFloat(){


    std::cout << " We want to convert " << YELLOW <<GetOutput() << RESET <<" to  a Float "  << std::endl;
    return this;
    
}

