#include <bits/stdc++.h>
using namespace std;

int searchLetter(char L, vector<char> &ivect) {
    for(int i = 0; i<ivect.size(); i++) {
        if(L == ivect[i])
            return i;
    }
    return -1;
}

int main(void) {
    string input;
    cin >> input;
    vector<char> ivect(input.begin(), input.end());

    for(auto i: string("hello")) {
        int pos = searchLetter(i, ivect);
        if(pos!=-1) {
            ivect.erase(ivect.begin(), ivect.begin() + pos + 1);
        } else {
            cout << "NO";
            return 0;
        }
    }

    for(auto i: string("hello")) {
        
    }
    
    cout << "YES";
}