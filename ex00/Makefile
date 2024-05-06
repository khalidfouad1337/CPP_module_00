
SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)
CC = clang++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Megaphone

%.o : %.cpp
		@$(CC) $(CFLAGS) -g -c $< -o $@

all:		$(NAME) 

$(NAME): $(OBJS)
			CC $(OBJS) -o $(NAME)

clean:
				@$(RM) $(OBJS) 
			
fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: all fclean clean re