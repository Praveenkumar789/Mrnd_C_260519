#include "Mainheader.h"

int test_elements(int **arr1, int **arr2, int rows, int cols)
{
	int cnt = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				cnt++;
			}
			else
			{
				printf("\n look  matrix values %d, %d", arr1[i][j], arr2[i][j]);
				return 0;
			}
		}
	}
	return 1;
}



void test_transpose()
{
	int rows = 3, cols = 3;
	int ARR[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int EXP[3][3] = { { 1, 4, 7}, { 2, 5, 8 }, { 3, 6, 9 } };
	int **arr = (int**)malloc(sizeof(int*)*rows);
	for (int i = 0; i < rows; i++)
	{
		arr[i] = ARR[i];
	}

	int **Exp = (int**)malloc(sizeof(int*)*rows);
	for (int i = 0; i < cols; i++)
	{
		Exp[i] = EXP[i];
	}

	int **ACTUAL = transpose_of_matrix(arr,rows, cols);
	int stat = test_elements(Exp, ACTUAL, cols, rows);
	if (stat == 1)
	{
		printf("test 1 passed");
	}
	else{
		printf("test 1 failed");
	}


	rows = 2, cols = 3;
	int ARR1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 }};
	int EXP1[3][2] = { { 1, 4 }, { 2, 5}, { 3,6} };
	int **arr1 = (int**)malloc(sizeof(int*)*rows);
	for (int i = 0; i < rows; i++)
	{
		arr1[i] = ARR1[i];
	}

	int **Exp1 = (int**)malloc(sizeof(int*)*rows);
	for (int i = 0; i < cols; i++)
	{
		Exp1[i] = EXP1[i];
	}

	int **ACTUAL1 = transpose_of_matrix(arr1, rows, cols);
	stat = test_elements(Exp1, ACTUAL1, cols, rows);
	if (stat == 1)
	{
		printf("test 2 passed");
	}
	else{
		printf("test 2 failed");
	}



}

