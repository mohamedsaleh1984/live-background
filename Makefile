CXX=g++
INCDIRS=-I.
OPT=-O0
WARNINGS_FLAGS = -Wall -Wno-reorder -Wno-unused-parameter -Wextra -Wno-sign-compare
CXXFLAGS= $(WARNINGS_FLAGS) -g $(INCDIRS) $(OPT)

CPPFILES=main.cpp Video.cpp ImagesGenerator.cpp LiveBackgroundService.cpp

OBJECTS=main.o Video.o ImagesGenerator.o LiveBackgroundService.o

BINARY=app.out 

all: $(BINARY)
	@echo "Binary generated..."

$(BINARY): $(OBJECTS)
	$(CXX) -o $@ $^
	@echo "Linking..."
	
%.o:%.cpp
	@echo "Compiling...$^"
	$(CXX) $(CXXFLAGS) -c -o $@ $^
	
clean:
	rm -rf $(BINARY) $(OBJECTS) *.dat
	@echo "cleaning up..."

run:
	@echo "removing dependencies..."
	@rm -rf $(OBJECTS) 
	@echo "running the app..."
	./$(BINARY)