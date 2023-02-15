CC=gcc
CCFLAGS=-Wall -g
NAME=pick

build: main.c
	$(CC) $(CCFLAGS) -o $(NAME) $^


run: build
	@./$(NAME)

install: build
	cp $(NAME) ~/.local/bin/

clean:
	rm *.o $(NAME)
