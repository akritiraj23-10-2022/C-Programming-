/*write the program to the binary seaching 
#include<stdio.h>
int main()
{
	int i,low,high,mid,n,key,array[100];
	printf("enter the elements\n");
	scanf("%d",&n);
	printf("enter integer number");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("enter value find \n");
	scanf("%d",&key);
	low = 0;
	high = n-1;
	mid = (low+high)/2;
	while(low<=high)
	{
		if(array[mid]<key)
		low=mid+1;
		else if
		(array[mid]==key)
		{
			printf("%d found at location %d.n",key,mid+1);
			break;
		}
		else
		high=mid-1;
		mid=(low+high)/2;
	}
	if(low>high)
	printf("Not found!%d isn't present in the list.n",key);
	return 0;
}*/
/*double dimensional array*/
#include<stdio.h>
int main()
{
	int array [50][50],row ,col;
	int i,j;
	printf("enter the row");
	scanf("%d",&row);
	printf("enter col");
	printf("enter %d integer value one by one one\n",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("element of array is given below\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
		return 0;
	}
}
