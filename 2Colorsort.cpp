#include "Mainheader.h"

void two_colorsort_m1(int *arr, int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	for (int i = 0; i < len - sum; i++)
	{
		arr[i] = 0;
	}
	for (int i = len - sum; i < len; i++)
	{
		arr[i] = 1;
	}
}

void two_colorsort_m2(int *arr, int len)
{
	int left_ref = 0, right_ref = len - 1;
	int lind = 0, rind, temp;
	while (left_ref < right_ref)
	{
		if (arr[left_ref] == 1 && arr[right_ref] == 0)
		{
			temp = arr[left_ref];
			arr[left_ref] = arr[right_ref];
			arr[right_ref] = temp;
			left_ref++;
			right_ref--;
		}
		if (arr[left_ref] == 0){
			left_ref++;
		}
		if (arr[right_ref] == 1)
		{
			right_ref--;
		}
		
	}
}

void two_colorsort_m3(int *arr, int len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}