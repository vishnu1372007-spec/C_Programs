#include<stdio.h>
int biggest();
int main()
{
	int big;
    big =biggest();
	printf("biggest value is %d",big);
	return 0;
}
int biggest()
{
	int a,b,c;
	printf("\n enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	return a;
	else if(b>c)
	return b;
	else
	return c;
}
