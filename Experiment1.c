/*write the program to find the largest smallest and second largest of three numbers*/
#include<stdio.h>
int main()
{
	int a,b,c,largest,smallest,secondlargest;
	printf ("enter three number :");
	scanf("%d%d%d",&a,&b,&c);
	 largest=a;
	 smallest=b;
	 if(b>largest)
	 largest=b;
	 if(c>largest)
	 largest=c;
	 if(b<smallest)
	 smallest=b;
	 if(c<smallest)
	 smallest=c;
	 secondlargest=(a+b+c)-(largest+smallest);
	 printf("largest number it %d",largest);
	 printf("\n Second largest number is %d",secondlargest);
	 printf("\n smallest number is %d",smallest);
	 return 0;
 } 
