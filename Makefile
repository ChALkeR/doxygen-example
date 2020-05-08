all: main doc

doc:
	doxygen Doxyfile

main: main.o area.o
	gcc main.o area.o -o main

main.o: main.c
	gcc -c main.c -o main.o

area.o: area.c
	gcc -c area.c -o area.o

clean:
	rm -rf *.o main html latex
