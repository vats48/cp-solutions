#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string input;
    cin >> input;
    map<int, int> m;
    m[1]; m[2]; m[3];
    for(auto i : input){
        if(i != '+') {
            m[i - '0']++;
        }
    }
    for(auto i: m) {
        for(int j=0; j<i.second; j++) {
            cout << (int)(i.first) << "+";
        }
    }
}