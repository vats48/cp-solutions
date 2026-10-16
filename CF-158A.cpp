#include <iostream>
using namespace std;

int main(void) {
    int n, k, kth, inp;
    int pass = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) { //No Array, One pass
        
        cin >> inp;
        if(i == k) kth = inp;
        
        if(i <= k) {
            if (inp > 0) pass++;
        } else {
            if(inp == kth && inp > 0) 
                pass++;
            else
                break;
        }
    }
    cout << pass;
}