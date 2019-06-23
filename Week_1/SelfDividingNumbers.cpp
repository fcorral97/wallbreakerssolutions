/*
Fernando Corral
Wall Breakers
Cohort 3
Self Diving Numbers
*/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        for(int x = left; x <= right; x++){
            int num = x;
            while(true){
                //if number is less than 10 it is self-dividing
                if(x/10 == 0){
                    answer.push_back(x);
                    break;
                }
                //obtain first digit
                int div = num%10;
                //reduce number by one decimal point
                num = num/10;
                //If a digit is 0 then the number is not self dividing
                if(div == 0){
                    break;
                }   
                //if a digit does not divide the number then it is not self diving
                if(x%div != 0){
                    break;
                }
                //Once all numbers have been tested without breaks push to vector
                if(num == 0){
                    answer.push_back(x);
                    break;
                }
            }
        }
        return answer;
    }
};
