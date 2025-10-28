#include <iostream>
using namespace std;

int main() {
    string a;
    cout << "Enter a line: ";
    getline(cin, a);

    if (a.substr(0, 2) == "//")
        cout << "Single line comment" << endl;
    else if (a.substr(0, 2) == "/*" && a.substr(a.length() - 2) == "*/")
        cout << "Multi line comment" << endl;
    else
        cout << "Not a comment" << endl;

    return 0;
}