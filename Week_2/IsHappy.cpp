/*
Fernando Corral
Wall Breakers
Cohort 3
Is Happy
*/
class Solution {
public:
    bool isHappy(int n) {
        map<int, bool> exist;
        while(exist[n] != true){
            exist[n] = true;
            int num = n;
            int sum = 0;
            while(num != 0){
                sum += pow(num%10, 2);
                num = num/10;
            }
            if(sum == 1){
                return true;
            }
            n = sum;
        }
        return false;
    }
};
