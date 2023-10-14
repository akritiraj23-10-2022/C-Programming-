/*#include<stdio.h>
int main()
{
	int i=1;
	//int i=99;
	while(i<=100)
	//while(i>=1)
	{
		printf("%d\t",i);
		i++;
		//++i;
	}
	return 0;
}
//table
/*#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i*90);
		i++;
	}
	return 0;
}
*/
//factorial
#include<stdio.h>
int main()
{
	int c,n,f=1;
	printf("enter the numbers:-");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	f=f*c;
	printf("factorial of %d=%d",n,f);
	return 0;
}
