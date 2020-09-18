// PUT YOUR HEADER COMMENT HERE (NOT SHOWN FOR BREVITY)
// Will read in an integer and output the factorial

#include "f.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main()
{

  for ( int i=-20 ; i<20 ; i++ )
    cout << "factorial(" << i << ") is " << factorial(i) << endl;

  return 0;
}

