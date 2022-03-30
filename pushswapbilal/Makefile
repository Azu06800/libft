PUSH_SWAP = push_swap
DIR		  = src/
PS_SRC	  = error.c init.c find_small.c \
CC	     = gcc
FLAGS    = -Wall -Werror -Wextra
LIBS	 = -L./libft -lft
LIBFT	 = libft.a
PRINTF	 = printf.a

all : $(LIBFT)

$(LIBFT) :
	@make -C libft

$(LIBFT) :
	@make -C printf


%.o : %.c
	@$(CC) $(FLAGS) $< -c -I includes

clean :
	@make clean -C libft
	@rm -f *.o
	@printf "\e[38;5;206m.o files deleted🚽\e[0m\n"

fclean: clean
	@make fclean -C libft
	@rm -f $(SERVER) $(CLIENT)
	@printf "\e[38;5;200mBinaries deleted🗑\e[0m\n"

re: fclean all
