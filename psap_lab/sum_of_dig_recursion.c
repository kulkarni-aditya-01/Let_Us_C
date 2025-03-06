#include <stdio.h>
int dig (int);
int main ()
{
  int x, a, n;
  printf ("Enter your number : ");
  scanf ("%d", &n);
  a = dig (n);
  printf ("%d is sum of all digit ", a);
  return 0;
}

int dig (int b)
{
  int sum;
  if (b == 1)
    return 1;
  else if (b != 0)
    {
        //Use the function recursively 
      sum = b % 10 + dig (b / 10);
      return sum;
    }
  else
    return 0;
}
