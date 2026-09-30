NAME		= my_sed

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDES	=	Zombie.hpp

SRCS		= 	main.cpp \

OBJ_DIR		= obj
OBJS 		= $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re