NAME = Animal
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = core/AMateria.cpp  core/Character.cpp core/Cure.cpp core/Ice.cpp main.cpp core/MateriaSource.cpp core/utils.cpp
INC = include/AMateria.hpp include/Character.hpp include/Cure.hpp include/Ice.hpp include/MateriaSource.hpp

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