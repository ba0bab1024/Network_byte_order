all: add-nbo

add-nbo: my_ntohl.o main.o
	g++ -o add-nbo my_ntohl.o main.o

my_ntohl.o: my_ntohl.h my_ntohl.cpp
	g++ -c -o my_ntohl.o my_ntohl.cpp

main.o: main.cpp my_ntohl.h
	g++ -c -o main.o main.cpp

clean:
	rm -f add-nbo *.o
