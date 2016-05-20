void append(int roll)
{
	if(root == null) 
	{
		root = new node();
		root => roll = roll;
		root => next = null;
	}
	else
	{
		node *current = root; // copying root node
		while(current=>next!=null)
		{
			current=current=>next;
		}

		last = new node();
		last->roll = roll;
		last->next = null;

		current->next = last;
	}
}