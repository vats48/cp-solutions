#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    
    set<char> s(input.begin(), input.end());
    
    if(s.size()%2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}