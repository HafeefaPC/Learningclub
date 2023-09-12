#include <iostream>

using namespace std;

int main() {
    int mark;

    cout << "Enter the total mark percentage: ";
    cin >> mark;

    if (mark > 90) {
        cout << "Your grade is A";
    }
    else if (mark >= 80 && mark <= 89) {
        cout << "Your grade is B";
    }
    else if (mark >= 70 && mark <= 79) {
        cout << "Your grade is C";
    }
    else if (mark >= 60 && mark <= 69) {
        cout << "Your grade is D";
    }
    else if (mark >= 50 && mark <= 59) {
        cout << "Your grade is E";
    }
    else {
        cout << "You failed";
    }

    return 0;
}
