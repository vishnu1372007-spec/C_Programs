#include<stdio.h>
main()
{
	int marks;
	printf("\nenter marks");
	scanf("%d",&marks);
	if(marks>=35)
	{
		if(marks>=75)
		{
			printf("\nGrade is Distinction");
		}
		else
		{
			printf("\nGrade is Pass");
		}
	}
	else
	{
		printf("\nGrade is Fail");
	}
}
