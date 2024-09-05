/*Write a program that takes an integer as user-input and writes all even integers up and maybe including the
given integer input. Use a while-loop for iterating the integers.*/
#include <iostream>

using namespace std;

int main() {
    int n; /*the end of the sum*/
    int i; /*the even number counter variable*/
    cout << "Input a number: ";
    cin >> n;
    i = 2;
    while (i<=n) {
        cout << " " << i;
        i = i + 2;
    }

    return 0;
}