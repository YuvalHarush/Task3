program: main.o Textin.o Sorting.o
	gcc -o program main.o Texting.o Sorting.o
isort: PartA.o Sorting.o
	gcc -o isort PartA.o Sorting.o
txtfind: PartB.o Textin.o
	gcc -o txtfind PartB.o Texting.o
main.o: main.c
	gcc -c main.c
Texting.o: Texting.c
	gcc -c Texting.c
Sorting.o: Sorting.c
	gcc -c Sorting.c
PartA.o: PartA.c
	gcc -c PartA.c
PartB.o: PartB.c
	gcc -c PartB.c
clean:
	rm -f *.o program *.o isort *.o txtfind
