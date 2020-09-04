// character_box.cpp
// Solomon Himelbloom
// 4 September 2020
// Another while loop that prints ASCII art for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    int col;
    cout << "enter number of columns: ";
    cin >> col;

    int row;
    cout << "enter number of rows: "; 
    cin >> row;

    cout << " " << endl;
    cout << "columns: " << col << endl;
    cout << "rows: " << row << endl << "\n";

    int i = 0;
    while (i < row) {
        int j = 1;
        while (j < col) {
            cout << "*";
            j++;
        }

        cout << "*";
        cout << "\n";
        i++;
    }
}