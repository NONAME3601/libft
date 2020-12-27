SRC_DIR=src
OBJ_DIR=obj
SRCS=$(shell find ${SRC_DIR} -name *.c)
OBJS=${patsubst ${SRC_DIR}/%,${OBJ_DIR}/%,${SRCS:.c=.o}}
CFLAGS=-Wall -Wextra -Werror -I inc/
CC=cc
AR=ar
RM=rm
LIB_NAME=libft.a

.PHONY: clean fclean

lib: ${OBJS}
	${AR} -rc ${LIB_NAME} ${OBJS}

re: fclean lib

${OBJS}: ${SRCS}
	mkdir -p ${@D}
	${CC} ${CFLAGS} -c -o $@ ${patsubst ${OBJ_DIR}/%,${SRC_DIR}/%,${@:.o=.c}}

clean:
	${RM} -rf ${OBJS}

fclean: clean
	${RM} -rf ${LIB_NAME}