/*
 * @mainpage
 * # Загальне завдання
 * Розробити програму, щоб визначити суму двох матриць.( ** ) 
 *Робота повинна бути присвячена взаємодії з користувачем шляхом використання
 *функцій write(), read()
 *
 * @author Kaidash Y.A.
 * @date 7-06-2022
 * @version 1.0
 */
/*
 * @file main.c
 * @brief Файл з демонстрацією роботи програми, що визначає сумму двох матриць.
 *
 * @author Kaidash Y.A.
 * @date 7-06-2022
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


#include "lib.h"


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
  double *a;// указатель на массив
  double *a2;
  int i, j, n, m,n2,m2;
  int ms,ns;
  system("chcp 1251");
  system("cls");
  prinf("Lab_11 \n ");
  printf("@author Kaidash Y.A. \n ");
  printf(" Програма для визначення суми двох матриць\n");
  printf("Введите количество строк: ");
  scanf("%d", &n);
  printf("Введите количество столбцов: ");
  scanf("%d", &m);
  // Выделение памяти
  a = (double*)malloc(n*m * sizeof(double));
  // Ввод элементов массива
  for (i = 0; i<n; i++)  // цикл по строкам
  {
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%lf", (a + i*m + j));
    }
  }
  printf("Введите количество строк второго массива:");
  scanf("%d", &n2);
  printf("Введите количество столбцов второго массива:");
  scanf("%d", &m2);

  
  //Второй массив (инициализация и запись данных)
  a2 = (double*)malloc(n2*m2 * sizeof(double));
  for (i = 0; i<n2; i++)  // цикл по строкам
  {
    for (j = 0; j<m2; j++)  // цикл по столбцам
    {
      printf("a2[%d][%d] = ", i, j);
      scanf("%lf", (a2 + i*m2 + j));
    }
  }
  
  // Вывод элементов массива
  for (i = 0; i<n; i++)  // цикл по строкам
  {
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("%lf ", *(a + i*m + j)); 
    }
    printf("\n");
  }
  //Вывод второго массива
  printf("\n");
  for (i = 0; i<n2; i++)  // цикл по строкам
  {
    for (j = 0; j<m2; j++)  // цикл по столбцам
    {
      printf("%lf ", *(a2 + i*m2 + j)); 
    }
    printf("\n");
  }
  printf("\n");
  // Создание массива суммы

  mn(n , n2 , m , m2);
  //if(n>n2) ns=n;
  //  else ns=n2;
  //if(m>m2) ms=m;
  //  else ms=m2;
  
  
  for (i = 0; i<ns; i++)  // цикл по строкам
  {
    for (j = 0; j<ms; j++)  // цикл по столбцам
    {
      printf("%lf ", /* *(s + i*ms + j) */ *(a2 + i*m2 + j) + *(a + i*m +j)); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  
  //free(a);
  //free(a2);
  fr(a,a2);
  getchar();   getchar();
  return 0;
}