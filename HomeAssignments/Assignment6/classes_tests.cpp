/*
## Assignment6
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 6
*/

#include "template_class.h"
#include <gtest/gtest.h>

TEST(DataProcessorTest, MyClassAPositive)
{
    MyClassA instance;
    DataProcessor<MyClassA, float> obj(5.0f, {}, instance);
    EXPECT_TRUE(obj.execute());
}

TEST(DataProcessorTest, MyClassANegative)
{
    MyClassA instance;
    DataProcessor<MyClassA, float> obj(-5.0f, {}, instance);
    EXPECT_FALSE(obj.execute());
}

TEST(DataProcessorTest, MyClassBPositive)
{
    MyClassB instance;
    std::vector<float> fList = {5.0f, 10.0f};
    DataProcessor<MyClassB, float> obj(0.0f, fList, instance);
    EXPECT_TRUE(obj.execute());
}

TEST(DataProcessorTest, MyClassBNegative)
{
    MyClassB instance;
    std::vector<float> fList;
    DataProcessor<MyClassB, float> obj(0.0f, fList, instance);
    EXPECT_FALSE(obj.execute());
}

TEST(DataProcessorTest, MyClassCPositive)
{
    MyClassC instance;
    std::vector<float> fList = {1.0f, 2.0f};
    DataProcessor<MyClassC, float> obj(-2.0f, fList, instance);
    EXPECT_TRUE(obj.execute());
}

TEST(DataProcessorTest, MyClassCNegative)
{
    MyClassC instance;
    std::vector<float> fList = {6.0f, 7.0f};
    DataProcessor<MyClassC, float> obj(9.0f, fList, instance);
    EXPECT_FALSE(obj.execute());
}

TEST(SpecializationTest, IntTrue)
{
    MyClassA instance;
    std::vector<float> fList = {1.0f, 2.0f};
    DataProcessor<MyClassA, int> obj(13, fList, instance);
    EXPECT_TRUE(obj.execute());
}

TEST(SpecializationTest, DoubleFalse)
{
    MyClassA instance;
    std::vector<float> fList = {1.0f, 2.0f};
    DataProcessor<MyClassA, double> obj(13.13, fList, instance);
    EXPECT_FALSE(obj.execute());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
