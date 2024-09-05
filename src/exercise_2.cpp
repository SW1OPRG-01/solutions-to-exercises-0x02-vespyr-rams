/*Reconstruct exercise 1 where the sum now is calculated by a function implemented in an
h- and a cpp-file*/

#include <iostream>
#include "sum.h"

using namespace std;

int main() {
    unsigned int n; /*the end of the sum. unsigned since it is positive*/

    cout << "Enter a number for the sum: ";
    cin >> n;

    cout << "The sum is: " << sum(n) << endl;
    return 0;
}