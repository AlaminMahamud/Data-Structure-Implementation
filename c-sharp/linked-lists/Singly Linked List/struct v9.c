void add(int num1, int num2)
{
	// find the num1 node
	// append the num2 node


	struct node *current=root;
	struct node *next_node=new node();
	
	if(current->roll!=roll)
	{
		currnet = current->next;
	}

	struct node *current_next = current->next;

	next_node->roll = num2;
	next_node->next = current_next;

	current->next = next_node;

}