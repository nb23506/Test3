CC = gcc
CFLAGS = -Wall

# Executable names
EXEC = test_program

# Default target
all: $(EXEC)

# Compile the test program
$(EXEC): program.o test.o
	$(CC) $(CFLAGS) -o $(EXEC) program.o test.o

# Compile object files for the main program
program.o: program.c
	$(CC) $(CFLAGS) -c program.c

# Compile object files for testing
test.o: test.c
	$(CC) $(CFLAGS) -c test.c

# Clean up
clean:
	rm -f $(EXEC) *.o
