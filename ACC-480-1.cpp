#include <iostream>
using namespace std;

int main(void) {
    char S11, S12, S21, S22;
    cin >> S11 >> S12;
    cin >> S21 >> S22;
    if(S11 + S22 == 133 || S12 + S21 == 133)
        cout << "No";
    else 
        cout << "Yes";
}