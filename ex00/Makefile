
SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
NAME = Megaphone

%.o : %.cpp
		@$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME) 

$(NAME): $(OBJS)
			CC $(OBJS) -o $(NAME)

clean:
				@$(RM) $(OBJS) 
			
fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: all fclean clean re