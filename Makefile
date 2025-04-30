CXX      := g++
CXXFLAGS := -std=c++17 -Wall -g
SRCS     := main.cpp Combate.cpp Esbirro.cpp Heroe.cpp
OBJS     := $(SRCS:.cpp=.o)
TARGET   := main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
ifeq ($(OS),Windows_NT)
	del /F /Q $(OBJS) $(TARGET).exe 2>nul
else
	rm -f $(OBJS) $(TARGET)
endif
