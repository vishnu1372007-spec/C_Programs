#include<stdio.h>
main()
{
  int rollno,s1,s2,s3,total;
  float average;
  char name[200];
  printf("enter rollno");
  scanf("\n%d",&rollno);
  printf("enter name");
  scanf(" %[^\n]",&name);
  printf("enter s1,s2,s3");
  scanf("%d%d%d",&s1,&s2,&s3);
  total=s1+s2+s3;
  average=total/3;
  printf("rollno is %d",rollno);
  printf("name is%s",name);
  if(s1<40||s2<40||s3<40)
  {
  	printf("\ngrade is fail");
  }
  else if(average>70)
  {
  	printf("\ngrade is distinction");
  }
  else if(average>60)
  {
  	printf("\ngrade is first class");
  } 
  else
  {
  	printf("\ngrade is pass");
  }
}
