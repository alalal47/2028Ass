/**
 ******************************************************************************
 * @project        : CG/[T]EE2028 Assignment 1 Program Template
 * @file           : main.c
 * @author         : Hou Linxin, ECE, NUS
 * @brief          : Main program body
 ******************************************************************************
 *
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "stdio.h"

#define F 3
#define S 2

extern void asm_func(int* arg1, int* arg2, int* arg3, int* arg4);
extern void initialise_monitor_handles(void);

int main(void)
{
	initialise_monitor_handles();
	int i,j;

	// Test case 1 (11, 10, 10, 8. 5, 4)
//	int building[F][S] = {{8,8},{8,8},{8,8}};
//	int entry[5] = {1,2,3,4,5};
//	int exit[F][S] = {{1,2},{2,3},{3,4}};

	// Test case 2 (5, 2, 3, 4, 5, 6)
//	int building[F][S] = {{1,2},{3,4},{5,6}};
//	int entry[5] = {1,1,1,1,1};
//	int exit[F][S] = {{1,0},{0,0},{0,0}};

	// Test case 3 (11, 10, 9, 8, 0, 1)
//	int building[F][S] = {{12,12},{10,5},{3,7}};
//	int entry[5] = {1,1,1,1,5};
//	int exit[F][S] = {{1,2},{3,4},{3,6}};

	// Test case 4 (10, 10, 9, 9, 8, 8)
//	int building[F][S] = {{12,12},{12,12},{12,12}};
//	int entry[5] = {0,0,0,0,0};
//	int exit[F][S] = {{2,2},{3,3},{4,4}};

	// Test case 5 (11, 11, 11, 11, 11, 11)
//	int building[F][S] = {{9,10},{7,8},{4,4}};
//	int entry[5] = {2,4,6,8,10};
//	int exit[F][S] = {{1,1},{1,1},{1,1}};

	// Self test case for overflow (11, 12, 11, 12, 10, 10)
	int building[F][S] = {{12,12},{12,12},{12,12}};
	int entry[5] = {2,4,6,8,10};
	int exit[F][S] = {{1,0},{1,0},{2,2}};

	int result[F][S] = {{F,S},{0,0},{0,0}};


	asm_func((int*)building, (int*)entry, (int*)exit, (int*)result);

	// print result[][]
	printf("RESULT\n");
	for (i=0; i<F; i++)
	{
		for (j=0; j<S; j++)
		{
			building[i][j] = result[i][j];
			printf("%d\t", building[i][j]);
		}
	printf("\n");
	}

}
