#include <gtest/gtest.h>
#include "ClassTransformers.h"

TEST(TransformersTest, AttackDecreasesWeapon) {
    Transformers transformer;
    uint initialWeapon = transformer.getWeapon();
    transformer.attack();
    EXPECT_EQ(transformer.getWeapon(), initialWeapon - 1);
}