#include <bits/stdc++.h>
using namespace std;

bool checkLucky(int number) {
    while(number>0) {
        if(number%10!=4 && number%10!=7)
            return false;
        number/=10;
    }
    return true;
}

int main(void) {
    int input;
    cin>> input;

    /*vector<int> lucky = {4, 7, 47, 74, 444, 447, 474, 477, 777, 774, 747, 744}; //No need 44,77 etc.
    for(auto i:lucky) {
        if(input%i == 0) {
            cout << "YES";
            return 0;
        }
    } Alternate solution for n<=10000 */

    for(int i=2; i<=(input); i++) {
        if(input%i==0 && checkLucky(i)) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}