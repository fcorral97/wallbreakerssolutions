/*
Fernando Corral
WallBreakers
Cohort 3
Intersection
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> nums;
        vector<int> solution;
        for(auto i: nums1){
            nums[i] = true;
        }
        for(auto i: nums2){
            if(nums[i]){
                solution.push_back(i);
                nums[i] = false;
            }
        }
        return solution;
    }
};
