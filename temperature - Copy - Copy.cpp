#include<stdio.h>
main()
{
	float fahrenheit,celsius;
	printf("enter fahrenheit value");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("\ncelsius=%.2f",celsius);
}
