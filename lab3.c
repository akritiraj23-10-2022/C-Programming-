#include<stdio.h>
int main()
{
	int i=0,n, arr[20];
	printf("enter the numbers\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("the array elements are\n");
	for(i=0;i<n;i++)
	printf("arr[%d]=%d\t",i,arr[i]);
	return 0;
}
