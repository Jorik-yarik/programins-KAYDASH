/**
 * @mainpage
 * # Загальне завдання
 * Розширити базовий клас та клас, додавши роботу з файлами
 *
 * @author Kaidash Y.A.
 * @date 17-06-2022
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи програми роботи з класами.
 *
 * @author Kaidash Y.A.
 * @date 17-06-2022
 * @version 1.0
 */

#include "list.h"

using std::cout;
using std::string;

int main()
{
	setlocale(LC_ALL, "rus");
	List list;
	Bowed b1("д/печенье 150 0 сладкий 17");
	list.add(b1, 0);
	list.readFromFile("../assets/text-out.txt");
	list.writeToFile("../assets/text-in.txt");
}