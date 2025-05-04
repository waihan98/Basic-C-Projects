# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Iinclude

# Source files
SRC = src/main.cpp src/ttt.cpp

# Output program name
TARGET = tic-tac-toe

# Default rule
all: $(TARGET)

# How to build the target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Clean rule to delete the built files
clean:
	rm -f $(TARGET)
