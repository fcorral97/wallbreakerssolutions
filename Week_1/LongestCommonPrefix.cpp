/*
Fernando Corral
Wall Breakers
Cohort 3
Longest Common Prefix
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if(strs.size() == 0){
            return prefix;
        }
        int max = INT_MAX;
        for(int x = 0; x < strs.size(); x++){
            if(strs[x].size() < max){
                max = strs[x].size();
            }
        }
        for(int x = 0; x < max; x++){
            char c = strs[0][x];
            for(int y = 1; y < strs.size(); y++ ){
                if(strs[y][x] != c){
                    return prefix;
                }
            }
            prefix.push_back(c);
        }
        return prefix;
    }
};
