// mandelbrot.cpp
// Solomon Himelbloom
// 28 November 2020
// Mandelbrot set example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

/*
For each pixel (Px, Py) on the screen, do:
{
    x0 = scaled x coordinate of pixel (scaled to lie in the Mandelbrot X scale (-2.5, 1))
    y0 = scaled y coordinate of pixel (scaled to lie in the Mandelbrot Y scale (-1, 1))
    x = 0.0
    y = 0.0
    iteration = 0
    max_iteration = 1000
    while (x*x + y*y <= 2*2 AND iteration < max_iteration) {
        xtemp = x*x - y*y + x0
        y = 2*x*y + y0
        x = xtemp
        iteration = iteration + 1
    }
    color = palette[iteration]
    plot(Px, Py, color)
}
*/

int main() {
    std::cout << "Mandelbrot set." << endl;
}
