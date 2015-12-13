// More Complicated Stack Defintion

#define  STACKSIZE 100
#define INT 1
#define FLOAT 2
#define STRING 3

struct stackElement
{
	int eltype; /* it may be an integer,float, string */
	union
	{
		int ival;
		float fval;
		char *cval;
	}element;
	
};

struct stack
{
	int top;
	struct stackElement items[STACKSIZE];
}s;


// Now Declaring a Stack

struct stackElement se;
se = s.items[s.top];
switch(se.eltype)
{
	case INTEGER : printf("%d\n", se.ival);
	case FLOAT : printf("%f\n", se.fval);
	case STRING : printf("%s\n", se.cval);
}