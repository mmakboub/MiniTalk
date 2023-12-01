
INC = ./mandatory/minitalk.h
INC_BONUS = ./bonus/minitalkbonus.h

CFLAGS = -Wall -Wextra -Werror


all : server client

bonus: server_bonus client_bonus

server: ./mandatory/server.c ./mandatory/minitalk_utils.c $(INC)
	cc $(CFLAGS) ./mandatory/server.c ./mandatory/minitalk_utils.c -o server

client: ./mandatory/client.c ./mandatory/minitalk_utils.c $(INC)
	cc $(CFLAGS) ./mandatory/client.c ./mandatory/minitalk_utils.c -o client
	
server_bonus: ./bonus/server_bonus.c ./bonus/minitalk_utils_bonus.c $(INC_BONUS)
	cc $(CFLAGS) ./bonus/server_bonus.c ./bonus/minitalk_utils_bonus.c -o server_bonus

client_bonus: ./bonus/client_bonus.c ./bonus/minitalk_utils_bonus.c $(INC_BONUS)
	cc $(CFLAGS)  ./bonus/client_bonus.c ./bonus/minitalk_utils_bonus.c -o client_bonus

clean:
	rm -f server.o server_bonus.o client.o client_bonus.o
	
fclean : clean
	rm -rf server server_bonus client client_bonus

re : fclean all
