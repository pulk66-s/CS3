CC		=	g++

SRC		=	src/main.cpp							\
			src/Logic/Buildings/Road.cpp			\
			src/Logic/Buildings/House.cpp			\
			src/Logic/Buildings/ABuilding.cpp		\
			src/Logic/Buildings/SpecialBuilding.cpp	\
			src/Logic/Buildings/Zones/AZone.cpp		\
			src/Logic/Map/Actions.cpp				\
			src/Logic/Map/Buildings.cpp				\
			src/Logic/Geometry/Rect.cpp				\
			src/Logic/Geometry/Line.cpp				\
			src/Logic/Geometry/Segment.cpp			\

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
