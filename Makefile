CXX      := g++
CXXFLAGS := -std=c++17 -Wall -g
SRCS     := main.cpp Combate.cpp Esbirro.cpp Heroe.cpp
TARGET   := main

all: $(TARGET)

$(TARGET):
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
ifeq ($(OS),Windows_NT)
	del /F /Q $(TARGET).exe 2>nul
else
	rm -f $(TARGET)
endif

.PHONY: all clean
