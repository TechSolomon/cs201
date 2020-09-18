// header
// factorial functions

#include "f.hpp"

int factorial(int n)
{
  // negative input returns an error of -2
  if (n < 0) return -1;

  // 14 or larger causes an overflow (computer/OS dependent)
  if (n > 13) return -2;

  // return base case 0! = 1
  if (n == 0) return 1;

  // n > 0, compute factorial
  int fact = 1;
  for ( int i=2 ; i<=n ; i++ )
    fact *= i;

  return fact;
}

