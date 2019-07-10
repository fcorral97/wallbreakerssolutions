/*
Fernando Corral
Wallbreakers
Cohort 3
First Unique Char
*/

class Solution {
public:
    int firstUniqChar(string s) {
        multiset<char> letters(s.begin(), s.end());
        for(int x = 0; x < s.size(); x++){
            if(letters.count(s[x]) == 1){
                return x;
            }
        }
        return -1;
    }
};
