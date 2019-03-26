CC = g++
CFLAGS = -std=c++11 -pthread
RM = rm -rf

all: main.o addition.o knapsack.o reorganize_string.o
	@$(CC) $(CFLAGS) -o run main.o addition.o knapsack.o reorganize_string.o
	@$(RM) *.o

main.o: main.cpp 
	@$(CC) $(CFLAGS) -c main.cpp

addition.o: addition.cpp addition.hpp
	@$(CC) $(CFLAGS) -c addition.cpp

knapsack.o: knapsack.cpp knapsack.hpp
	@$(CC) $(CFLAGS) -c knapsack.cpp

reorganize_string.o: reorganize_string.cpp reorganize_string.hpp
	@$(CC) $(CFLAGS) -c reorganize_string.cpp

clean: 
	@$(RM) run *.o
