#include <iostream>
using namespace std;

int main() {
    string a;
    cout << "Enter identifier: ";
    cin >> a;

    if (!((a[0] >= 'A' && a[0] <= 'Z') || (a[0] >= 'a' && a[0] <= 'z') || a[0] == '_')) {
        cout << "Invalid identifier" << endl;
        return 0;
    }

    for (int i = 1; i < a.length(); i++) {
        if (!((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z') ||
              (a[i] >= '0' && a[i] <= '9') || a[i] == '_')) {
            cout << "Invalid identifier" << endl;
            return 0;
        }
    }

    cout << "Valid identifier" << endl;
    return 0;
}