#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string input;
    int length;
    cin >> length;
    cin >> input;

    for(int i=0; i<26; i++) {
        if(find(input.begin(), input.end(), (char)('a'+i)) == input.end() && find(input.begin(), input.end(), (char)('A'+i)) == input.end()) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}