/*write the program simple interest*/
#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter the profit rate time\n");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple interest= %.2f",si);
	return 0;
}
