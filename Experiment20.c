/*write a program to create a student structure and display the same */
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s;
 printf("Enter The Information of Students :\n\n");
 printf("\nEnter Name : ");
    scanf("%s",s.name);
 printf("\nEnter Roll No. : ");
    scanf("%d",&s.roll);
    printf("\nEnter marks : ");
    scanf("%f",&s.marks);
    printf("\nDisplaying Information\n");
 printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    return 0;
}
