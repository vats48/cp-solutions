#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int k, n , w;
    cin >> k >> n >> w;
    if (n<((w*(w+1))/2*k)) cout << ((w*(w+1))/2*k) - n; 
    else cout << 0;
}