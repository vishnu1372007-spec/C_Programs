#include<stdio.h>
main()
{
	int San,Eng,Math,Phys,Chem,Sum,Average;
	printf("San=");
	scanf("%d",&San);
	printf("\nEng=");
	scanf("%d",&Eng);
	printf("\nMath=");
	scanf("%d",&Math);
	printf("\nPhys=");
	scanf("%d",Phys);
	printf("\nChem=");
	scanf("%d",&Chem);
	Sum=San+Eng+Math+Phys+Chem;
	printf("Sum of the 5 subjects is %d",Sum);
	Average=Sum/5;
	printf("Average of the 5 subjects is %d",Average);
}
