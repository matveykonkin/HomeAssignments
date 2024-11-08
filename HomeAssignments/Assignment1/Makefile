CXX = g++
SRCS = main.cpp hello.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = hello

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
