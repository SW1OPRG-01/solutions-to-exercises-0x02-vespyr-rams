/*Write a program that takes an integer as user-input and writes all even integers up and maybe including the
given integer input. Use a while-loop for iterating the integers.*/
#include <iostream>

using namespace std;

/*print n times c to the terminal*/
void print_chars(int n, char c) {
    int i=0;
    while (i<n) {
        cout << c;
        i = i + 1;
    }
}

int main() {
    unsigned int n; /*the height of the triangle*/
    int lineNo; /*the current line. 1<=lineNo<=n*/
    int spaces; /*the number of spaces at the current line*/
    int stars; /*the number of stars at the current line*/
    cout << "Input the height of the triangle: ";
    cin >> n;
    lineNo = 1;
    spaces = n-1;
    stars = 1;
    while (lineNo<=n) {
        print_chars(spaces, ' ');
        print_chars(stars, '*');
        lineNo = lineNo+1;
        spaces = spaces - 1;
        stars = stars + 2;
        cout << endl;
    }
    return 0;
}