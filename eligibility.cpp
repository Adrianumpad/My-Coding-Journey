
#include <iostream>
using namespace std;

int main() {
    
    int age;
    cout << "enter your age";
    cin >> age;
    
    if (age > 18) {
        cout << "Your eligible to vote" << endl;
    } else {
        cout << "your not eligible to vote" << endl;
    }
    
    return 0;
    
}
