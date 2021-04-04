//
// Created by Joe Cipolla on 4/3/21.
//

# include <iostream>

int main() {

    double tempf;
    double tempc;

    // ask user
    std::cout << "Enter the temperture in Fahrenheit: \n";
    std::cin >> tempf;

    tempc = (tempf - 32) / 1.8;

    std::cout << "the temp is " << tempc << " degrees Celsius.\n";
}