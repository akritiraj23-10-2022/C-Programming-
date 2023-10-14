/*write the grater value in 2 numbers 
#include<stdio.h>
int main()
{
	int f,s;
	printf("enter the first value\n");
	scanf("%d",&f);
	printf("enter the second value\n");
	scanf("%d",&s);
	if(f>s)
	{
		printf("first no is greater");
	}
	if(f<s)
	{
		printf("second no is greater");
	}
	if(f==s)
	{
		printf("both are equal");
	}
	return 0;
}*/
/*write the program grater value in three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	printf("enter the third number \n");
	scanf("%d",&c);
	if(a>b&&b>c)
	{
		printf("%d is greater",a);
	}
	if(b>c&&c>a)
	{
		printf("%d is greater",b);
	}
	if(c>a&&c>b)
	{
		printf("%d is greater",c);
	}
	return 0;
}*/
/*write the program number is positive or negative or zero
#include<stdio.h>
int main()
{
	int no;
	printf("enter the number\n");
	scanf("%d",&no);
	if(no>0)
	{
		printf("no is positive");
	}
	if(no<0)
	{
		printf("no is negetive");
	}
	if(no==0)
	{
		printf("no of zero");
	}
	return 0;
}*/
/*write the program show to result to percent
#include<stdio.h>
int main()
{
	int marks1,marks2,marks3,marks4,total=0;
	float avg=0.0;
	printf("enter the marks math :\n");
	scanf("%d",marks1);
	printf("enter the marks scince :\n");
	scanf("%d",marks2);
	printf("enter the marks english :\n");
	scanf("%d",marks3);
	printf("enter the marks hindi:\n");
	scanf("%d",marks4);
	total=marks1+marks2+marks3+marks4;
	avg=(float) total/4;
	printf("\n total=%d",total);
	printf("\n AGGREDATE=%.2f",avg);
	if(avg>=75)
	printf("\n Distinction");
	else if (avg>=60&&avg<75)
	{
		printf("\n first division");
	}
	else if (avg60>= && avg<40)
	{
		printf("\n second division");
    }
	else if (avg>=40&&avg<50)
	{
		printf("third division");
	}
	else
	printf("\n FAIL");
	return 0;
}*/

