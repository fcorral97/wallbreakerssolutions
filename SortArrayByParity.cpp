class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        deque<int> nums;
        vector<int> solution;
        for(int x = 0; x<A.size(); x++){
            if(A[x]%2 == 0){
                nums.push_front(A[x]);
            }
            else{
                nums.push_back(A[x]);
            }
        }
        for(int x = 0; x<nums.size(); x++){
            solution.push_back(nums[x]);
        }
        return solution;
    }
};
