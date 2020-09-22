// money.cpp
// Solomon Himelbloom
// 20 September 2020
// Money (coins to dollars) example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

using namespace std;

void bankAccount(string coinType, float numberOfCoins) {
    cout << "How many " << coinType << " do you have? ";
}

void coinReceipt(float numberOfCoins, string coinType) {
    cout << "You have " << numberOfCoins << " " << coinType << "." << endl;
}

int main() {
    float pennies, nickels, dimes, quarters, half_dollars, one_dollars = 0;
    float total_coins = 0;

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

    bankAccount("one-dollar coins", one_dollars);
    cin >> one_dollars;

    // Print out the total number and type of each coin.
    cout << " " << endl;
    if (pennies == 1 || nickels == 1 || dimes == 1 
    || quarters == 1 || half_dollars == 1 || one_dollars == 1) {
        coinReceipt(pennies, "penny");
        coinReceipt(nickels, "nickel");
        coinReceipt(dimes, "dime");
        coinReceipt(quarters, "quarter");
        coinReceipt(half_dollars, "half dollar");
        coinReceipt(one_dollars, "one-dollar coin");
    }

    else if (pennies == 0 || pennies > 1 || nickels == 0 || nickels > 1 ||
    dimes == 0 || dimes > 1 || quarters == 0 || quarters > 1 ||
    half_dollars == 0 || half_dollars > 1 || one_dollars == 0 || one_dollars > 1) {
        coinReceipt(pennies, "pennies");
        coinReceipt(nickels, "nickels");
        coinReceipt(dimes, "dimes");
        coinReceipt(quarters, "quarters");
        coinReceipt(half_dollars, "half dollars");
        coinReceipt(one_dollars, "one-dollar coins");
    }

    else {
        cout << "Please enter a positive number of coins. Thanks!" << endl;
    }

    // Convert number of coins to dollars.
    pennies *= 0.01;
    nickels *= 0.05;
    dimes *= 0.10;
    quarters *= 0.25;
    half_dollars *= 0.50;
    one_dollars *= 1.00; 

    cout << " " << endl;
    total_coins = (pennies + nickels + dimes + quarters + half_dollars + one_dollars);
    cout << "The value of all your coins is: $" << total_coins << endl;

    return 0;
}