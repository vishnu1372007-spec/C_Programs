#include<stdio.h>
void sample()
{
	static int x=10;
	x++;
	printf("\n x value is %d",x);
}
int main()
{
	sample();
	sample();
	return 0;
}
