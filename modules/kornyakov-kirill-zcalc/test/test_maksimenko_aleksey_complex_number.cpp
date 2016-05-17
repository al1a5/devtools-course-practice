// Copyright 2016 Maksimenko Aleksey

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Maksimenko_Alex_ComplexNumberTest, can_use_some_oper_with_complex) {
    // Arrange
    ComplexNumber z1(2.0, 1.0);
    ComplexNumber z2(4.0, 1.0);
    ComplexNumber z3(1.0, 1.0);

    // Act
    ComplexNumber z = (z1*z2) / z3;

    // Assert
    ComplexNumber expected_z(6.5, -0.5);
    EXPECT_EQ(z, expected_z);
}

TEST(Maksimenko_Alex_ComplexNumberTest, can_use_the_form_diff_sqr_test_first) {
    // Arrange
    ComplexNumber z1(4.0, 2.0);
    ComplexNumber z2(6.0, 8.0);

    // Act
    ComplexNumber z = (z1*z1 - z2*z2) / (z1 - z2);

    // Assert
    ComplexNumber expected_z = z1 + z2;
    EXPECT_EQ(z, expected_z);
}

TEST(Maksimenko_Alex_ComplexNumberTest, can_use_the_form_diff_sqr_test_second) {
    // Arrange
    ComplexNumber z1(4.0, 2.0);
    ComplexNumber z2(6.0, 8.0);

    // Act
    ComplexNumber z = (z1*z1 - z2*z2) / (z1 + z2);

    // Assert
    ComplexNumber expected_z = z1 - z2;
    EXPECT_EQ(z, expected_z);
}

TEST(Maksimenko_Alex_ComplexNumberTest, can_work_with_complex_conjugates) {
    // Arrange
    ComplexNumber z1(1.0, -1.0);
    ComplexNumber z2(1.0, 1.0);
    ComplexNumber a(7.0, 0.0);
    ComplexNumber b(14.0, 0.0);
    ComplexNumber ins(-1.0, 0.0);

    // Act
    // (a*(1-i)^2/(b*(1+i)^2)=-a/b)
    ComplexNumber  division = a*z1*z1 / (b*z2*z2);

    // Assert
    ComplexNumber expected_z = ins*a / b;
    EXPECT_EQ(division, expected_z);
}

TEST(Maksimenko_Alex_ComplexNumberTest, works_form_of_diff_of_cubes) {
    // Arrange
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(1.0, 2.0);

    // Act & Assert
    // (z1)^3-(z2)^3=((z1)^2+z1z2+(z2)^2)
    ComplexNumber result_left = z1*z1*z1 - z2*z2*z2;
    ComplexNumber result_right = (z1 - z2)*(z1*z1 + z1*z2 + z2*z2);
    EXPECT_EQ(result_left, result_right);
}
