# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 19:16:17 by polmarti          #+#    #+#              #
#    Updated: 2024/09/13 19:16:19 by polmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	test_humans

CC		=	c++

FLAGS	=	-g -Wall -Wextra -Werror -std=c++98 -MMD -fsanitize=address -pedantic 

SRC		=	HumanA.cpp HumanB.cpp Weapon.cpp main.cpp 

OBJ		=	$(SRC:.cpp=.o)

INCLUDE = 	HumanA.hpp HumanB.hpp Weapon.hpp

DEPS	=	$(SRC:.cpp=.d)

#COLORS
GREEN		=	\033[38;5;154m
RED			=	\033[38;5;197m
PURPLE		=	\033[38;5;171m
BLUE		=	\033[38;5;14m
NC			=	\033[0m
YELLOW		=	\033[38;5;190m

all		:	$(NAME)

%.o:%.cpp Makefile
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME) 
		@echo "${PURPLE}CPP01 ex03 binary Compiled${NC}"

clean:
		@rm -rf $(OBJ) $(DEPS)
		@echo "${RED}CPP01 ex03 object removed${NC}"

fclean:		clean
		@rm -rf $(NAME)
		@echo "${RED}CPP01 ex03 binary removed${NC}"

re:		fclean all

-include $(DEPS)

.PHONY		:	all clean fclean re