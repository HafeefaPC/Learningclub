#include <iostream>

using namespace std;

int main() {
    int mark;

    cout << "Enter the total mark percentage: ";
    cin >> mark;
    
    switch (mark / 10) {
        case 10:
             cout << "Your grade is A";
            break;
        case 9:
            cout << "Your grade is A";
            break;
        case 8:
            cout << "Your grade is B";
            break;
        case 7:
            cout << "Your grade is C";
            break;
        case 6:
            cout << "Your grade is D";
            break;
        case 5:
            cout << "Your grade is E";
            break;
        default:
            cout << "You failed";
            break;
    }

    return 0;
}
