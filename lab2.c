#include<stdio.h>
#include<conio.h>
int main()
{
  int flag=0,i,num;
  printf("\n Enter the number:");
  scanf("%d",&num);
  for(i=2;i<num/2;i++)
  {
  	if(num%i==0)
  {
  	flag=1; //flag variable  is used an signal in program
  	break;
  }
  
  }
  if(flag==1)
  printf("\n%d is a composite number",num);
  else
  printf("\n %d is a prime number",num);
  return 0;
}
/*write the a programmin find wheater the given number is even or odd
if-else-statement*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("enter the number\n");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
	}*/
