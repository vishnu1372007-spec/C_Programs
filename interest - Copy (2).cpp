#include<stdio.h>
#include<math.h>
main()
{
	float principal,rate,time,si,ci;
	printf("enter principal amount(P):");
	scanf("%f",&principal);
	printf("enter time in year(t):");
	scanf("%f",&time);
	printf("enter rate in percent(r):");
	scanf("%f",&rate);
	/*calculating simple interest */
	si=(principal*time*rate)/100.0;
	/*calculating compound interest */
	ci=principal*(pow(1+rate/100,time)-1);
	printf("simple interest=%0.3f\n",si);
	printf("compound interest=%0.3f",ci);
}
