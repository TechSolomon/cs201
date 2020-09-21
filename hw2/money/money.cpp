// money.cpp
// Solomon Himelbloom
// 20 September 2020
// Money example for CS 201.

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
    coinReceipt(pennies, "pennies");
    coinReceipt(nickels, "nickels");
    coinReceipt(dimes, "dimes");
    coinReceipt(quarters, "quarters");
    coinReceipt(half_dollars, "half dollars");
    coinReceipt(one_dollars, "one-dollar coins");

    // Convert number of coins to dollars.
    pennies = 0.01*pennies;
    nickels = 0.05*nickels;
    dimes = 0.10*dimes;
    quarters = 0.25*quarters;
    half_dollars = 0.50*half_dollars;
    one_dollars = 1.00*one_dollars; 

    cout << " " << endl;
    total_coins = (pennies + nickels + dimes + quarters + half_dollars + one_dollars);
    cout << "The value of all your coins is: $" << total_coins << endl;

    return 0;
}