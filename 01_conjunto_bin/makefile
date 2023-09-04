CC = gcc #compilador
CFLAGS = -Wall -O2 #flags de otimização
programa = main #nome do executavel

#comandos
main: main.c conjunto.c conjunto.h
	$(CC) $(CFLAGS) -o $(programa) main.c conjunto.c

clean:
	rm *.o $(programa)

exec:
	$(CC) $(CFLAGS) -o $(programa) main.c conjunto.c
	./$(programa)
