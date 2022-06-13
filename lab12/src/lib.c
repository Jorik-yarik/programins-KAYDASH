/*
 * @file lib.c
 * @brief Файл з реалізацією функцій
 * @author Kaidash Y.A.
 * @date 9-06-2022
 * @version 1.0
 */

#include "lib.h"



void fr(short isNumber,char *pStr)
{
	
	while (*pStr) {
		if (*pStr >= '0' && *pStr <= '9') {
			isNumber = 1;
			printf("%c", *pStr);
      //fprintf(file2,"%c",*pStr);
		} else {
			if (isNumber) {
				isNumber = 0;
				printf(" ");
        //fprintf(file2,"%c"," ");
			}
		}
		pStr++;
	}
	
}
