# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kposthum <kposthum@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 16:04:34 by kposthum      #+#    #+#                  #
#    Updated: 2024/04/01 15:41:19 by kposthum      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC := c++ -Wall -Werror -Wextra
NAME := scalarconverter
SRCS := main.cpp \
		ScalarConverter.cpp
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