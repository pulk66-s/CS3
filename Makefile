CC		=	g++

SRC		=	src/main.cpp						\
			src/Logic/Buildings/Road.cpp		\
			src/Logic/Buildings/House.cpp		\
			src/Logic/Buildings/ABuilding.cpp	\
			src/Logic/Map/Actions.cpp			\
			src/Logic/Map/Buildings.cpp			\

OBJ		=	$(SRC:.cpp=.o)

NAME		=	cs

CFLAGS		=	-Wall -Wextra -Werror -Isrc/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
