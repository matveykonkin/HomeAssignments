CXX = g++
CXXFLAGS = -std=c++17 -Wall -I/usr/include -pthread
GTEST_DIR = ~/googletest/googletest/build/lib

SRC = ClassAutobots.cpp ClassDesepticons.cpp ClassMiniRobots.cpp ClassTransformers.cpp
OBJ = $(SRC:.cpp=.o)
TEST_SRC = test_transformers.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)

all: transformers_test

transformers_test: $(OBJ) $(TEST_OBJ)
	$(CXX) $(OBJ) $(TEST_OBJ) -o transformers_test -L$(GTEST_DIR) -lgtest -lgtest_main -lpthread

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TEST_OBJ) transformers_test