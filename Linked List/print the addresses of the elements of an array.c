#include <stdio.h>
int main()
{
    int a[5],i;

    for (i = 0; i<5; i++)
    {
        printf("%u\n",&(a[i]));
    }
}

/*

outputs


6356728
6356732
6356736
6356740
6356744



*/
