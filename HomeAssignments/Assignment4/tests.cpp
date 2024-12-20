#include <gtest/gtest.h>
#include "Transformers4.h"
#include "Autobots4.h"
#include "Desepticons4.h"
#include "MiniRobots4.h"
#include <sstream>

TEST(TransformersTest, BasicFunctions) {
    Transformers transformer;
    transformer.setWeapon(10);
    EXPECT_EQ(transformer.getWeapon(), 10);

    transformer.attack();
    EXPECT_EQ(transformer.getWeapon(), 9);
    EXPECT_TRUE(transformer.motion());
    EXPECT_TRUE(transformer.jump());
}

TEST(AutobotsTest, OutputOperator) {
    Autobots autobot(100, 50, 80, 10);
    std::ostringstream os;
    os << autobot;
    EXPECT_NE(os.str().find("Autobot - Health: 100"), std::string::npos);
}

TEST(AutobotsTest, ComparisonOperator) {
    Autobots autobot1(100, 50, 80, 10);
    Autobots autobot2(100, 50, 75, 10);
    EXPECT_TRUE(autobot1 > autobot2);
    EXPECT_FALSE(autobot1 < autobot2);
}

TEST(DesepticonsTest, ConstructorAndAttributes) {
    Desepticons desepticon(120, 60, 85, 12);
    EXPECT_EQ(desepticon.getPower(), 12);
}

TEST(DesepticonsTest, OutputOperator) {
    Desepticons desepticon(120, 60, 85, 12);
    std::ostringstream os;
    os << desepticon;
    EXPECT_NE(os.str().find("Desepticon - Health: 120"), std::string::npos);
}

TEST(DesepticonsTest, ComparisonOperator) {
    Desepticons desepticon1(120, 60, 85, 12);
    Desepticons desepticon2(120, 60, 75, 10);
    EXPECT_TRUE(desepticon1 > desepticon2);
    EXPECT_FALSE(desepticon1 < desepticon2);
}

TEST(MiniRobotsTest, ConstructorAndAttributes) {
    MiniRobots minirobot(130, 70, 90, 8);
    EXPECT_EQ(minirobot.getPower(), 8);
}

TEST(MiniRobotsTest, ComparisonOperator) {
    MiniRobots minirobot1(130, 70, 90, 8);
    MiniRobots minirobot2(130, 70, 80, 6);
    EXPECT_TRUE(minirobot1 > minirobot2);
    EXPECT_FALSE(minirobot1 < minirobot2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}