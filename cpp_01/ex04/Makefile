# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/24 13:39:43 by reldahli          #+#    #+#              #
#    Updated: 2025/07/24 13:44:29 by reldahli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME		= sedForLosers

# Source files
SRCS		= main.cpp

# Compiler and flags
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

# Object files
OBJS		= $(SRCS:.cpp=.o)

# Build rules
all: $(NAME)

# Colors for output
GREEN	= \033[0;32m
RED		= \033[0;31m
YELLOW	= \033[0;33m
RESET	= \033[0m

# Traget to compile the program
$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling $(NAME)...$(RESET)"
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) Compilation successful!$(RESET)"

# Target to compile object files
%.o: %.cpp
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
