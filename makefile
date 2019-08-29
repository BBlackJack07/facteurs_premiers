CC=g++
CXXFLAGS=-Wall -std=c++17 -c
LDFLAGS=
SOURCES=main.cpp prime_numbers.cpp
HEADERS=prime_numbers.hpp
OBJECTS=$(SOURCE:.cpp=.c)
EXECUTABLE=factorise

all: $(SOURCES) $(HEADERS) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CXXFLAGS) $< -o $@

clean:
	rm $(EXECUTABLE) $(OBJECTS)
