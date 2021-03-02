# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: SophieLouiseFeith <SophieLouiseFeith@st      +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/16 20:20:49 by SophieLouis   #+#    #+#                  #
#    Updated: 2021/02/28 18:32:54 by SophieLouis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME 	=		MommyWhenIGrowup

SRC		=		Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp

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
