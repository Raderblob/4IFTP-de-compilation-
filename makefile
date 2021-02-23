
CC = g++
DEBUG=yes
ifeq ($(DEBUG),yes)
	CFLAGS=-Wall -Werror -ansi -pedantic -std=c++11 -g -D MAP
	LDFLAGS=
else
	CFLAGS=-Wall -Werror -ansi -pedantic -std=c++11
	LDFLAGS=
endif
EXEC = main
SRC= lexer.cpp symbole.cpp main.cpp State.cpp State0.cpp State3.cpp State9.cpp
OBJ= $(SRC:.cpp=.o)
HEDR = $(SRC:.cpp=.h)


all: $(EXEC)
ifeq ($(DEBUG),yes)
	@echo "Génération en mode debug"
else
	@echo "Génération en mode release"
endif


$(EXEC): $(OBJ)
	g++ -o $@ $^ $(LDFLAGS)

TestMain.o: main.cpp
	g++ -c $< $(CFLAGS)

%.o: %.cpp %.h
	g++ -c $< $(CFLAGS)

.PHONY = clean

clean:
	rm -rf *.o
