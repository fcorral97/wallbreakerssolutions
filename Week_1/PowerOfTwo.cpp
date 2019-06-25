/*
Fernando Corral
Wall Breakers
cohort 3
Power of Two
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //Take the log base 2 of n
        long num = log2(n);
        //if 2 to the power of num is equal to n and n is not zero than its a power of 2
        if(pow(2, num) == n & n != 0){
            return true;
        }
        return false;
    }
};
