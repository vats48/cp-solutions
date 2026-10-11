#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n;
    std::cin >> n;
    std::string input[n];
    for(int i = 0; i <n; i++) { 
        std::cin >> input[i];
    }
    for(int i = 0; i <n; i++) {
        if(input[i].length()>10) {
            std::cout << input[i].front() << (input[i].length() - 2) << input[i].back() << '\n';
        } else {
            std::cout << input[i] << '\n';
        }
    }
}
