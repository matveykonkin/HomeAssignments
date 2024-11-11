CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

SRC = main.cpp Transformers4.cpp Autobots4.cpp Desepticons4.cpp MiniRobots4.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = transformers_app

TEST_SRC = tests.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
TEST_TARGET = test_transformers

GTEST_LIBS = -lgtest -lgtest_main

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(TEST_TARGET): $(OBJ) $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) $^ $(GTEST_LIBS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f $(OBJ) $(TEST_OBJ) $(TARGET) $(TEST_TARGET)

-include $(SRC:.cpp=.d) $(TEST_SRC:.cpp=.d)

%.d: %.cpp
	$(CXX) -MM $(CXXFLAGS) $< > $@.tmp
	sed 's|\($*\)\.o[ :]*|\1.o $@ : |g' < $@.tmp > $@
	rm -f $@.tmp