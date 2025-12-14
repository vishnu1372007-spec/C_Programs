#include<stdio.h>
void display(int a[])
{
	int i;
	for (i=0;i<6;i++)
	{
		printf("\t%d",a[i]);
	}
}
int main()
{
	int a[6]={10,20,30,40,50,60};
	display(a);
	return 0;
}
