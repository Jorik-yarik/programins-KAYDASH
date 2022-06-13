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

int main() {
	char *pStr;
	char str[1000];
  FILE *file;
  file = fopen("home/jorik/sample_project/lab12/assets/input.txt", "r");
 // FILE *file2;
  //file2 = fopen("home/jorik/sample_project/lab12/assets/output.txt", "w");
	short isNumber = 0;
	//printf("Please, enter data:\t");
	//gets(str);
  
	
  if ( NULL != fgets ( pStr, 1000, file );
  pStr = str;
  fclose(file);
	//printf("\n Result:\t");
	/*  */
  fr(isNumber,*pStr);
  //fclose(file2);
	return 0;
}




/*while (*pStr) {
		if (*pStr >= '0' && *pStr <= '9') {
			isNumber = 1;
			printf("%c", *pStr);
		} else {
			if (isNumber) {
				isNumber = 0;
				printf(" ");
			}
		}
		pStr++;
	}*/

  ///////////
  /*
  
  int main() {
  char *pStr;
  char str[800];
  short isNumber = 0;
  printf("Please, enter data:\t");
  gets(str);
  pStr = str;
  printf("\n Result:\t");
  while (*pStr) {
    if (*pStr >= '0' && *pStr <= '9') {
      isNumber = 1;
      printf("%c", *pStr);
    } else {
      if (isNumber) {
        isNumber = 0;
        printf(" ");
      }
    }
    pStr++;
  }
  return 0;
}
  
  
  */