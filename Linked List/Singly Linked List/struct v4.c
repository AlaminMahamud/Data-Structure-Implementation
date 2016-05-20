#include<stdio.h>

struct node
{
	int roll;
	struct node *next;
};

node *root = null;



void print()
{
	node *current = root;
	while(current->next != null)
	{
		printf("%d\n",current->roll);
		current = current->next;
	}
}

void append(int roll)
{
	if(root == null)
	{
		root = new node();
		root->next = null;
	}
	else
	{
		node * current = root;
		while(current->next!=null)
		{
			current = current->next;
		}

		node *newnode = new node();
		newnode->roll = roll;
		newnode->next = null;

		current_node->next = newnode;
	}
}

int main()
{
	append(1);
	append(2);
	append(3);
	append(4);
	print();
	return 0;
}
