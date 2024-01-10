# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g -I/usr/include/eigen3

# Name of the executable
TARGET = compiled

# All .cpp files
SRC = eigen_test.cpp testing.cpp

# Object files (replace .cpp with .o)
OBJ = $(SRC:.cpp=.o)

# Build the program
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Clean up
clean:
	rm -f $(OBJ) $(TARGET)

# Rule for building object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<
