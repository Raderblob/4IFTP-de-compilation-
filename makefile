
CC = g++
DEBUG=no
ifeq ($(DEBUG),yes)
	CFLAGS=-Wall -Werror -ansi -pedantic -std=c++11 -g -D MAP
	LDFLAGS=
else
	CFLAGS=-Wall -Werror -ansi -pedantic -std=c++11
	LDFLAGS=
endif
EXEC = main
SRC= lexer.cpp symbole.cpp main.cpp State.cpp State0.cpp State1.cpp State2.cpp State3.cpp State4.cpp State5.cpp State6.cpp State7.cpp State8.cpp State9.cpp
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

main.o: main.cpp
	g++ -c $< $(CFLAGS)

%.o: %.cpp %.h
	g++ -c $< $(CFLAGS)

.PHONY = clean

clean:
	rm -rf *.o
