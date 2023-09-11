#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num1, num2 ,temp;

    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;
   cout<<"The value of the numbers before swapping  "<<num1<<'\t'<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"The value of the numbers after swapping  "<<num1<<'\t'<<num2;


    return 0;
}
