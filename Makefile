CC = gcc
CFLAGS = -std=c99 -O2 -Wall -Wextra
TARGET = bin/mlasm_kids
SRC = src/mlasm_kids.c
HEADERS = src/kids_tables.h

ifeq ($(OS),Windows_NT)
    TARGET := bin/mlasm_kids.exe
    ROOT_TARGET := mlasm_kids.exe
    MKDIR = if not exist bin mkdir bin
    RM = del /Q /F
else
    ROOT_TARGET := mlasm_kids
    MKDIR = mkdir -p bin
    RM = rm -f
endif

all: $(TARGET) $(ROOT_TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(MKDIR)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

$(ROOT_TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(ROOT_TARGET)

test: all
	./$(ROOT_TARGET) --test

clean:
	$(RM) $(TARGET) $(ROOT_TARGET)

.PHONY: all test clean
