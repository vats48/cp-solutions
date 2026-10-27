#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for(int i=0; i<n; i++) {
        char input;
        cin >> input;
        v.push_back(input);
    }

    int change = 0;
    for(int i=1; i<n; i++) {
        if(v[i] == v[i-1]) {
            change++;
        }
    }   
    cout << change;
}