output: main.o map.o
	gcc main.o map.o -o map

map.o: map.c map.h
	gcc -c map.c

main.o: main.c
	gcc -c main.c

clean:
	rm *.o
