NAME = Animal
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = WrongAnimal.cpp  WrongCat.cpp main.cpp 
INC =  WrongCat.hpp WrongAnimal.hpp

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