/*write the program to reverse a numbers*/
#include<stdio.h>
int main()
{
	int n,r;
	printf("enter the number:-");
	scanf("%d",&n);
	while (n>0)
	{
		r=n%10;
		printf("\nReverse:%d",r);
		n=n/10;
	}
	return 0;
}
