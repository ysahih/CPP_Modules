CPPFLAGS = -std=c++98
#  -Wall -Wextra -Werror

NAME = PhoneBook
CC = c++
SRCS = main.cpp
#  Contact.cpp PhoneBook.cpp

INC = ./include/Contact.hpp ./include/PhoneBook.hpp

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