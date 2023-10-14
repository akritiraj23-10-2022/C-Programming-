/*write the program to calculate julain date*/
#include<stdio.h>
int main()
{
	int month,day,jd;
	printf("\n Enter the month:-");
	scanf("%d",&month);
	printf("Enter the days:-");
	scanf("%d",&day);
	jd=(month=1) *30 + day;
	printf("\n julain date of %02d %d02 d is %d",day,month,jd);
	return 0;
	
}
