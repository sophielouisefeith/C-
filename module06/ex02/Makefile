# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sfeith <sfeith@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/23 15:27:57 by sfeith        #+#    #+#                  #
#    Updated: 2021/02/24 10:51:39 by sfeith        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 	=		Identifyrealtype

SRC		=		main.cpp Base.cpp

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
