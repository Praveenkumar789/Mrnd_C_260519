#include "Mainheader.h"


struct node* reverse_ll(struct node *head, int K)
{
	if (head == NULL)
		return NULL;
	if (head->next == NULL)
		return head;
	struct node *ophead = (struct node*)malloc(sizeof(struct node));
	ophead->data = head->data;
	ophead->next = NULL;
	struct node *Curr, *Prev, *Next;
	int cnt = 1;
	for (Curr = head ->next; Curr != NULL && cnt < K; Curr = Curr->next)
	{	
		struct node *New = (struct node*)malloc(sizeof(struct node));
		New->data = Curr->data;
		New->next = NULL;
		for (Prev = ophead; Prev->next != NULL; Prev = Prev->next);
		Prev->next = New;
		cnt++;
	}
	
	Prev = ophead;
	Curr = ophead ->next;
	Next = ophead->next->next;
	cnt = 1;
	
	while (Curr != NULL)
	{
		Curr->next = Prev;
		Prev = Curr;
		Curr = Next;
		if ( Next != NULL )
			Next = Next->next;
	}
		ophead->next = NULL;
		return Prev;
}



struct node* reverse_everyknodes(struct node *head, int k)
{
	if (head == NULL)
		return NULL;
	if (k == 0)
		return head;
	int cnt = 0;
	struct node *temp, *op, *temp2;
	for (temp = head; temp != NULL; temp = temp->next)
	{
		cnt++;
	}
	if (k > cnt)
		return NULL;
	if (k == cnt)
		return reverse_ll(head, k);

	cnt = 0;
	op = reverse_ll(head, k);
	for (temp = head->next; temp != NULL; temp = temp->next)
		{
			cnt++;
			if (cnt % k == 0)
			{
				for (temp2 = op; temp2->next != NULL; temp2 = temp2->next);
				temp2->next = reverse_ll(temp, k);
			}
		}
	return op;
}