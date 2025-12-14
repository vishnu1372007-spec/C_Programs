#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a=10,b=20;
	printf("\n before swapping a=%d and b=%d",a,b);
	swap(a,b);
	printf("\n after swapping a=%d and b=%d",a,b);
	return 0;
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
    y=temp;
}
