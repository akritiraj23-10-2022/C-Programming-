/*write the program to find the sum of numbers from 1 to N*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the numbers");
	scanf("%d",&n);//n=10
	for(i=1;i<=n;i++)//3<=10
	{
		sum=sum+i;//3+3=6
	}
	printf(" sum of natural numbers%d",sum);
	return 0;
}
