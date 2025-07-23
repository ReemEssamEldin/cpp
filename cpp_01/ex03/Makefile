# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 15:04:26 by reldahli          #+#    #+#              #
#    Updated: 2025/07/23 15:12:52 by reldahli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME		= ex03

# Source files
SRCS		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

# Compiler and flags
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

# Object files
OBJS		= $(SRCS:.cpp=.o)

# Compiler
HEADERS		= HumanA.hpp HumanB.hpp Weapon.hpp

# Build rules
all: $(NAME)

# Colors for output
GREEN	= \033[0;32m
RED		= \033[0;31m
YELLOW	= \033[0;33m
RESET	= \033[0m

# Target to compile the program
$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling $(NAME)...$(RESET)"
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Compilation successful!$(RESET)"

# Target to compile object files
%.o: %.cpp $(HEADERS)
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	$(CPP) $(CPPFLAGS) -c $< -o $@

# Target to clean files
clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	rm -f $(OBJS)
	@echo "$(GREEN)Object files cleaned up.$(RESET)"

fclean: clean
	@echo "$(RED)Cleaning executable...$(RESET)"
	rm -f $(NAME)
	@echo "$(GREEN)Executable cleaned up.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
