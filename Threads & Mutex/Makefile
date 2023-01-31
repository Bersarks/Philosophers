
NAME	= philo
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)

INCLUDE	= -lpthread

HEADER	= philosophers.h

Color_yellow = \033[33m
Color_red = \033[31m
Color_blue = \033[34m

all: yo $(NAME)

$(NAME): $(OBJS)
	$(CC) $(INCLUDE) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@clear

fclean: clean
	@rm -f $(NAME)

re: fclean all

yo:
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢹⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⠁⠀⢸⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⠤⠤⠤⢤⣤⣠⠔⠁⠀⠀⢀⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⣴⣶⣶⣶⡖⠒⠒⠒⠒⠶⠦⠤⢤⣴⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡄⣠⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠈⠛⠿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠤⣄⠙⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⠦⣄⣀⠀⠀⠀⠀⣰⡋⣻⣦⠀⠀⠀⠀⠀⠀⢿⣦⣿⡇⠘⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠁⠀⠀⠹⢿⣿⠟⠀⠀⠀⢶⣴⠀⠈⠉⠉⠀⠀⣿⣄⣰⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀$(Color_red)⡠⠤⢄⡀$(Color_yellow)⠀⣀⠀⠀⢀⣤⣀⣀⠤⠀$(Color_red)⠀⢸⠀⢹⡃$(Color_yellow)⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡼⠦⣄⣇⠀$(Color_red)⢸⠀⠀⠀⢱$(Color_yellow)⠀⠀⠑⢞⠉⠉⢻⠃⠀⠀$(Color_red)⠀⠈⢦⡾$(Color_yellow)⠀⠀⣸⠃⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣏⠀⠀⠈⠙⢦$(Color_red) ⠳⠤⠴⠋$(Color_yellow)⠀⠀⠀⠈⠓⠖⠃⠀⠀⠀⠀⣠⡞⠁⠀⢀⡏⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀⠀⠀⠙⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠖⠁⠀⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⣾⠛⠒⠒⠶⠤⠤⠤⠤⠤⠤⠤$(Color_yellow)⠼⣆⠀⠀⠀⠀⠀⠙⠀⠀⠀⠀⠀⠒⠒⠒⠊⠀⠀⠀⠀⠀⠀⠀⣰⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀$(Color_yellow)⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣤⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠏$(Color_yellow)⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠎⢀⣶$(Color_yellow)⠀⡟⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢸⣄⣀⣀⣤⠤⠒⢻⠀⠀⢐⡿⠞⢁⡏⣠$(Color_yellow)⡇⠀⣀⣄⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠈⠉⠀⠀⠀⠀⠀⢸⠀⠀⢀⣠⠀⣸⡟⢻$(Color_yellow)⡇⢠⡿⠟⠙⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⢸⣠⠴⠋⢹⠀⣨⡇⠛$(Color_yellow)⣇⠋⢧⠀⠀⢳⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⢸⡼⢻⣷⠞$(Color_yellow)⢻⣄⠘⡄⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠁⠀⠀$(Color_yellow)⠙⢦⣙⣄⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠓⠒⠒⠛⠉⠉⠑⢲⡤⠀⣄⡠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⣀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_red)██████╗ ██╗██╗  ██╗ █████╗  ██████╗██╗  ██╗██╗   ██╗"
	@echo "$(Color_red)██╔══██╗██║██║ ██╔╝██╔══██╗██╔════╝██║  ██║██║   ██║"
	@echo "$(Color_red)██████╔╝██║█████╔╝ ███████║██║     ███████║██║   ██║"
	@echo "$(Color_red)██╔═══╝ ██║██╔═██╗ ██╔══██║██║     ██╔══██║██║   ██║"
	@echo "$(Color_red)██║     ██║██║  ██╗██║  ██║╚██████╗██║  ██║╚██████╔╝"
	@echo "$(Color_red)╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝ ╚═════╝B̷u̷r̷a̷k̷ ̷Y̷I̷L̷D̷I̷R̷I̷M̷"
.PHONY:	all clean fclean re
