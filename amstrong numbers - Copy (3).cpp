#include<stdio.h>
#include<math.h>
int main()
{
	int n,r=0,s=0,count=0,temp;
	printf("\n enter n value");
	scanf("%d",&n);
	count=(int)log10(n)+1;
	temp=n;
	while(n>0)
	{
		r=n%10;
		s=s+pow(r,count);
		n=n/10;
	}
	if(temp==s)
	{
		printf("%d is a amstrong number",temp);
	}
	else
	{
		printf("\n%d is not a amstrong number",temp);
	}
	return 0;
}
