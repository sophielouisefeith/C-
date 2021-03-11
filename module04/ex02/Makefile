# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sfeith <sfeith@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/03/11 14:33:04 by sfeith        #+#    #+#                  #
#    Updated: 2021/03/11 14:33:45 by sfeith        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #



NAME 	=		Purifyit

SRC		=		Squad.hpp Sguad.cpp TacticalMarine.hpp TacticalMarine.cpp \
				AssaultTerminator.hpp AssaultTerminator.cpp \
				ISpaceMarine.hpp IsSquad.hpp main.cpp

OBJ 	=		$(SRC:.cpp=.o)

COMPILE = 		clang++

FLAGS 	=		-Wall -Wextra -Werror -std=c++98

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m

all:	$(NAME)

%.o:	%.cpp
	@echo "$(GREY)Compiling...				$(WHITE)$<"
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(GREEN)----------------------------------------------------"
	@$(COMPILE) $(FLAGS) $(OBJ) -o  $(NAME)
	@echo "Executable				./$(NAME) $(RESET)"

clean:
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(OBJ)
	@echo "$(WHITE)REMOVED O-FILES $(RESET)"

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)
	@echo "$(WHITE)REMOVED EXECUTABLE FILE $(RESET)"

re:			fclean all

.PHONY: all clean fclean re