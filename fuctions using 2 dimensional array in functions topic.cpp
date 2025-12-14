#include<stdio.h>
void display(int r, int c, int a[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int r=3;c=3;
	display(r,c,a);
	return 0;
}
