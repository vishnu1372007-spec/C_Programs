#include<stdio.h>
main()
{
	int age;
	float weight;
	char name;
	char gender[200];
	printf("enter name");
	scanf("%s",&name);
	printf("enter age");
	scanf("%d",&age);
	printf("enter weight");
	scanf("%f",&weight);
	printf("enter gender");
	scanf(" %C",&gender);
	printf("\n%s\n%d\n%f\n%c",name,age,weight,gender);
}
