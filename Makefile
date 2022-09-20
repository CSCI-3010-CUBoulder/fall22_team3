#Spencer Jackson
#PE1
#Makefile for the project, based on example makefile from Canvas/github

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

all: test

clean:
	rm test

test: test.cpp functions_to_implement.cpp catch.hpp
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.cpp catch2.hpp -o test