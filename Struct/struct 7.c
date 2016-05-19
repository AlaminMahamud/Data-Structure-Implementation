/// using pointer for struct

#include <stdio.h>

struct xmpl
{
	int x;
};

int main()
{
	struct xmpl structure;
	struct xmpl *ptr;

	structure.x = 12;
	ptr = &structure; /// we need & when dealing with structures and using pointers to them

	printf("%d\n", ptr->x); /// the -> acts somewhat like *
						    /// when it is used with pointers 
						    /// it says, get whatever is at that memory 
						    /// address Not get what what that memory is

	getchar(); 
}