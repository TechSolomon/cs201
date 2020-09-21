// money.cpp
// Solomon Himelbloom
// 20 September 2020
// Money example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

using namespace std;

void bankAccount(string coins, float money) {
    cout << "How many " << coins << " do you have? ";
}

int main() {
    float pennies, nickels, dimes, quarters, half_dollars, cents = 0;
    float bank_account = 0;

    bankAccount("pennies", pennies);
    cin >> pennies;

    bankAccount("nickels", nickels);
    cin >> nickels;

    bankAccount("dimes", dimes);
    cin >> dimes;

    bankAccount("quarters", quarters);
    cin >> quarters;

    bankAccount("halfdollars", half_dollars);
    cin >> half_dollars;

    cout << " " << endl;
    cout << "You have " << pennies << " pennies." << endl;
    cout << "You have " << nickels << " nickels." << endl;
    cout << "You have " << dimes << " dimes." << endl;
    cout << "You have " << quarters << " quarters." << endl;
    cout << "You have " << half_dollars << " half dollars." << endl;

    pennies = 0.01*pennies;
    nickels = 0.05*nickels;
    dimes = 0.10*dimes;
    quarters = 0.25*quarters;
    half_dollars = 0.50*half_dollars;

    bank_account = (pennies + nickels + dimes + quarters + half_dollars);
    cout << " " << endl;
    cout << "The value of all your coins is: $" << bank_account << endl;

    return 0;
}