/*
 * @file test.c
 * @brief Файл з тестами на реалізації функції детермінанта матриці
 *lab_13 
 * @author  Kaidash Y.A.
 * @date 13-06-2022
 */

#include <check.h>
#include <stdlib.h>
#include "lib.h"

#define ARRAY_SIZE 4

START_TEST(test_writeD)
{
	int f[20][20], int x
	int pr, c[20], d = 0, b[20][20], j, p, q, t;
    if (x == 2)  
    {
        d = 0;
        d = (f[1][1] * f[2][2]) - (f[1][2] * f[2][1]);
        return (d);
    }
    else
    {
        for (j = 1; j <= x; j++)
    { 
        int r = 1, s = 1;
        for (p = 1; p <= x; p++)
        {
            for (q = 1; q <= x; q++)
            {
                if (p != 1 && q != j)
                {          
                    b[r][s]=f[p][q];
                    s++;
                    if (s > x - 1)
                    {
                        r++;
                        s = 1;               
                    }
                }
            }
        }
        for (t = 1, pr = 1; t <= (1 + j); t++)
            pr = (-1) * pr;
        c[j] = pr * determinant(b, x - 1);
    }
        for (j = 1, d = 0; j <= x; j++)
        {
            d = d + (f[1][j] * c[j]);
        }
print ("%d",d);
   
}short isNumber;

	char *pStr;
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
END_TEST

int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab12");
	tcase_add_test(tc_core, test_writeD);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
