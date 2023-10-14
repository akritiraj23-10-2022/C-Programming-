/*write a program  to generate the fibonacci series
#include <stdio.h>
#include <conio.h>
int main() 
{
  int i, n;
  // initialize first and second terms
  int t1 = 0, t2 = 1;
  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;
  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) 
  {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}*/
#include <stdio.h>
int main() 
{
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  // displays the first two terms which is always 0 and 1
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  nextTerm = t1 + t2;

  while (nextTerm <= n) 
  {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}



