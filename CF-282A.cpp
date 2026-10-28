#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x = 0;
    for(int i=0; i<n; i++) {
        string input;
        cin >> input;
        if(input == "X++" || input == "++X")
            x++;
        else
            x--;
    }
    cout << x;
}