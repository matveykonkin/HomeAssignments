CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic
OBJFILES = main.o Transformers5.o Autobots5.o Decepticons5.o
TARGET = transformers

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJFILES)

main.o: main.cpp Transformers5.h Autobots5.h Decepticons5.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Transformer.o: Transformers5.cpp Transformers5.h
	$(CXX) $(CXXFLAGS) -c Transformers5.cpp

Autobot.o: Autobot.cpp Autobots5.h Transformers5.h
	$(CXX) $(CXXFLAGS) -c Autobots5.cpp

Decepticon.o: Decepticons5.cpp Decepticons5.h Transformers5.h
	$(CXX) $(CXXFLAGS) -c Decepticons5.cpp

clean:
	rm -f $(OBJFILES) $(TARGET)