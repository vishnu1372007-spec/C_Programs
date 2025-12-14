#include<stdio.h>
void addition();
int main()
{
	addition();
	return 0;
}
void addition()
{
	int a,b,c;
	printf("\n enter a and b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
}
