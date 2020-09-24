//
//  main.cpp
//  l07
//
//  Created by Solomon on 9/22/20.
//  Copyright © 2020 TechSolomon. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "intio.hpp"
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    
    cout << "Type an integer: ";
    int num = getInt();
    
    putInt(123456789, 10);
    cout << endl;
    putInt(987654321, 10);
    cout << endl;
    putInt(111111111, 10);
    cout << endl;
    
    cout << "-=-=-=-=-=-=-=-=-=-" << endl;
    
    putInt(333, 10);
    cout << endl;
    putInt(123456, 10);
    cout << endl;
    putInt(-7, 10);
    cout << endl;
    
    cout << "Printed Integer = " << num << endl;
    
    return 0;
}