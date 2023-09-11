#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;

    cout << "Result of multiplication: " << fixed << setprecision(3) <<  num1 * num2<< endl;

    return 0;
}
