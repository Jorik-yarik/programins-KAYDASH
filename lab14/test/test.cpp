/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації функції знаходження  десертa з найбільшим вмістом вуглеводів серед безглюкозних десертів
 *
 * @author Kaidash Y.A.
 * @date 17-06-2022
 * @version 1.0
 */

#include "entity.h"
#include <gtest/gtest.h>

void assert_instrument(BowedInstrument &expected_instrument, BowedInstrument &actual_instrument)
{
	ASSERT_EQ(expected_instrument.getAcoustic(), actual_instrument.getAcoustic());
	ASSERT_EQ(expected_instrument.getBow(), actual_instrument.getBow());
	ASSERT_EQ(expected_instrument.getFirm(), actual_instrument.getFirm());
	ASSERT_EQ(expected_instrument.getSize(), actual_instrument.getSize());
	ASSERT_EQ(expected_instrument.getYear(), actual_instrument.getYear());
}

TEST(programing01cpp, get_older_test)
{
	List list;
	list.add({ true, "желе", 100, "кофейный", "25" }, 0);
	list.add({ true, "печенье", 190, "сладкий", "36" }, 1);
	list.add({ false, "д/печенье", 150, "сладкий", "17" }, 2);
	BowedInstrument expected_instrument(false, "д/печенье", 150, "сладкий", "17");
	BowedInstrument actual_instrument = list.findOldest("д/печенье");
	assert_instrument(expected_instrument, actual_instrument);
}
