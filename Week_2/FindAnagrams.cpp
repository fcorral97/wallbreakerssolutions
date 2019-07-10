/*
Fernando Corral
Wallbreakers
Cohort 3
Find Anagrams
*/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> solution;
        if(s.size() < p.size()){
            return solution;
        }
        multiset<string> perms;
        do{ 
            perms.insert(p);
        }
        while(next_permutation(p.begin(), p.end()));
        for(int x = 0; x <= (s.size() - p.size()); x++){
            if(perms.count(s.substr(x, p.size())) != 0){
                solution.push_back(x);
            }
        }
        return solution;
    }
};
