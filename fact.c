#include<stdio.h>
int fact(int a)
{
	if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * factorial(a - 1));
    }
}
//sub