/*
Fernando Corral
Wall Breakers
Cohort 3
Detect Capital Use
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool all = true;
        for(int n = word.size()-1; n >= 0; n--){
            if(word.size() == 1){
                return true;
            }
            if(n == 0 & int(word[n]) > 96 & all ){
                return false;
            }
            if(n != 0 & int(word[n]) < 96 & !all){
                return false;
            }
            if(int(word[n]) > 96 & all){
                if(n < (word.size()-1)){
                    return false;
                }
                all = false;
            }
        }
        return true;
    }
};
