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
	free(ptr);
	return 0;
}
