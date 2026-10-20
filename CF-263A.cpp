#include <iostream>
using namespace std;
#include <cstdlib> 

int main(void) {
    for(int i = 0;i<5; i++){
        for(int j = 0; j<5; j++) {
            int input;
            cin >> input;
            if (input == 1) {
                cout << abs(2 - i) + abs(2 - j);
            }
        }
    }
}