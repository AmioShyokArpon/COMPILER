#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter input: ";
    cin >> s;

    bool a = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            a = false;
            break;
        }
    }

    if (a)
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}