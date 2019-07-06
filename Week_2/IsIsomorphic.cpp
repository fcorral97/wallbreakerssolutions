/*
Fernando Corral
WallBreakers
Cohort 3
Is Isomorphic
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> dictS;
        map<char, char> dictT;
        for(int i = 0; i < s.size(); i++){
            if(dictS[s[i]] == NULL & dictT[t[i]] == NULL){
                dictS[s[i]] = t[i];
                dictT[t[i]] = s[i];
            }
            if(dictS[s[i]] != t[i] || dictT[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }
};
