NAME = ClapTrap
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
INC = ClapTrap.hpp ScavTrap.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  $(INC) 
	$(CC)  $(CPPFLAGS) -o $@ -c $< 

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)