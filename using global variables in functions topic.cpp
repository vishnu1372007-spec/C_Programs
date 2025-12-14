#include<stdio.h>
void sample1();
 void sample2();
 int x=100;
int main()
{
	printf("\n x value is =%d",x);
	sample1();
	sample2();
	return 0;
}
void sample1()
{
	int x=1000;
	printf("\n x value is =%d",x);
}
void sample2()
{
	printf("\n x value is =%d",x);
}
