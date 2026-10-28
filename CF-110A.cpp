#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    string input;
    cin >> input;

    int ln = 0;
    string result = "YES";

    for(char digit: input)  {
        if(digit == '4' || digit == '7') ln++;
    }

    if(ln == 0) {
        cout << "NO";
        return 0;
    }

    while(ln!=0) {
        if((ln%10 != 4) && (ln%10 != 7)) {
            result = "NO";
            break;
        }
        ln=ln/10;
    }

    cout << result;
    return 0;
}