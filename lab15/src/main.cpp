/**
 * @mainpage
 * # Загальне завдання
 * Розробити базовий клас та клас, що містить динамічний масив об'єктів, реалізація базових методів для роботи з цими класами 
 * 
 * @author Kaidash Y.A.
 * @date 17-06-2022
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи програми роботи з класами.
 */

#include "list.h"

using std::cout;
using std::string;

int main()
{
	setlocale(LC_ALL, "rus");
	List list;
	Bowed b1(true, "желе", 100, "кофейный", "25");
	Bowed b2(true, "печенье", 190, "сладкий", "36");
	Bowed b3(false, "д/печенье", 150, "сладкий", "17");
	list.add(b1, 0);
	list.add(b2, 0);
	list.add(b3, 0);
	list.show();
	Bowed result = list.findOldest("д/печенье");
	result.show();
}