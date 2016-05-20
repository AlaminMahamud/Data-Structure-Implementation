
// In Binary Search Tree there are two sides
// in left small values vice versa


struct node
{
	int roll;
	node *next, *right;

	node() // Initialize the Node Using Null
	{
		left = NULL;
		right = NULL;
	}
};
node *root;
