#include <iostream>
#include <string>
#include <iomanip>

bool differByOneChar(const std::string& strA, const std::string& strB);

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;

    string candidates[n];
    string ballot[m];
    int votes[n] = {0};
    int gotmatch = 0;

    for(int i = 0; i < n; i++) {
        getline(cin>>ws, candidates[i]);
    }

    for(int i = 0; i < m; i++) {
        getline(cin>>ws, ballot[i]);
    }

    for(int i = 0; i < m; i++) {

        for(int j = 0; j < n; j++) {
            if(candidates[j] == ballot[i]) {
                votes[j]++;
                gotmatch = 1;
                break; 
            }
        }

        if(gotmatch == 0) {
            int match = 0;
            int index = -1;
            for(int j = 0; j<n; j++) {
                if(differByOneChar(candidates[j], ballot[i])) {
                    match++;
                    if(match > 1) {
                        break;
                    }
                    index = j;
                }
            }
            if(match == 1) {
                votes[index]++;
            }
        }
        gotmatch = 0;
    }

    for(int i = 0; i<n; i++) {
        cout << votes[i] << "\n";
    }

}

bool differByOneChar(const std::string& strA, const std::string& strB) {
    if(strA.size() != strB.size()) {
        return false;
    }
    
    int diffCount = 0;
    
    for(size_t i = 0; i< strA.size(); ++i) {
        if(strA[i] != strB[i]) {
            diffCount++;
            if(diffCount > 1) {
                return false;
            }
        }
    }

    if(diffCount == 1) {
        return true;
    }

    return false;
}