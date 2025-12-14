#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, *ptr;
	printf("\n enter n size");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	/*{
		scanf("%d",(ptr+i));
	}*/
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));
	}
	ptr=realloc(ptr,6*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<6;i++)
	{
		printf("%d",*(ptr+i));
	}
	free
	
	
}
