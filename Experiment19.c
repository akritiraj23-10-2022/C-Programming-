/*write a recursive program to find xyz*/
#include<stdio.h>
void main()
 {
 int x, y, z;
 float a, b, c;
 printf("\nEnter the values of x,y and z : ");
 scanf("%d %d %d", &x, &y, &z);
 
 a = (x + y + z) / (x - y - z);
 b = (x + y + z) / 3;
 c = (x + y) * (x - y) * (y - z);
 
 printf("\nValue of a = %f",a);
 printf("\nValue of b = %f",b);
 printf("\nValue of c = %f",c);
 
 getch();
}
