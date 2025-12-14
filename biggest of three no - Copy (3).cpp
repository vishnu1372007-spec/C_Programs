#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is big");
	}
	else if(b>c)
	{
		printf("/nb is big");
	}
	else
	{
		printf("/nc is big");
	}
}
