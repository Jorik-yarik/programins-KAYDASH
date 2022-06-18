/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації запису та читання з файлу
 *
 * @author Kaidash Y.A.
 * @date 17-06-2022
 * @version 1.0
 */

#include "list.h"
#include <gtest/gtest.h>

void assert_instrument(Bowed &expected_instrument, Bowed &actual_instrument)
{
	ASSERT_EQ(expected_instrument.getissug(), actual_instrument.getissug());
	ASSERT_EQ(expected_instrument.getBow(), actual_instrument.getBow());
	ASSERT_EQ(expected_instrument.getFirm(), actual_instrument.getFirm());
	ASSERT_EQ(expected_instrument.getSize(), actual_instrument.getSize());
	ASSERT_EQ(expected_instrument.getYear(), actual_instrument.getYear());
}

TEST(programing01cpp, get_older_test)
{
	List list;
	list.add({ true, "желе" ,100,  "кофейный" , "25" }, 0);
	list.add({ false, "д/печенье" , 150 ," сладкий", "17" }, 1);
	list.add({ true, "печенье" ,190 , "сладкий", " 36" }, 2);
	list.writeToFile("../assets/text-in");
	list.remove(2);
	list.remove(1);
	list.remove(0);
	list.readFromFile("../assets/text-in.txt");
	Bowed expected_instrument(false, "д/печенье" , 150 ," сладкий"," 17");
	Bowed actual_instrument = list.getElement(1);
	assert_instrument(expected_instrument, actual_instrument);
}
