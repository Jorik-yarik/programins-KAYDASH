/**
 * @mainpage
 * # Загальне завдання
 *  За заданим опором трьох резисторів r1 , r2, r3 , які зʼєднано паралельно , визначити загальній опір 
 *
 *
 * @author Kaydash
 * @date 2-dec-2021
 */

// #include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінних r1, r2, r3 ,r0.
 * - надання змінним (r1, r2, r3 ) певних значень
 * - використовуючи формулу для знаходження опору паралельно зʼєднаних єлементів єлектричного кола , знаходжу значення  r0
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a1, s, a2, a3;
	a1 = 10;
	a2 = 20;
	a3 = 30;
	s = 1 / ((1 / a1) + (1 / a2) + (1 / a3));
	return 0;
}
