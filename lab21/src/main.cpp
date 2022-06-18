#include "list.h"

/**
 * @mainpage
 * # Загальне завдання
 * Розширити базовий клас та клас-масив, додавши перевантаження операторів
 *
 * @author Kaydash Y.A.
 * @date 18-06-2022
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи програми роботи з класами.
 *
 * @author Kaydash Y.A.
 * @date 18-06-2022
 * @version 1.0
 */

int main() {
  setlocale(LC_ALL, "rus");
  List list;
  Bowed b1("д/печенье 150 0 сладкий 17 ");
  Bowed b2 = b1;

  list.add(b1, 0);
  list.add(b2, 1);
  for (size_t i = 0; i < list.getSize(); i++) {
    cout << list[i];
  }
  cout << endl;
  list.readFromFile("../assets/text-out.txt");
  list.writeToFile("../assets/text-in.txt");
  
  cout << list;
}
