/// to check whether we are doing r8 or wrong
/// let's write a recursive function

void print_preoder(node *current)
{
	if(current==NULL) return;
	cout << current->roll << endl;
	print_preoder(current->left);
	print_preoder(current->right);
}