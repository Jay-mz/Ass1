CC=g++ # Compiler
LIBS=-lm -lboost_program_options
TARGET=myprog # Name of executable
OBJECTS=Records.o cmdline_parser.o driver.o # Object files to build into exe
# Linking Rule
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LIBS)
	@cp $(TARGET) ./binaries
# Source Compilation
.cpp.o:
	$(CC) -c $<

clean:
	rm -f *.o
