NAME = rush-02 
 
SRCS = main.c rush02.c numbers.c aux_functions.c 
 
OBJS = ${SRC:.c=.o} 
 
FLAGS = -Wall -Werror -Wextra
 
all:  ${NAME} 
 
${NAME}: ${OBJS} 
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS} 
 
clean: 
	rm -f ${OBJS} 
 
fclean: clean 
	rm -f ${NAME} 
 
re: fclean all 
 
.PHONY: all clean fclean
