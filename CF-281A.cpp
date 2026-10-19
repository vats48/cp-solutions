#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string input;
    cin >> input;

    if('a' <= input[0] && input[0] <= 'z') input[0] = (input[0] - 32);
    
    cout << input;

}