CXX = g++
CXXFLAGS = -std=c++11 -Iinclude

SRC = src/ZadKcpp.cc src/ZadAuto.cc
OBJ = $(SRC:.cc=.o)

all: main

main: main.o $(OBJ)
	$(CXX) $(CXXFLAGS) -o main main.o $(OBJ) -lm

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c main.cc

src/%.o: src/%.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o src/*.o main
