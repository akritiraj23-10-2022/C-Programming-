/*write the program to accept marks of three subject calculat the total percentage 
and output the result of the student*/
/*#include<stdio.h>
int main()
{
	//int m1,m2,m3,total;
	float p;
	printf("enter the three number of students");
	scanf("%f",&p);
    if(p<=100&&p>=60)
    {
    printf("you are 1st :-");
   }    
    if(p<=60&&p>=45)
    {
	printf("you are 2st:-");
	}
    if(p<=45&&p>=33)
    {
     printf("you are 3st:-");	
	}
	if(p<33)
	{
	 printf("you are fail");	
	}
    return 0;
}*/
#include<stdio.h>
int main()
{
	float p,m,e,avg;
	float pre;
	printf("enter the marks in a physics\n");
	scanf("%f",&p);
	printf("enter the marks in a math\n");
	scanf("%f",&m);
	printf("enter the marks in a english\n");
	scanf("%f",&e);
	avg=(p+m+e)/3;
	printf("Average of result=%.2f",avg);
	 /*if(pre<=100&&pre>=60)
    {
    printf("you are 1st :-");
   }    
    if(pre<=60&&pre>=45)
    {
	printf("you are 2st:-");
	}
    if(pre<=45&&pre>=33)
    {
     printf("you are 3st:-");	
	}
	if(pre<33)
	{
	 printf("you are fail");	
	}*/
	
	return 0;	
}

