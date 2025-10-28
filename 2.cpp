#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter a character: ";
    cin >> a;

    if (a == '+' || a == '-' || a == '*' || a == '/' || a == '%' || a == '=') {
        cout << a << " is an operator." << endl;
    } else {
        cout << a << " is not an operator." << endl;
    }

    return 0;
}