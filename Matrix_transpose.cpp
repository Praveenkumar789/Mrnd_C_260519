#include "Mainheader.h"


int** transpose_of_matrix(int **arr, int rows, int cols)
{

	int ind = 0;
	int **op = (int**)malloc(sizeof(int*)*cols);
	for (ind = 0; ind < cols; ind++)
	{
		op[ind] = (int*)malloc(sizeof(int)*rows);
	}

	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			op[i][j] = arr[j][i];
		}
	}

	return op;
}