#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin>>n;
    int i=0, j=0, k=0;
    int ii, ij, ik;
    for(int p=0; p<n; p++) {
        cin >> ii >> ij >> ik;
        i+=ii; j+=ij; k+=ik;
    }
    if(i==0 && j==0 && k==0) 
        cout << "YES";
    else 
        cout << "NO";
}