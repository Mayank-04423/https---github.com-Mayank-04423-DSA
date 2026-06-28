#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        
        vector<int> mapS(256, 0);
        vector<int> mapT(256, 0);

        for (int i = 0; i < s.length(); i++) {
            char charS = s[i];
            char charT = t[i];

           
            if (mapS[charS] != 0 && mapS[charS] != charT) {
                return false;
            }
            // If charT has already been claimed by another character, fail
            if (mapT[charT] != 0 && mapT[charT] != charS) {
                return false;
            }

           
            mapS[charS] = charT;
            mapT[charT] = charS;
        }

        return true;
    }
};