CXX := g++
CXXFLAGS := -std=c++17 -Wall -pedantic -g
LIBS := -pthread

TARGET := main
OBJDIR := .obj

SRC := $(shell find . -name "*.cpp" | cut -c3-)
OBJ := $(addprefix $(OBJDIR)/, $(patsubst %.cpp, %.o, $(SRC)))

all: $(OBJ)
	$(CXX) $(CXXFLAGS) $(LIBS) $^ -o $(TARGET)

$(OBJ): $(OBJDIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm -rf $(OBJDIR)
	rm -f $(TARGET)
