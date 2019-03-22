CC = g++
CFLAGS = -std=c++11 -pthread
RM = rm -rf

all: main.o addition.o
	@$(CC) $(CFLAGS) -o run main.o addition.o
	@$(RM) *.o

main.o: main.cpp 
	@$(CC) $(CFLAGS) -c main.cpp

addition.o: addition.cpp addition.hpp
	@$(CC) $(CFLAGS) -c addition.cpp

clean: 
	@$(RM) run *.o
