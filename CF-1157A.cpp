#include <bits/stdc++.h>
using namespace std;

int f(int x) {
    x+=1;
    while(x%10==0) x/=10;
    return x;
}
int main(void) {
    int input;
    set<int> seen;
    cin >> input;

    while (!seen.count(input)) {
        seen.insert(input);
        input = f(input);
    }
    
    cout << seen.size();
}