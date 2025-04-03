#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        size_t found = 0;
        for(size_t i = 1; i <= s2.size(); i++) {
            string substring = s2.substr(0, i);
            found = s1.find(substring, found); 
            if (found != string::npos) {
                result.push_back(found);
            } else {
                for(size_t ey = i; ey <= s2.size(); i++) {
                    result.push_back(-1);
                break;
                }
            }
        }
        return result;
    }