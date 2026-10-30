#include <iostream>
using namespace std;

int main(void) {
    int n, init;
    cin >> init >> n;
    for(int i=0; i<n; i++) {
        if(init%10==0) init/=10;
        else init-=1;
    }
    cout << init;
}