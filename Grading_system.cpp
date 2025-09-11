#include <iostream>
using namespace std;

int main() {
    
    int score;
    cout <<"Enter your score";
    cin >> score;
    
    if (score >= 90) {
        cout << score << " Grade: A" << endl;
    } else if (score >= 80) {
        cout << score << " Grade: B" << endl;
    } else if (score >=70) {
        cout << score << " Grade: C" << endl;
    } else {
        cout << score << " Grade: F" << endl;
    }
    
    return 0;
    
}
