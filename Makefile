CC = gcc
CFLAGS :=
SRC = main
CFLAGS += -DMACRO_A
CFLAGS += -DMACRO_B
CFLAGS += -DMACRO_C
CC_INFO = ./compile_commands.json

build:
	$(CC) $(CFLAGS) $(SRC).c -o $(SRC)
	

run: build
	./$(SRC)

clean:
	rm -rf $(SRC)