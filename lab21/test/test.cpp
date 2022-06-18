/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації функції знаходження  десертa з найбільшим вмістом вуглеводів серед безглюкозних десертів
 *
 * @author Kaydash Y.A.
 * @date 18-06-2022
 * @version 1.0
 */

#include "list.h"
#include <gtest/gtest.h>

TEST(programing01cpp, get_notsugar_test) {
  List list;
  Bowed b1("д/печенье 150 0 сладкий 17");
  Bowed b2("печенье 190 1 сладкий 36");
  list.readFromFile("../assets/text-out.txt");
  bool expected_value = true;
  bool actual_value = b1 != b2;
  ASSERT_EQ(expected_value, actual_value);
  b2.setYear(190);
  actual_value = b1 == b2;
  ASSERT_EQ(expected_value, actual_value);
  actual_value = b1 == list[0];
  ASSERT_EQ(expected_value, actual_value);
  list[0] = b2;
  list.writeToFile("../assets/text-in.txt");
  list.readFromFile("../assets/text-out.txt");
  actual_value = b2 == list[0];
  ASSERT_EQ(expected_value, actual_value);
}
