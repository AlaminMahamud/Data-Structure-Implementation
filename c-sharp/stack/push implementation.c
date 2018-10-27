// Implementing the PUSH Operation
void push(struct *ps, int x)
{
	ps->items[++(ps->top)]=x;
	return;
} /*  end push */

/* -------------------------------- */

/* correcting the Push Operation */

// there is a problem stack overflow
#define STACKSIZE 100;
void push (struct *ps, int x)
{
	if(ps->top==STACKSIZE-1)
	{
		printf("%",Stack Overflow);
		exit(1);
	}
	else
	{
		ps->items[++(ps->top)] = x;
		return;
	}
	
}/* push end */


/// In the Calling Program
pushandtest(&s, x, &overflow);
if(overflow)
	/*overflow has been detected */
	/*x was not pushed on stack*/
	/*take remedial action*/
else
{
	/* x was successfully posted on the stack */
}
/* continue processing */


