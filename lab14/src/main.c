/*
 * @mainpage
 * # Загальне завдання
 * • з розділу “Індивідуальні завдання комплексної роботи” взяти прикладну галузь стосовно
*номеру варіанту за попередньо-визначеною формулою
* • створити структуру, що відображає “базовий клас”

 *
 * @author Kaidash Y.A.
 * @date 15-06-2022
 * @version 1.0
 */

/*
 * Головна функція.
 *
 * Послідовність дій:
 * - 
 * -
 * @return успішний код повернення з програми (0)
 */


#include <stdio.h>

 #include "entity.h"

using std::cout;
using std::string;

int main() {
  setlocale(LC_ALL, "rus");
  List list;
  Dessert b1;
  Dessert b2(true, "желе диабетическое", 150, "кисло-сладкий", "12");
  Dessert b3(false, "сахарное печенье", 190, "сливочный", "25");
  list.add(b1, 0);
  list.add(b2, 0);
  list.add(b3, 0);
  list.show();
  Dessert result = list.findOldest("сахарное печенье");
  result.show();
}