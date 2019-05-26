#include "Mainheader.h"

struct node* create_ll(int *arr, int len)
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	struct node *temp;
	head->data = arr[0];
	head->next = NULL;
	for (int i = 1; i < len; i++)
	{
		for (temp = head; temp->next != NULL; temp = temp->next);
		struct node *New = (struct node*)malloc(sizeof(struct node));
		New->data = arr[i];
		New->next = NULL;
		temp->next = New;
	}
	return head;
}

struct rnode* Find_node(struct rnode *head, int Data)
{
	struct rnode* temp;
	for (temp = head; temp != NULL; temp = temp->next)
	{
		if (temp->data == Data)
		{
			return temp;
		}
	}
	return NULL;
}



struct rnode* create_random_ll(int *arr, int *random, int len)
{
	struct rnode *head = (struct rnode*)malloc(sizeof(struct rnode));
	struct rnode *temp;
	head->data = arr[0];
	head->next = NULL;
	int i;
	for (i = 1; i < len; i++)
	{
		for (temp = head; temp->next != NULL; temp = temp->next);
		struct rnode *New = (struct rnode*)malloc(sizeof(struct rnode));
		New->data = arr[i];
		New->next = NULL;
		temp->next = New;
	}
	temp = head;
	for (i = 0; i < len; i++)
	{
		temp->random = Find_node(head, random[i]);
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	return head;
}