#include <iostream>
using namespace std;

int main(void) {
    string input;
    string vow = "AEYIOUaeiouy";
    cin >> input;

    string out;
    for(auto i : input) {
        if(vow.find(i) == string::npos) {
            out+=".";
            out+=tolower(i);
        }
    }
    cout << out;
    

    /*for(int i=0; i<(int)input.length(); i++) {
        if(vow.find(input[i]) != string::npos) {
            input.erase(i, 1);
            i--;
        }
        else {
            input[i] = tolower(input[i]);
            input.insert(i, ".");
            i++;
        }
    }
    cout << input; Original far less elegant solution */

}