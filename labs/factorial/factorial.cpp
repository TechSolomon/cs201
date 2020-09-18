// PUT YOUR HEADER COMMENT HERE (NOT SHOWN FOR BREVITY)
// Will read in an integer and output the factorial

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int n;
  cout << "Enter a non-negative integer>";
  cin >> n;

  // check for valid input
  if (n < 0) {
    cout << n << " must be a positive integer" << endl;
    return -1;
  }

  // compute factorial
  int factorial = 1; // 0! = 1
  for ( int i=2 ; i<=n ; i++ )
    factorial *= i;  // factorial = factorial * i;

  cout << "factorial(" << n << ") is " << factorial << endl;

  return 0;
}

