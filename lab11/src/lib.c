/*
 * @file lib.c
 * @brief Файл з реалізацією функцій
 * @author Kaidash Y.A.
 * @date 9-06-2022
 * @version 1.0
 */

#include "lib.h"


void mn (int n , int n2 , int m , int m2)
{
	if(n>n2) ns=n;
    else ns=n2;
  if(m>m2) ms=m;
    else ms=m2;
}
void fr(int a , int a2)
{
	free(a);
	free(a2);
}