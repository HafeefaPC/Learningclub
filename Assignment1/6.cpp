#include <iostream>

using namespace std;

int main() {
   int num1;

    cout << "Enter a floating-point number: ";
    cin >> num1;

    if (num1 == 0) {
        cout << "The number  zero)." << endl;
    } else if (num1 % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
