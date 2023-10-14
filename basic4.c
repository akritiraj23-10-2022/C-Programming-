/*write the program to calclute the distance between two point*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2, y1,y2;
	float distance;
	printf("\n enter the x and y coordinates of the first point:-");
	scanf("%d %d",&x1,&y1);
	printf("\n enter the x and y coordinates of the second point:-");
	scanf("%d %d",&x2,y2);
	/*sqrt and pow are mathmatical function defined in math.h header file*/
	distance = sqrt(pow((x2-x1), 2)+pow((y2-y1),2));
	printf("\n Distance =%f",distance);
	return 0;
	
}
