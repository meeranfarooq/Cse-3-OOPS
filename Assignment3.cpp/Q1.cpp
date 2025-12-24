#include<iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    if (x > y) {
        if (x % y == 0) {
            cout << x << " is a multiple of " << y << endl;
        } else {
            cout << x << " is not a multiple of " << y << endl;
        }
    }
        
}

    