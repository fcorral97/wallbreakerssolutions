/*
Fernando Corral
Wall Breakers
Cohort 3
Is Anagram
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size() ){return false;}
        map<char, int> letters;
        for(int x = 0; x < s.size(); x++){
            if(!(letters[s[x]] > 0)){
                letters[s[x]]  = 1;
            }
            else{
                letters[s[x]]++; 
            }
        }
        for(int x = 0; x < t.size(); x++){
            if(letters[t[x]] < 1){
                return false;
            }
            else{
                letters[t[x]]--;
            }
        }
        return true;
    }
};
