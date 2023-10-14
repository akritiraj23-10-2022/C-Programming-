/*write a program to find the second largest of four numbers */
//using to the if else laders
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the four values:-\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf("max is =%d",a);
	else if(b>c&&b>d)
	printf("max is =%d",d);
	else if(c>d)
	printf("max is =%d",c);
	else 
	printf("max is =%d",d);
    return 0;
}


	
 

