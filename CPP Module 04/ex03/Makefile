# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kposthum <kposthum@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 16:04:34 by kposthum      #+#    #+#                  #
#    Updated: 2023/11/23 12:32:45 by kposthum      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC := clang++ -std=c++98 -pedantic -Wall -Werror -Wextra
NAME := finalfantasy7
SRCS := main.cpp \
		AMateria.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		ICharacter.cpp \
		MateriaSource.cpp \
		IMateriaSource.cpp
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