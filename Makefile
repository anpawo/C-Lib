##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##


INCLUDE_DIR	=	./include
PROJECT_DIR	=	./src
LIB_DIR		=	./lib

OBJECT_DIR	=	$(LIB_DIR)/object
STRING_DIR	=	$(LIB_DIR)/string

PROJECT_SRC	=	$(wildcard $(PROJECT_DIR)/*.c)

LIB_SRC		=	$(wildcard $(STRING_DIR)/*.c)

CC			=	gcc
INCLUDE		=	-iquote $(INCLUDE_DIR)
LDFLAGS		=	-L$(LIB_DIR) -lmy
CFLAGS		=	-W -Wall -Wextra -g3 $(INCLUDE)

SRC_OBJ		=	$(PROJECT_SRC:.c=.o)
LIB_OBJ		=	$(LIB_SRC:.c=.o)

NAME		=	my_lib
NAME_LIB	=	$(LIB_DIR)/libmy.a

all: $(NAME_LIB) $(NAME)

$(NAME): $(SRC_OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(CFLAGS)

$(NAME_LIB): $(LIB_OBJ)
	ar rc $@ $^

clean:
	$(RM) *\~ vgcore* *\.o $(TEST_DIR)/*\.gcda $(TEST_DIR)/*\.gcno \
	$(SRC_OBJ) $(LIB_OBJ)

fclean:	clean
	$(RM) $(NAME) $(NAME_LIB) $(NAME_TEST)
	clear

re: fclean all

coding_style: fclean
	../../banana/coding-style.sh . ../../banana/
	clear
	@ cat ../../banana/coding-style-reports.log

test_lib: fclean $(NAME_TEST) clean
	valgrind ./$(NAME_TEST)

coverage: test_lib
	gcovr --exclude $(TEST_DIR) --exclude $(PROJECT_DIR)

.PHONY:	all	clean fclean re coding_style test_lib coverage
