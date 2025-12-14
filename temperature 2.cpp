#include<stdio.h>
main()
{
	float celsius,fahrenheit;
	printf("enter celsius value");
	scanf("%f",&celsius);
	fahrenheit=(1.8*celsius)+32;
	printf("/nfahrenheit=%.2f",fahrenheit);
}
