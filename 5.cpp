#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number of elements: ";
    cin >> a;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < a; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < a; i++)
        sum += arr[i];

    cout << "Average = " << (float)sum / a << endl;
    return 0;
}