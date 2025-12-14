#include<stdio.h>
int main()
{
	int a[100],n,i,*ptr;
	ptr=a;
	printf("\n enter n size");
	scanf("%d",&n);
	printf("\n enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	} 
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));
	}
	return 0; 
}
