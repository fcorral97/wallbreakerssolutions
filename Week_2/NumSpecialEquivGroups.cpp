/*
Fernando Corral
Wall Breakers
Cohort 3
Num Special Equiv Groups
*/
class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string> groups;
        for(auto i: A){
            int count[52] = {0};
            for(int j = 0; j < i.size(); j++){
                count[(i[j] - 'a') + (26 *(j%2))]++;
            }
            string str;
            for(auto j: count){
                str.push_back(j);
            }
            groups.insert(str);
        }
        return groups.size();
    }
};
