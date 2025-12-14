#include<stdio.h>

int main()
{
	extern int a;
	printf("\n a value is %d", a);
	return 0;
}
int a=10;

