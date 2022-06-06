/**
 * @mainpage
 * # Загальне завдання
 * Завдання: Переробити програми, що були розроблені під час виконання лабораторних робіт з тем “Масиви” та “Цикли” таким чином,
 *		 щоб використовувалися функції для обчислення результату.
 *
 *
 *
 * @author Kaydash
 * @date 23-dec-2021
 */

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінних m , i,j,k,a[m][m],c[m][m]
 * - надання змінній (m) певних значень
 * - Використовуючи  функцію (int matr)  знаходимо квадрат заданої матриці .
 *- використовуючи дві функції (void Mod ,int get_det )знаходимо визначник матриці 
 *-  використовуючи функцію (int nod)знаходимо НСД двох чисел 
 *- у основній частині програми використовуючи функції знаходимо відповіді  необхідних завданнь
 */

#include <stdio.h>
#include <stdlib.h>
#define size 3

int matr(int i , int j , int k , int n ) {
     const int m = 4;
      k = 0 , n = 2;
	 int a[m * m], c[m * m];
   
  	
   	for (i = 0; i < m; i++) {
     	  for (j = 0; j < m; j++) {
        	   a[i * m + j] = random() % 10 ;
			c[i * m + j] = 0;
     	   }
   	 }
 
	 

		for(i = 0; i < m; i++)
 		 {  for(j = 0; j < m; j++)
    			{
      			  for(k = 0; k < m; k++)
       		 c[i * m + j] = c[i * m + j] + (a[i * k+ k ] * a[k * m + j]);
   			 }
		}
 
 
    return m;
}

void Mod(int matrix[])
{
	int new_mat[size][size];
	for (int t = 0; t < size; t++) {
		for (int m = 0; m < size; m++) {
			new_mat[t][m] = 0;
			for (int p = 0; p < size; p++) {
				new_mat[t][m] += matrix[t * 3 + p] * matrix[p * 3 + m];
			}
		}
	}
}
int get_det(int matrix[])
{
	int new_mat[size][size];
	int i, j, det = 0;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			new_mat[i][j] = matrix[i * size + j];
		}
	}
	for (i = 0; i < 3; i++) {
		det = det + (new_mat[0][i] *
					     (new_mat[1][(i + 1) % 3] * new_mat[2][(i + 2) % 3] - new_mat[1][(i + 2) % 3] * new_mat[2][(i + 1) % 3]));
	}
	return det;
}

int nod(int x , int y)
{ 	y = random() % 10000;
	x = random() % 10000;

	 do {
    if (x > y) {
      x = x - y;
    }
    else {
      y = y - x;
    }
  } while (x != y) ;
	

	return x;
}

int main ()
{ int Nod=0 ;
	int y = random() % 10000 , x = random() % 10000;
	 x = nod(x, y) ; 
	Nod = nod(x , y) ;

	const int m = 4;
	int i = 0 , j=0 , n = 2 , k = 0;

	int  t1= 0, t2 = 0;
	int a[m*m];
	int c[m*m];
 		matr(i,j,n,k);

	int matrix[size][size];
	int row_matrix[size * size];
	for (t1 = 0; t1 < 3; ++t1) {
		for (t2 = 0; t2 < 3; ++t2) {
			matrix[t1][t2] = rand() % 50;
		}
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			row_matrix[k] = matrix[i][j];
			k++;
		}
	}
	int det = get_det(row_matrix);
	Mod(row_matrix);
	
	for (i = 0; i < m; i++) {
     	  for (j = 0; j < m; j++) {
        	   a[i * m + j] = random() % 10 ;
			c[i * m + j] = 0;
     	   }
   	 }
	for(i = 0; i < m; i++)
 		 {  for(j = 0; j < m; j++)
    			{
      			  for(k = 0; k < m; k++)
       		 c[i * m + j] = c[i * m + j] + (a[i * k+ k ] * a[k * m + j]);
   			 }
		}


return 0;
}
