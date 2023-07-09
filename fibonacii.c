// WAP to print fibonacii series till n terms
#include <stdio.h>
int main()
{
  int n, i;
  printf("Enter the value of number of terms that you want to print:");
  scanf("%d", &n);
  int t1 = 0, t2 = 1;
  int nxt = t1 + t2;
  printf("%d,%d,", t1, t2);
  for (i = 3; i <= n; i++)
  {
    printf("%d,", nxt);
    t1 = t2;
    t2 = nxt;
    nxt = t1 + t2;
  }
  return 0;
}