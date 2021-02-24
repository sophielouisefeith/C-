/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 11:18:46 by SophieLouis   #+#    #+#                 */
/*   Updated: 2021/01/14 14:55:47 by SophieLouis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"				/* Black */
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */
# define WHITE			"\033[37m"				/* White */
# define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"		/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"		/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"		/* Bold White */
# define GREY 			 "\033[38;5;8m"

class Pony
{

    private:
        std::string  _SoundName;
        int         _ColorCode;
        //Pony();
    public:
        Pony(); //constructord
        ~Pony(); // deconstructory
        Pony(std::string SoundName, int ColorCode);
   // std::string getSoundName() const;
   // int         getColorCode() const;
    
    //  void     PonyOnTheHeap();
    // void     PonyOnTheStack();       
    //void     PonyHeap(float ColorCode , const std::string &SoundName);
        std::string  GetSoundName()const;
        int          GetColorCode()const;
        void    Sound();
        void    Colortype();
        

    
};

#endif

//* An easy one, to start with.
//Make a Pony class, containing whatever you think adequately describes a pony. Then,
//create two functions, ponyOnTheHeap and ponyOnTheStack, in which you will allocate a
//Pony, and make it do some stuff.
//Of course, in the first one, the Pony must be allocated on the heap, on in the second
////one it must be allocated on the stack.
//You will provide a main with enough code to prove what you made works as intended.
//In both cases, the Pony objects must not exist after the function hands off control.
//(Your main will also have to demonstrate this during the correction!)
//*