/**
 * @mainpage
 * # Загальне завдання
 * Визначити найбільший спільний дільник для двох заданих чисел.
 *
 *
 * @author Kaydash
 * @date 13-dec-2021
 */

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінних x, r ,y.
 * - надання змінним (x , y) певних значень
 * - Використовуючи цикл  while знаходимо НСД для змінних х ,у .
* - Присвоюємо знацення НСД змінній r .
 */
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{ int x, y, r;
//	y = 10245;
//	x = 10893;
//
//	 while (x != y) {
//    if (x > y) {
//      x = x - y;
//    }
//    else {
//      y = y - x;
//    }
//  }
//	r = x ;
//	return 0;
//}


// використовуючи  do while 

#include <stdio.h>
#include <stdlib.h>
int main()
{ int x, y, r;
	y = 10245;
	x = 10893;

	 do {
    if (x > y) {
      x = x - y;
    }
    else {
      y = y - x;
    }
  } while (x != y) ;
	r = x ;

	return 0;
}
