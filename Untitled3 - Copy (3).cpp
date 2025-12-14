#include<stdio.h>
#include"file2.c"
extern void sample();
int a=1000;
int main()
{
	sample();
	return 0;
} 
file2
#include<stdio.h>
void sample()
{
	extern int a;
	printf("\n A value is %d",a);
	return 0;
}


