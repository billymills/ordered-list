CC = g++
CFLAGS = -Wall

ordered_list: ordered_list.cpp OL.o Node.o
	$(CC) $(CFLAGS) -o ordered_list ordered_list.cpp OL.o Node.o

OL.o: OL.h OL.cpp
	$(CC) $(CFLAGS) -c OL.cpp

Node.o: Node.h Node.cpp
	$(CC) $(CFLAGS) -c Node.cpp
