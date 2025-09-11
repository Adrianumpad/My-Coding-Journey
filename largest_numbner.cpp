#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "enter two number";
    cin >> a >> b;
    
    if (a>b) {
        cout << a << " is larger" << endl;
    } else if (a<b) {
        cout << b << " is larger" << endl;
    } else {
        cout << "both numbers are equal" << endl;
    }
    return 0;
    
}
