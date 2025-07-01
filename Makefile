all: arcfour example

example: example.o
	gcc example.o -o example -Wall -02

example.o: example.c
	gcc -c -02 -Wall example.c 

arcfour: arcfour.o
	gcc arcfour.o -o arcfour.so -02 -Wall -fPIC -shared -ldl -D_GNU_SOURCE

arcfour.o: arcfour.c
	gcc -c -02 -Wall arcfour.c

clean:
	rm -f *.o *.so example