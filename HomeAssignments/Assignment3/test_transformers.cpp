/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#include <gtest/gtest.h>
#include "Transformers.h"

TEST(TransformersTest, ConstructorInitializesFields) {
    Transformers transformer;
    EXPECT_EQ(transformer.getWeapon(), 10);  
    EXPECT_EQ(transformer.getHealth(), 100); 
    EXPECT_EQ(transformer.getArmor(), 50);  
    EXPECT_EQ(transformer.getPower(), 75);   
}

TEST(TransformersTest, SetAndGetWeapon) {
    Transformers transformer;
    transformer.setWeapon(20);
    EXPECT_EQ(transformer.getWeapon(), 20);
}

TEST(TransformersTest, AttackDecreasesWeapon) {
    Transformers transformer;
    transformer.setWeapon(5);
    uint initialWeapon = transformer.getWeapon();
    transformer.attack();
    EXPECT_EQ(transformer.getWeapon(), initialWeapon - 1);
}

TEST(TransformersTest, JumpSuccessful) {
    Transformers transformer;
    EXPECT_TRUE(transformer.jump());
}

TEST(TransformersTest, MotionSuccessful) {
    Transformers transformer;
    EXPECT_TRUE(transformer.motion());
}