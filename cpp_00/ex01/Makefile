# Standard
NAME		= phonebook

# Source files
SRCS		= main.cpp PhoneBook.cpp Contact.cpp

# Compiler and flags
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

# Object files
OBJS		= $(SRCS:.cpp=.o)

# Build rules
all:		$(NAME)

# Colors for output
GREEN	= \033[0;32m
RED		= \033[0;31m
YELLOW	= \033[0;33m
RESET	= \033[0m

# Target to compile the program
$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling $(NAME)...$(RESET)"
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled successfully.$(RESET)"

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
	@echo "$(RED)Full cleanup...$(RESET)"
	rm -f $(NAME)
	@echo "$(GREEN)Full cleanup complete.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
