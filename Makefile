APP = app
BIN = bin
INC = include
OBJ = obj
SRC = src
NAME = sys-loja
FLAGS = -O3 -Wall

#

all: objs
	gcc $(FLAGS) $(APP)/main.c obj/*.o -I $(INC) -o $(BIN)/$(NAME)

objs: \
	$(OBJ)/prints.o \
	$(OBJ)/arvore.o

$(OBJ)/%.o: $(SRC)/%.c $(INC)/%.h
	gcc $(FLAGS) -c $< -I $(INC) -o $@

run:
	$(BIN)/$(NAME) 

cleanLinux:
	rm -rf $(OBJ)/*
	rm -rf $(BIN)/*

clean:
	del /q $(OBJ)
	del /q $(BIN)