void delete_node(int roll)
{
	// create current node
	struct node *curent_node = root;
	
	// create previous node
	struct node *previous_node = NULL;

	// find the last node
	while(current_node->roll != roll)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	// if root node 
	if(current_node==root)
	{
		struct node *temp = root;
		root= root->next;

		// free memory
		delete(temp); 
	} 
	else
		// delete non-root
	{
		previous_node->next = current_node->next;
		delete(current_node);
	}
}