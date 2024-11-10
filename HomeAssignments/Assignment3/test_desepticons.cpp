#include <gtest/gtest.h>
#include "Desepticons.h"

TEST(DesepticonsTest, ConstructorInitializesFields) {
    Desepticons decepticon;
    EXPECT_EQ(decepticon.getWeapon(), 15);  
    EXPECT_EQ(decepticon.getHealth(), 120);
    EXPECT_EQ(decepticon.getArmor(), 60);
    EXPECT_EQ(decepticon.getPower(), 80);
}

TEST(DesepticonsTest, TransformMethod) {
    Desepticons decepticon;
    EXPECT_TRUE(decepticon.transform());
}

TEST(DesepticonsTest, SetAndGetWeapon) {
    Desepticons decepticon;
    decepticon.setWeapon(10);
    EXPECT_EQ(decepticon.getWeapon(), 10);
}