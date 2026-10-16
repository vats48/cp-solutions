#include <iostream>
using namespace std;

int main(void) {
    int m,n, out;
    cin>>m>>n;
    if(n%2 == 0) { 
        out = n/2*m; //Since N>M we try to fit all blocks horizontally first
    } else { //One column alone fits vertically
        out = n/2*m + m/2; //Divide by 2 anyway rounds down so works even if m%2 != 0
    }
    cout<<out;
}