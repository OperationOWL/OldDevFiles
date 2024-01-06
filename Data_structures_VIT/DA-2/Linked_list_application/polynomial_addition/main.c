#include <bits/stdc++.h>
using namespace std;
struct node
{
	int coeff;
	int pow;
	struct node * next;
};
void create_node(int x, int y, struct node **temp)
{
	struct node *r, *z;
	z = *temp;
	if (z == NULL)
	{
		r = (struct node *) malloc(sizeof(struct node));
		r->coeff = x;
		r->pow = y;
		*temp = r;
		r->next = (struct node *) malloc(sizeof(struct node));
		r = r->next;
		r->next = NULL;
	}
	else
	{
		r->coeff = x;
		r->pow = y;
		r->next = (struct node *) malloc(sizeof(struct node));
		r = r->next;
		r->next = NULL;
	}
}
void polyadd(struct node *p1, struct node *p2, struct node *result)
{
	while (p1->next && p2->next)
	{
		if (p1->pow > p2->pow)
		{
			result->pow = p1->pow;
			result->coeff = p1->coeff;
			p1 = p1->next;
		}
		else if (p1->pow < p2->pow)
		{
			result->pow = p2->pow;
			result->coeff = p2->coeff;
			p2 = p2->next;
		}
		else
		{
			result->pow = p1->pow;
			result->coeff = p1->coeff + p2->coeff;
			p1 = p1->next;
			p2 = p2->next;
		}
		result->next = (struct node *) malloc(sizeof(struct node));
		result = result->next;
		result->next = NULL;
	}
	while (p1->next || p2->next)
	{
		if (p1->next)
		{
			result->pow = p1->pow;
			result->coeff = p1->coeff;
			p1 = p1->next;
		}
		if (p2->next)
		{
			result->pow = p2->pow;
			result->coeff = p2->coeff;
			p2 = p2->next;
		}
		result->next = (struct node *) malloc(sizeof(struct node));
		result = result->next;
		result->next = NULL;
	}
}
void printpoly(struct node *node)
{
	while (node->next != NULL)
	{
		printf("%dx^%d", node->coeff, node->pow);
		node = node->next;
		if (node->next != NULL)
			printf(" + ");
	}
}
int main()
{
	struct node *p1 = NULL, *p2 = NULL, *result = NULL;
	create_node(41, 7, &p1);
	create_node(12, 5, &p1);
	create_node(65, 0, &p1);
	create_node(21, 5, &p2);
	create_node(15, 2, &p2);
	printf("pol 1: ");
	printpoly(p1);
	printf("\npol 2: ");
	printpoly(p2);
	result = (struct node *) malloc(sizeof(struct node));
	polyadd(p1, p2, result);
	printf("\npol added : ");
	printpoly(result);
	return 0;
}