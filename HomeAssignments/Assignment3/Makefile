CXX = g++
CXXFLAGS = -std=c++17 -Wall -I/usr/include -pthread
GTEST_DIR = ~/googletest/googletest/build/lib

SRC = Transformers.cpp Autobots.cpp Desepticons.cpp MiniRobots.cpp
OBJ = $(SRC:.cpp=.o)

TEST_SRC = test_transformers.cpp test_autobots.cpp test_desepticons.cpp test_minirobots.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)

TARGET = allclasses_test

all: $(TARGET)

$(TARGET): $(OBJ) $(TEST_OBJ)
	$(CXX) $(OBJ) $(TEST_OBJ) -o $(TARGET) -L$(GTEST_DIR) -lgtest -lgtest_main -lpthread

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TEST_OBJ) $(TARGET)