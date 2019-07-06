/*
Fernando Corral
Wall Breakers
Cohort 3
Distribute Candies
*/
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> solution;
        for(auto candy: candies){
            solution.insert(candy);
        }
        if((candies.size()/2) < solution.size()){
            return (candies.size()/2);
        }
        return solution.size();
    }
};
