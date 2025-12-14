#include<stdio.h>
int addition(int a,int b);
int main()
{
	int x,y,result;
	printf("\n enter x and y values");
	scanf("%d%d",&x,&y);
	result=addition(x,y);
	printf("%d",result);
	return 0;
}
int addition(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
