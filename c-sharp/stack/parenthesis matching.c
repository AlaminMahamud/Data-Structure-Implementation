// Parenthesis Matching

// read the file in the editor line by line
// call the funciton parenthesis_matching in every single line 

void parenthesis_matching(string s)
{
	bool valid = true; // first we assume the string is valid
	
	// create an empty struct
	s = the empty stack
	
	while(we have not read the entire string)
	{
		read the next symbol(symb) of the string
		if(symb == '(' || s == '{' || s=='[')
			push(s,symb);
		if(symb == ')' || s == '}' || s==']')
			if(empty(s))
			{
				valid = false;
			}
			else
			{
				i = pop(s);
				if(i is not the matching opener of symbol)
				{
					valid = false;
				}
			}/* end else */
	}/* end While */

	// now the stack should be empty
	// if not the string is not valid
	
	if(!empty(s))
		valid = false;
		
	if(valid)
		string valid
	else 
		not
	
}