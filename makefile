program: main.o Textin.o Sorting.o
	gcc -o program main.o Texting.o Sorting.o
isort: main.o Sorting.o
	gcc -o isort main.o Sorting.o
txtfind: main.o Textin.o
	gcc -o txtfind main.o Texting.o
main.o: main.c
	gcc -c main.c
Texting.o: Texting.c
	gcc -c Texting.c
Sorting.o: Sorting.c
	gcc -c Sorting.c
clean:
	rm -f *.o program *.o isort *.o txtfind
