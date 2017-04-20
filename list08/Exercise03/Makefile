ERROR	=	\33[31;5mERROR\33[m
OK		=	\33[32;5mOK\033[m
CHECK =	echo "\33[32;5mOK\33[m" || echo "\33[31;5mERROR\33[m"

BIN		=	tests
CXX		=	g++
CFLAGS	=	-g -ggdb -Wall -Wextra -O3 -std=c++0x

MAIN		= ./main.cpp
HEADERS		= $(shell find . -type f -path "*include/*.h")
MODULES		= $(shell find . -type f -path "*src/*.cpp")
INCLUDE		= $(addprefix -I , $(dir ${HEADERS}))
SOURCES		= ${MAIN} ${MODULES}
MODULEOBJS	= ${MODULES:.cpp=.o}

OBJECTS	= $(SOURCES:%.cpp=%.o)

all: ${OBJECTS}
	@echo -n "Building project ... "
	@$(CXX) ${OBJECTS} ${INCLUDE} ${CFLAGS} -o ${BIN} && echo "${OK}" || (echo "${ERROR}"; exit 1;)

clean:
	@echo -n "Cleaning ... "
	@rm -f ${OBJECTS} ${BIN} && echo "${OK}" || (echo "${ERROR}"; exit 1;)

%.o: %.cpp
	@echo -n "Compiling $(notdir $<) to $(notdir $@) ... "
	@$(CXX) ${INCLUDE} ${CFLAGS} -c $< -o $@  && ${CHECK}