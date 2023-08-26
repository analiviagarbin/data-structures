CC = gcc
CFLAGS = -Wall -O2
programa = main

main: main.c lista.c lista.h
	$(CC) $(CFLAGS) -o $(programa) main.c lista.c

clean:
	rm *.o $(programa)

exec:
	$(CC) $(CFLAGS) -o $(programa) main.c lista.c
	./$(programa)
