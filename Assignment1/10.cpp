#include <iostream>

using namespace std;

int main() {
    int age1, age2, age3;

    cout << "Enter the age of person 1: ";
    cin >> age1;

    cout << "Enter the age of person 2: ";
    cin >> age2;

    cout << "Enter the age of person 3: ";
    cin >> age3;

    int oldest = max(max(age1, age2), age3);
    int youngest = min(min(age1, age2), age3);

    cout << "The oldest person is " << oldest << " years old." << endl;
    cout << "The youngest person is " << youngest << " years old." << endl;

    return 0;
}
