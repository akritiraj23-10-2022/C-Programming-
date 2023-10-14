/*write a recursive progrmming to find the factrial of a numbers.*/
#include<stdio.h>
long factorial(int n)
{
	if (n==0)
	return 1;
	else
	return(n*factorial(n-1));
 } 
 int main()
 {
 	int number;
 	long fact;
 	printf("Enter the numbers:");
 	scanf("%d",&number);
 	
 	fact= factorial(number);
 	printf("Factorial of %d is %ld\n",number,fact);
 	return 0;
 }
