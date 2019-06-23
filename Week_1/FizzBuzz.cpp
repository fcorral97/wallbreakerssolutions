/*
Fernando Corral
Wall Breakers
Cohort 3
FizzBuzz
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> solution;
        for(int x = 1; x <= n; x++ ){
            //If divisible by 3 & 5 FizzBuzz
            if(x%3 == 0 & x%5 == 0){
                solution.push_back("FizzBuzz");
            }
            //If divisible by 3 Fizz
            else if(x%3 == 0){
                solution.push_back("Fizz");
            }
            //If divisible by 5 Buzz
            else if(x%5 == 0){
                solution.push_back("Buzz");
            }
            //else number
            else{
                solution.push_back(to_string(x));
            }
        }
        return solution;
    }
};
