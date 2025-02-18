CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bureau

SRCS = main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = Bureaucrat.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re