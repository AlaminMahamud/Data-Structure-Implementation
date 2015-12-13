// Simple Stack
#define STACKSIZE 100
struct stack
{
	int top; // to get the top elements or inserting on top position we need this var
	int items[STACKSIZE];
};

/// Calling Program Stack Declaration

struct stack s;