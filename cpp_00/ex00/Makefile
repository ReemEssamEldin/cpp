# Standard
NAME		= megaphone

# Source files
SRC			= megaphone.cpp

# Compiler and flags
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

# Build rules
all:		$(NAME)

# Colors for output
GREEN	= \033[0;32m
RED		= \033[0;31m
YELLOW	= \033[0;33m
RESET	= \033[0m

# Target to compile the program
$(NAME): $(SRC)
	@echo "$(YELLOW)Compiling $(NAME)...$(RESET)"
	$(CPP) $(CPPFLAGS) megaphone.cpp -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled successfully.$(RESET)"

# Target to clean up the build
clean:
	@echo "$(RED)Cleaning up...$(RESET)"
	$(RM) $(NAME)
	@echo "$(GREEN)Cleanup complete.$(RESET)"

fclean:		clean
	@echo "$(RED)Full cleanup...$(RESET)"
	$(RM) $(NAME)
	@echo "$(GREEN)Full cleanup complete.$(RESET)"

# Target to rebuild the program
re:			fclean all

.PHONY: all clean fclean re
