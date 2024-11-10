#include <gtest/gtest.h>
#include "Transformers4.h"
#include "Autobots4.h"
#include "Desepticons4.h"
#include "MiniRobots4.h"

TEST(TransformersTest, EqualityOperator) {
    Transformers t1(100, 50, 10, 75);
    Transformers t2(100, 50, 10, 75);
    EXPECT_TRUE(t1 == t2);

    Transformers t3(90, 50, 10, 75);
    EXPECT_FALSE(t1 == t3);
}

TEST(TransformersTest, LessThanOperator) {
    Transformers t1(100, 50, 10, 50);
    Transformers t2(100, 50, 10, 75);
    EXPECT_TRUE(t1 < t2);
    EXPECT_FALSE(t2 < t1);
}

TEST(TransformersTest, GreaterThanOperator) {
    Transformers t1(100, 50, 10, 100);
    Transformers t2(100, 50, 10, 75);
    EXPECT_TRUE(t1 > t2);
    EXPECT_FALSE(t2 > t1);
}

TEST(TransformersTest, OutputOperator) {
    Transformers t1(100, 50, 10, 75);
    std::ostringstream oss;
    oss << t1;
    EXPECT_EQ(oss.str(), "Transformers [Health: 100, Armor: 50, Weapon: 10, Power: 75]");
}

TEST(AutobotsTest, EqualityOperator) {
    Autobots a1(120, 60, 15, 70);
    Autobots a2(120, 60, 15, 75);
    EXPECT_TRUE(a1 == a2);

    Autobots a3(90, 60, 15, 75);
    EXPECT_FALSE(a1 == a3);
}

TEST(AutobotsTest, LessThanOperator) {
    Autobots a1(120, 60, 15, 70);
    Autobots a2(120, 50, 15, 75);
    EXPECT_TRUE(a1 < a2);
    EXPECT_FALSE(a2 < a1);
}

TEST(AutobotsTest, GreaterThanOperator) {
    Autobots a1(120, 50, 15, 100);
    Autobots a2(100, 50, 10, 75);
    EXPECT_TRUE(a1 > a2);
    EXPECT_FALSE(a2 > a1);
}

TEST(AutobotsTest, OutputOperator) {
    Autobots a1(120, 60, 15, 70);
    std::ostringstream oss;
    oss << a1;
    EXPECT_EQ(oss.str(), "Autobots [Health: 120, Armor: 60, Weapon: 15, Power: 70]");
}

TEST(DesepticonsTest, EqualityOperator) {
    Desepticons d1(90, 45, 15, 65);
    Desepticons d2(100, 50, 10, 75);
    EXPECT_TRUE(d1 == d2);

    Desepticons d3(90, 50, 10, 75);
    EXPECT_FALSE(d1 == d3);
}

TEST(DesepticonsTest, LessThanOperator) {
    Desepticons d1(90, 45, 15, 65);
    Desepticons d2(100, 50, 10, 75);
    EXPECT_TRUE(d1 < d2);
    EXPECT_FALSE(d2 < d1);
}

TEST(DesepticonsTest, OutputOperator) {
    Desepticons d1(90, 45, 15, 65);
    std::ostringstream oss;
    oss << d1;
    EXPECT_EQ(oss.str(), "Desepticons [Health: 90, Armor: 45, Weapon: 15, Power: 65]");
}

TEST(MiniRobotsTest, EqualityOperator) {
    MiniRobots m1(80, 35, 5, 60);
    MiniRobots m2(80, 35, 5, 60);
    EXPECT_TRUE(m1 == m2);

    MiniRobots m3(90, 50, 10, 75);
    EXPECT_FALSE(m1 == m3);
}

TEST(MiniRobotsTest, LessThanOperator) {
    MiniRobots m1(80, 35, 5, 60);
    MiniRobots m2(100, 50, 10, 75);
    EXPECT_TRUE(m1 < m2);
    EXPECT_FALSE(m2 < m1);
}

TEST(MiniRobotsTest, GreaterThanOperator) {
    MiniRobots m1(80, 35, 5, 60);
    MiniRobots m2(100, 50, 10, 75);
    EXPECT_TRUE(m1 > m2);
    EXPECT_FALSE(m2 > m1);
}

TEST(MiniRobotsTest, OutputOperator) {
    MiniRobots m1(80, 35, 5, 60);
    std::ostringstream oss;
    oss << m1;
    EXPECT_EQ(oss.str(), "MiniRobots [Health: 80, Armor: 35, Weapon: 5, Power: 60]");
}