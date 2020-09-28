// modifyString.hpp
// Solomon Himelbloom
// 28 September 2020
// Passing by reference [header file] example for CS 201.

#include <string>
#ifndef FILE_MODIFY_STRING_INCLUDED
#define FILE_MODIFY_HPP_INCLUDED

/**
 * Append an integer to a string
 * @param referencedString string to append integer to
 * @param n append (n % 10) to referencedString
 * @return New length of referencedString
 */

int modifyString(std::string & referencedString, int n);

#endif



