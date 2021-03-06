/**
 * @mainpage
 * # Загальне завдання
 *  Визначити, чи є ціле 6-значне число “щасливим” квитком (“щасливий квиток” – квиток,
 *	в якому сума першої половини чисел номера дорівнює сумі другої половини.
 *
 *
 * @author Kaydash
 * @date 7-dec-2021
 */

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінних s1,s2.
 * - надання змінній (nomer ) певних значень
 * - знаходимо значення змінних s1,s2 , використовуючи розкладання номера на цифри та їх сумування( сумма першої та другої половини)
* - порівняння значень змінних s1 та s2 
* - вивід на екран результату програми 
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int nomer, s1, s2;
	nomer = 115223;
	s1 = (nomer / 100000) + (nomer % 100000 / 10000)+ (nomer / 1000 % 10);
	s2 = (nomer % 10) + (nomer % 100 / 10) + (nomer % 1000 / 100);
	if (s1 == s2) printf("YES");
		else printf("NO");
	return 0;
}
