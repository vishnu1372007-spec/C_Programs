#include<stdio.h>
int addition();
int main()
{
	int res;
	res = addition();
	printf("%d",res);
	return 0;
}
int addition()
{
	int a,b,c;
	printf("\n enter a,b values:");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}


	
