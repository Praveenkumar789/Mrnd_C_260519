#include "Mainheader.h";


int test_elements(struct node *h1, struct node *h2)
{
	struct node *temp, *t;
	t = h2;

	for (temp = h1; temp != NULL && t != NULL; temp = temp->next)
	{
		if (temp->data == t->data)
		{
			printf("\n\ngood :%d ", t->data);
		}
		else
		{
			printf("\n\nlook failed:%d,temp:%d", t->data, temp->data);
			return 0;
		}
		t = t->next;
	}
	return 1;
}



void test_reverse_everyknodes()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int k = 2;
	int exp[] = { 2, 1, 4, 3, 5 };
	struct node *head = create_ll(arr, 5);
	struct node *Expected = create_ll(exp, 5);
	struct node *Actual = reverse_everyknodes(head, k);
	int stat = test_elements(Expected, Actual);
	if (stat == 1)
		printf("\nyes right");
	else
		printf("\n\nwrong");

	
	int arr1[] = { 1, 2, 3, 4, 5 };
	k = 5;
	int exp1[] = { 5,4,3,2,1};
	head = create_ll(arr1, 5);
	Expected = create_ll(exp1, 5);
	Actual = reverse_everyknodes(head, k);

	stat = test_elements(Expected, Actual);
	if (stat == 1)
		printf("\nyes right");
	else
		printf("\n\nwrong");

	int arr2[] = { 1, 2, 3, 4, 5 };
	k = 3;
	int exp2[] = {3,2,1,5,4};
	head = create_ll(arr2, 5);
	Expected = create_ll(exp2, 5);
	Actual = reverse_everyknodes(head, k);

	stat = test_elements(Expected, Actual);
	if (stat == 1)
		printf("\nyes right");
	else
		printf("\n\nwrong");
    

	int arr3[] = { 1, 2, 3, 4, 5,6, 7,8,9,10};
	k = 4;
	int exp3[] = { 4, 3, 2 , 1 , 8 , 7, 6, 5,10, 9};
	head = create_ll(arr3, 10);
	Expected = create_ll(exp3, 10);
	Actual = reverse_everyknodes(head, k);

	stat = test_elements(Expected, Actual);
	if (stat == 1)
		printf("\nyes right");
	else
		printf("\n\nwrong");
}