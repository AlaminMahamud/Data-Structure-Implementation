#include<stdio.h>

struct node
{
	int roll;
	struct node *next;
};

node *root = NULL;



void print()
{
	node *current = root;
	while(current->next != NULL)
	{
		printf("%d\n",current->roll);
		current = current->next;
	}
}

void append(int roll)
{
	if(root == NULL)
	{
		root = new node();
		root->next = NULL;
	}
	else
	{
		node * current = root;
		while(current->next!=NULL)
		{
			current = current->next;
		}

        printf("%d\n",current->roll);
		node *newnode = new node();
		newnode->roll = roll;
		newnode->next = NULL;
		current->next = newnode;
	}
}

int main()
{
	append(10);
//	append(20);
//	append(30);
//	append(40);
//	print();
	return 0;
}
