#include<stdio.h>
void biggest();
int main()
{
	biggest();
	return 0;
}
void biggest()
{
	int a,b,c;
	printf("\n enter a,b&c values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&& a>c)
	printf("\n A is big");
	else if(b>c)
	printf("\n B is big");
	else
	printf("\n c is big");
}
