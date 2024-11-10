#include <gtest/gtest.h>
#include "MiniRobots.h"

TEST(MiniRobotsTest, ConstructorInitializesFields) {
    MiniRobots miniRobot;
    EXPECT_EQ(miniRobot.getWeapon(), 5);  
    EXPECT_EQ(miniRobot.getHealth(), 70);
    EXPECT_EQ(miniRobot.getArmor(), 40);
    EXPECT_EQ(miniRobot.getPower(), 50);
}

TEST(MiniRobotsTest, TransformMethod) {
    MiniRobots miniRobot;
    EXPECT_TRUE(miniRobot.transform());
}

TEST(MiniRobotsTest, SetAndGetWeapon) {
    MiniRobots miniRobot;
    miniRobot.setWeapon(20);
    EXPECT_EQ(miniRobot.getWeapon(), 20);
}