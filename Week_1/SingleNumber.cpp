/*
Fernando Corral
Wall Breakers
Cohort 3
Single Number
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int x = 0; x < nums.size(); x++){
            num = num ^ nums[x];
        }
        return num;
    }
};
