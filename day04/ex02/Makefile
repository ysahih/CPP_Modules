NAME = Animal
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = core/Animal.cpp  core/Cat.cpp core/Dog.cpp core/Brain.cpp main.cpp 
INC = include/Dog.hpp include/Cat.hpp include/Animal.hpp include/Brain.hpp

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