#include <gtest/gtest.h>
#include "Autobots.h"

TEST(AutobotsTest, ConstructorInitializesFields) {
    Autobots autobot;
    EXPECT_EQ(autobot.getWeapon(), 10);  
    EXPECT_EQ(autobot.getHealth(), 100);
    EXPECT_EQ(autobot.getArmor(), 50);
    EXPECT_EQ(autobot.getPower(), 75);
}

TEST(AutobotsTest, TransformMethod) {
    Autobots autobot;
    EXPECT_TRUE(autobot.transform());
}

TEST(AutobotsTest, SetAndGetWeapon) {
    Autobots autobot;
    autobot.setWeapon(15);
    EXPECT_EQ(autobot.getWeapon(), 15);
}