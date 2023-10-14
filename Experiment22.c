/*write the program to create a file and store some records in it. Display the contents of the same.*/
#include<stdio.h>
struct stud
{
      int rollno;
      float per;
      char name[20],add[20];
}s;
int main()
{
      FILE *fp;
      fp=fopen("\nstudent.txt","w");
      printf("Enter record of student:\n\n");
      printf("\nEnter student number : ");
      scanf("%d",&s.rollno);
      printf("\nEnter name of student: ");
      scanf("%s",s.name);
      printf("\nEnter student address : ");
      scanf("%s",s.add);
      printf("\nEnter percentage of student : ");
      scanf("%f",&s.per);
      fprintf(fp,"%d\n%s\n%s\n%f",s.rollno,s.name,s.add,s.per);
      printf("\nRecord stored in file...");
      fclose(fp);
      return 0;
}
