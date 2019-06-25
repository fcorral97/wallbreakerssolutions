/*
Fernando Corral
Wall Breakers
Cohort 3
Plus one
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = 1;
        while(true){
            digits[digits.size()-x]++;
            if(digits[digits.size() -x] > 9){
                if(x == digits.size()){
                    digits.push_back(digits[digits.size()-1]);
                    for(int i = digits.size()-2; i>2; i--){
                        digits[i] = digits[i-1];
                    }
                    digits[0] = 1;
                    digits[1] = 0;
                    break;
                }
                else{
                    digits[digits.size()-x] = 0;
                }
            }
            else{
                break;
            }
            x++;
        }
        return digits;
    }
};
