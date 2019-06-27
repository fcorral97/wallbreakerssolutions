/*
Fernando Corral
Wall Breakers
Cohort 3
Two Sum
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        map<int, int> numbers;
        for(int x = 0; x < nums.size(); x++){
            if(nums[numbers[target - nums[x]]] == (target - nums[x]) & x != numbers[target - nums[x]]){
                solution.push_back(numbers[target-nums[x]]);
                solution.push_back(x);
                return solution;
            }
            else{
                numbers[nums[x]] = x;
            }
        }
        return solution;
    }
};
