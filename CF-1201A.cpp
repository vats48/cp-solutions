#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int nos, noq;
    vector<string> ans;
    cin >> nos >> noq;
    int points[noq];

    for(int i=0; i<nos; i++) {
        string input;
        cin >> input;
        ans.push_back(input);
    }

    for(int i=0; i<noq; i++) {
        int point;
        cin>>point;
        points[i] = point;
    }

    int freq[5] = {0};
    int total = 0;
    for(int i=0; i<noq; i++) {
        fill(freq, freq+5, 0);
        for(int j=0; j<nos; j++)  {
            freq[(ans[j][i] - 'A')]++;
        }
        total += *(max_element(freq, freq + 5))*points[i];
    }
    cout<<total;
}