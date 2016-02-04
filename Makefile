CC=g++
DEPENDS=main.h split.cpp
main:
	$(CC) -o main main.cpp -Wall $(DEPENDS)
