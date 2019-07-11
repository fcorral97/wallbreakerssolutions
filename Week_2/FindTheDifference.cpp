/*
Fernando Corral
Wallbreakers
Cohort 3
Find the Difference
*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        multiset<char> setS;
        multiset<char> setT;
        for(auto i: s){
            setS.insert(i);
        }
        for(auto i: t){
            setT.insert(i);
        }
        for(auto i: setT){
            if(setS.count(i) != setT.count(i)){
                return i;
            }
        }
        return ' ';
    }
};
