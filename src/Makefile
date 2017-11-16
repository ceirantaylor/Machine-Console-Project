INCLUDEDIR = ../headers
vpath %.h $(INCLUDEDIR)
CXXFLAGS = -std=c++11 -Wall -I $(INCLUDEDIR)
DBOOST = -lboost_unit_test_framework

all: main.out keypad.o test.out

main.out: main.cpp keypad.o
	g++ $(CXXFLAGS) main.cpp keypad.o -o main.out

heypad.o: keypad.cpp keypad.h
	g++ -c $(CXXFLAGS) keypad.cpp -o keypad.o

test.out: test.cpp keypad.o
	g++ test.cpp keypad.o $(DBOOST) $(CXXFLAGS) -o test

.PHONY: clean
clean:
	rm -f main.out main.o keypad.o test
