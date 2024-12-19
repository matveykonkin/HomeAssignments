CC = g++
CFLAGS = -std=c++17 -Wall -Werror -Wpedantic
GTEST_DIR = /usr/src/gtest
GTEST_LIBS = -lgtest -lgtest_main -pthread

SRCS = classes_tests.cpp
HEADERS = template_class.h
OBJS = $(SRCS:.cpp=.o)

all: tests

tests: $(OBJS)
	$(CC) $(CFLAGS) -o tests $(OBJS) $(GTEST_LIBS)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o tests

run_tests: tests
	./tests
