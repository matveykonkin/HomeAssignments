/* Konkin Matvey st135668@student.spbu.ru
 first test project
*/
CXX = g++
SRCS = main.cpp hello.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = hello

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
