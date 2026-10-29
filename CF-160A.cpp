#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> input;
    int n, value;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> value;
        input.push_back(value);
    }
    sort(input.rbegin(), input.rend());

    int you = 0;
    int twin = accumulate(input.begin(), input.end(), 0);
    int no = 0;
    for(auto i:input) {
        if(you <= twin) {
            you+=i; twin-=i;
            no++;
        } else {
            break;
        }
    }
    cout << no;

}