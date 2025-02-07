// calculator_test.cpp
#include <gtest/gtest.h>
#include "calculator.cpp"

// Test Fixture for Calculator
class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

// Test for addition
TEST_F(CalculatorTest, AdditionTest) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(0, 0), 0);
}

// Test for subtraction
//TEST_F(CalculatorTest, SubtractionTest) {
//    EXPECT_EQ(calc.subtract(5, 3), 2);
//    EXPECT_EQ(calc.subtract(-1, 1), -2);
//    EXPECT_EQ(calc.subtract(0, 0), 0);
//}

// Test for multiplication
TEST_F(CalculatorTest, MultiplicationTest) {
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-2, 3), -6);
    EXPECT_EQ(calc.multiply(0, 5), 0);
}

// Test for division
TEST_F(CalculatorTest, DivisionTest) {
    EXPECT_EQ(calc.divide(6, 3), 2);
    EXPECT_EQ(calc.divide(5, 2), 2);
    
    // Test division by zero
//    EXPECT_THROW(calc.divide(5, 0), std::invalid_argument);
}
