# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/27 00:00:00 by reldahli          #+#    #+#              #
#    Updated: 2025/07/27 02:49:48 by reldahli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME		= brain

# Source files
SRCS		= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

# Compiler and flags
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

# Object files
OBJS		= $(SRCS:.cpp=.o)

# Headers
HEADERS		= Animal.hpp Dog.hpp Cat.hpp Brain.hpp

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
	@echo "$(GREEN)$(NAME) Compilation successful!$(RESET)"

# Target to compile object files
%.o: %.cpp $(HEADERS)
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	$(CPP) $(CPPFLAGS) -c $< -o $@

# Target to clean up object files
clean:
	@echo "$(RED)Cleaning up object files...$(RESET)"
	rm -f $(OBJS)
	@echo "$(GREEN)Object files cleaned up.$(RESET)"

fclean: clean
	@echo "$(RED)Cleaning up executable...$(RESET)"
	rm -f $(NAME)
	@echo "$(GREEN)Executable cleaned up.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
