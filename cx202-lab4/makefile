# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Find all .c files in the current directory and subdirectories
SOURCES := $(shell find . -name "*.c")

# Replace .c extensions with no extension for executables
EXECUTABLES := $(SOURCES:.c=)

# Default target
all: $(EXECUTABLES)

# Pattern rule to compile each .c file into an executable
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# Run all the executables
run:
	@for exe in $(EXECUTABLES); do \
		./$$exe; \
	done

# Clean up generated files
clean:
	rm -f $(EXECUTABLES)
