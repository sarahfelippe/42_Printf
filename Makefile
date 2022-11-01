NAME 			= libftprintf.a

FLAGS 			= -Wall -Werror -Wextra

INCLUDE_DIR 	= ./include

SRC_DIR 		= ./src
SRC		 		= \
				ft_itoa_10.c\
				ft_itoa_16.c\
				ft_printf_utils_1.c \
				ft_printf_utils_2.c \
				ft_printf.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_strdup.c \
				ft_strlen.c \
				ft_utoa_10.c

OBJ_DIR			= ./obj
OBJ 			= $(SRC:.c=.o) 
OBJS			= $(addprefix $(OBJ_DIR)/,$(OBJ))

# to be executed, all files .o must exist first, and to create file .o, the 
# target $(OBJ_DIR)/%.o must be executed first

${NAME}:		$(OBJS)
				@ar -rcs ${NAME} $(OBJS)

# if the target name matches a file name, the command will be executed only 
# if dependencies are correct and if the file is not updated, which avoids 
# relink

# this target allows the command make to be executed on a single file .o, and 
# depends on the existence of a file .c with the same name

# $< acesses the first dependency (in this case $(SRC_DIR)) and $@ means the
# target value (in this case $(OBJ_DIR)/%.o)

# 'mkdir' creates folder 'obj' to store files .o

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c	$(INCLUDE_DIR)/printf.h
				@mkdir -p $(OBJ_DIR)
				@cc $(FLAGS) -c $< -I $(INCLUDE_DIR) -o $@

all: 			$(NAME)

clean:
				@rm -rf $(OBJS)
				@rm -rf $(OBJ_DIR)

fclean:			clean
				@rm -rf $(NAME)
			
re:				fclean all

n:
				@norminette -R */ft_*.c */*.h

# these targets are optional and depend on the existence of main.c
#
#$(RUN_DIR)/%:	
#				@mkdir -p $(RUN_DIR)
#				@cc $(FLAGS) main.c $(NAME) -o $(RUN_DIR)/printf
#
#run:
#				@cc main.c ./src/*.c -I $(INCLUDE_DIR) -o printf
#				@./printf
#
#gdb:
#				@cc -g main.c ./src/*.c -I $(INCLUDE_DIR) -o printf
#				@gdb ./printf
#
#v:
#				@cc -g main.c ./src/*.c -I $(INCLUDE_DIR) -o printf
#				@valgrind --leak-check=full --show-leak-kinds=all ./printf
#
#eclean:
#				@rm printf

.PHONY: 		all clean fclean re
