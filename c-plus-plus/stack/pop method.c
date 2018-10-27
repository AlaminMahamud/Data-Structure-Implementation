// Implementing the POP Operation
int pop(struct stack *ps)
{
	if(stack is empty or not)
	{
		stack underflow 
		exit
	}
	
	return (ps->items[ps->top--]);
}/* end pop */


/// while checking pop condition we should also check the condition of stack underflow
voi popandtest(struct stack *ps,
			   int *i,
			   bool *underflow)
{
	if(empty(ps))
	{
		*underflow = true;
		return;
	} /*end if */
	
	*underflow = false;
	*i = ps->items[ps-top--];
	return;
} /* end pop and test */


// the program which will call pop and test
popandtest(&s, &x, &underflow);
if(underflow)
	// take corrective action
else
	// use value of x
