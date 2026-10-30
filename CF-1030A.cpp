#include <iostream>
using namespace std;


int main(void) {
    int n, x, hard = 0;
    cin >> n;
    while (n--) { 
        cin >> x; hard |= x; //Bitwise OR 
    }
    cout << (hard ? "HARD" : "EASY");
}