#include<stdio.h>
int sumdigits (int n)
{
	if(n!=0)
	{
		return (n%10+sumdigits (n/10));
	}
	else
	return 0;
}
int main()
{
	int n, result;
	printf("\n enter n value:");
	scanf("%d",&n);
	result=sumdigits(n);
	printf("\n %d",result);
	return 0;
}

