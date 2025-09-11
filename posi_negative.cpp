#include <iostream>
using namespace std;

int main() {
    
    int number;
    
    cout << "enter a number";
    cin >> number;
    
    if (number > 0) {
        cout << "The numberr is positive" << endl;
    } else if (number < 0) {
        cout << "The number is negative" << endl;
    } else {
        cout << "the number is zero" << endl;
    }

    return 0;
