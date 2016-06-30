#compiler
CC=gcc
#linker
LD=gcc
#include file directory
CFLAGS=-I. -std=c99

#linker rule
testSort: main.o insertionSort.o bubbleSort.o selectionSort.o
#	gcc -o testSort main.o insertionSort.o bubbleSort.o
	$(LD) -o testSort main.o insertionSort.o bubbleSort.o selectionSort.o
	
#compiler rules
main.o: main.c
#gcc -c -I. main.c
	$(CC) -c $(CFLAGS) main.c	
	 
insertionSort.o:
bubbleSort.o: 
selectionSort.o: 

#clean up procedure		
clean:
	rm *.o

