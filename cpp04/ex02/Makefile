NAME		= abstract

CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDES	=	inc/Animal.hpp \
				inc/Cat.hpp \
				inc/Colors.h \
				inc/Dog.hpp \
				inc/WrongAnimal.hpp \
				inc/WrongCat.hpp \
				inc/Brain.hpp \


SRCS		=	main.cpp \
				src/Animal.cpp \
				src/Cat.cpp \
				src/Dog.cpp \
				src/WrongAnimal.cpp \
				src/WrongCat.cpp \
				src/Brain.cpp

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