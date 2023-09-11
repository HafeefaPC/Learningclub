#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float P, R;
    int N;

    cout << "Enter the principal amount, number of years, and rate of interest respectively: ";
    cin >> P >> N >> R;

  

    cout << fixed << setprecision(2); 
    cout << "The simple interest for the given values is: " <<  (P * N * R) / 100 << endl;

    return 0;
}
