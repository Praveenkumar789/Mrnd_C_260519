#include "Mainheader.h"

int compare_elements(int *arr1, int*arr2, int len)
{
	int cnt = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr1[i] == arr2[i])
		{
			cnt++;
		}
	}
	if (cnt == len)
		return 1;
	return 0;
}


void test_two_color_sort()
{
	printf("\n\nMethod1");
	int arr[] = { 0, 0, 0, 0, 1, 1, 0, 0, 0 };
	int exp[] = { 0, 0, 0, 0, 0, 0, 0, 1, 1 };
	two_colorsort_m1(arr, 9);
	
	int stat = compare_elements(exp, arr, 9);
	if (stat == 1)
		printf("\nMethod 1 is doing well");
	else
		printf("\nMethod 1 got failed");

	
	printf("\n\nMethod2");

	int arr1[] = { 0, 0, 0, 0, 1, 1, 0, 0, 0 };
	int exp1[] = { 0, 0, 0, 0, 0, 0, 0, 1, 1 };
	
	two_colorsort_m2(arr1, 9);
	stat = compare_elements(exp1, arr1, 9);

	if (stat == 1)
		printf("\nMethod 2 is doing well");
	else
		printf("\nMethod 2 got failed");


	printf("\n\nMethod1");

	int arr2[] = { 0, 0, 0, 0, 1, 1, 0, 0, 0 };
	int exp2[] = { 0, 0, 0, 0, 0, 0, 0, 1, 1 };

	two_colorsort_m2(arr2, 9);
	stat = compare_elements(exp2, arr2, 9);

	if (stat == 1)
		printf("\nMethod 3 is doing well");
	else
		printf("\nMethod 3 got failed");
}

