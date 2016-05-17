// Copyright 2016 Goncharova Svetlana

#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Goncharova_Svetlana_ComplexNumberTest, sqr_imaginary_one_is_one) {
  // Arrange
  ComplexNumber z(0.0, 1.0);

  // Act
  ComplexNumber z_result = z*z;

  // Assert
  ComplexNumber z_expected(-1.0, 0.0);
  EXPECT_EQ(z_result, z_expected);
}

TEST(Goncharova_Svetlana_ComplexNumberTest, associativity_amount_is_performed) {
  // Arrange
  ComplexNumber z1(1.0, -2.0);
  ComplexNumber z2(0.0, 4.0);
  ComplexNumber z3(-1.0, -2.0);

  // Act
  ComplexNumber z_result = (z1 + z2) + z3;

  // Assert
  ComplexNumber z_expected = z1+(z2+z3);
  EXPECT_EQ(z_result, z_expected);
}

TEST(Goncharova_Svetlana_ComplexNumberTest, sqr_conjugate_numbers) {
  // Arrange
  ComplexNumber z1(1.0, -2.0);
  ComplexNumber z2(1.0, 2.0);

  // Act
  ComplexNumber z_result = z1+z2;

  // Assert
  ComplexNumber z_expected(2*z1.getRe(), 0.0);
  EXPECT_EQ(z_result, z_expected);
}

TEST(Goncharova_Svetlana_ComplexNumberTest, associativ_multiplicat_performed) {
  // Arrange
  ComplexNumber z1(3.0, 2.0);
  ComplexNumber z2(-9.0, 30.0);
  ComplexNumber z3(0.0, -5.0);

  // Act
  ComplexNumber z_result = (z1 * z2) * z3;

  // Assert
  ComplexNumber z_expected = z1 * (z2 * z3);
  EXPECT_EQ(z_result, z_expected);
}

TEST(Goncharova_Svetlana_ComplexNumberTest, multip_and_div_through_the_power) {
  // Arrange
  ComplexNumber z1(3.0, -2.0);

  // Act
  ComplexNumber z_result = z1*z1 / z1;

  // Assert
  ComplexNumber z_expected(3.0, -2.0);
  EXPECT_EQ(z_result, z_expected);
}
