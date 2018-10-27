// At the Time of inserting value
// compare it with the node's value to decide whether to go left or r8

void insert(int roll)
{
	if(root==NULL) // first node in tree
	{
		root == new node();
		root->roll = roll;
	}
	else
	{
		node *current = root, *parent;

		while(current!=null)
		{
			parent=current;
			if(roll<current->roll)
			{
				current=current->left;
			}
			else
			{
				current=current->right;
			}
		}

		node *newnode = new node();
		newnode->roll = roll;
		if(newnode->roll<parent->roll)
		{
			parent->left = newnode;
		}
		else
		{
			parent->right = newnode;
		}
	}

}


