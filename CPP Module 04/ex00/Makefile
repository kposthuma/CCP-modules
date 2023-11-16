# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kposthum <kposthum@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 16:04:34 by kposthum      #+#    #+#                  #
#    Updated: 2023/11/16 15:17:39 by kposthum      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC := c++ -std=c++98 -pedantic -Wall -Werror -Wextra
NAME := polymorph
SRCS := main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp
HEADERS	:= -I ./include
SRCDIR := ./src
OBJDIR := ./obj
OBJS :=	$(addprefix $(OBJDIR)/,$(SRCS:.cpp=.o))
SRCS := $(addprefix $(SRCDIR)/,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@echo Making $(NAME)
	@$(CC) $(OBJS) $(HEADERS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	@echo Compiling $<
	@$(CC) $(HEADERS) -c $< -o $@

clean:
	@echo Removing object files $(NAME)
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)
	
fclean: clean
	@echo Removing $(NAME)
	@rm -f $(NAME)

re:		fclean all

.PHONY: clean fclean all re