#include<stdio.h>
#include<stdlib.h>
#define NULL 0

char* Mergestring(char *str);

struct node{
	int data;
	struct node *next;
};

struct rnode{
	int data;
	struct rnode *next;
	struct rnode *random;
};





struct node* reverse_everyknodes(struct node *head, int k);
int** transpose_of_matrix(int **arr, int rows, int cols);
void two_colorsort_m1(int *arr, int len);
void two_colorsort_m2(int *arr, int len);
void two_colorsort_m3(int *arr, int len);
struct node* create_ll(int *arr, int len);
struct rnode* create_random_ll(int *arr, int *random, int len);
struct rnode* clonell(struct rnode *head);
