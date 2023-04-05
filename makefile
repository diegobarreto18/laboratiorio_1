todo: main.o
	g++ -Wall -o main main.o 
main.o: main.c
	g++ -Wall -c main.c
clean:
	rm -f *.o
	rm -f main
