/*make the program ask the user for number of die throws
Next make a vector<int> and load as many throws as the user prescribed.
Now calculate the mean of die values and print it
Make the mean calculation into a function*/
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;

double mean(vector<int> v) {
    int sum; /*the sum of v so far*/
    int i; /*iterator through v*/
    sum=0;
    i=0;
    while (i<v.size()) {
        sum = sum + v[i];
        i = i + 1;
    }
    return static_cast<double>(sum)/v.size();
}

int main() {
    int throws; /*the number of throws*/
    vector<int> rolls;
    int i = 0;
    cout << "Enter the number of throws: ";
    cin >> throws;
    while (i<throws) {
        rolls.push_back((rand() % 6) + 1);
        i = i + 1;
    }
    cout << "Mean of the throws: " << mean(rolls);

    return 0;
}